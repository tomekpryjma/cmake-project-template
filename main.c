#include <stdio.h>
#include <SDL.h>

int main() {
    if (SDL_Init(0) != 0) {
        printf("%s\n", SDL_GetError());
        exit(1);
    }
    printf("Hello\n");
    return 0;
}