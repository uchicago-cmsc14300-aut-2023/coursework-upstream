#ifndef LOGIC_H
#define LOGIC_H

#include <stdbool.h>
#include "board.h"


enum turn {
    BLACKS_TURN,
    WHITES_TURN
};

typedef enum turn turn;


enum outcome {
    IN_PROGRESS,
    BLACK_WIN,
    WHITE_WIN,
    DRAW
};

typedef enum outcome outcome;


enum rotation {
    NO_ROTATION,
    CLOCKWISE,
    COUNTERCLOCKWISE
};

typedef enum rotation rotation;


struct game {
    unsigned int run;
    board* b;
    posqueue *black_queue, *white_queue;
    turn player;
    rotation last_rotation;
};

typedef struct game game;


game* new_game(unsigned int run, unsigned int width,
               unsigned int height, enum type type);

void game_free(game* g);

bool place_piece(game* g, pos p);

bool rotate(game* g, bool clockwise);

bool uplift(game* g, cell c);

outcome game_outcome(game* g);

#endif /* LOGIC_H */
