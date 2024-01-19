#include "game-core.h"
#include <stdio.h>

void GameCore_Init() {
    if (SDL_Init(0) != 0) {
        printf("%s\n", SDL_GetError());
        exit(1);
    }
}