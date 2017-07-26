#include <stdio.h>
#include <SDL2/SDL.h>

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = SDL_CreateWindow("A Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 800, SDL_WINDOW_SHOWN);
	printf("minsdl cambio");

	SDL_Delay(4000);

	SDL_DestroyWindow(window);
}
