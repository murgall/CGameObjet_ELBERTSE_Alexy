#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include <SDL.h>
#include<SDL_image.h>




using namespace std;
#include"Cvect2D.h"


int main(int argc, char * argv[])
{
	
	bool quit = false;
	float fltx = 288;
	float flty = 208;
	int pos_character = 0;


	
	SDL_Event event;

	SDL_Init(SDL_INIT_VIDEO);
	IMG_Init(IMG_INIT_PNG);

	SDL_Window *window = SDL_CreateWindow("title", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);


	SDL_Surface * image = IMG_Load("spriteOne.png");
	SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);


	SDL_SetRenderDrawColor(renderer, 168, 230, 255, 255);
	SDL_RenderClear(renderer);

	while (!quit)
	{

		Uint32 ticks = SDL_GetTicks();
		Uint32 seconds = ticks / 250;
		Uint32 sprite = seconds % 4;


		SDL_PollEvent(&event);

		while (SDL_PollEvent(&event) != NULL)
		{
			switch (event.type)
			{
			case SDL_QUIT:
				quit = true;
				break;
			case SDL_KEYDOWN:				//déplacement du personnage avec les flèches directionnelles
				switch (event.key.keysym.sym)
				{
				case SDLK_LEFT:  fltx--; pos_character = 1; break;
				case SDLK_RIGHT: fltx++; pos_character = 2; break;
				case SDLK_UP:    flty--; pos_character = 3; break;
				case SDLK_DOWN:  flty++; pos_character = 0; break;
				}
				break;
			}
		}
		SDL_Rect srcrect = { sprite * 32, 48 * pos_character, 32, 48 };
		SDL_Rect dstrect = { fltx, flty, 32, 48 };

		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, texture, &srcrect, &dstrect);
		SDL_RenderPresent(renderer);
	}

	SDL_DestroyTexture(texture);
	SDL_FreeSurface(image);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	IMG_Quit();
	SDL_Quit();



	return 0;
	
}