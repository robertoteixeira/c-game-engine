#pragma once

#include "core/application.h"

/*
    Represents the basic game state in a game.
    Called for creation by the application.
*/
typedef struct game {
    // The applicatio configuration.
    application_config app_config;

    // Function pointer to game's initialize funcion.
    b8 (*initialize)(struct game* game_inst);

    // Function pointer to game's update funcion.
    b8 (*update)(struct game* game_inst, f32 delta_time);

    // Function pointer to game's render funcion.
    b8 (*render)(struct game* game_inst, f32 delta_time);

    // Function pointer to game's resize funcion.
    void (*on_resize)(struct game* game_inst, u32 width, u32 height);

    // Game-specific game state. Created and managed by the game.
    void* state;
} game;
