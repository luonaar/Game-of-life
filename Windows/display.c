#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <string.h>
#include "checkCell.h"
#include "boucleTab.h"
#include "main.h"
#define TAILLE_X 500
#define TAILLE_Y 500
#define CELL_ALIVE 1
#define CELL_DEAD 0


void pause()
 {
int continuer = 1;
SDL_Event event;

while(continuer)
{
    SDL_WaitEvent(&event);
    switch(event.type)
    {
    case SDL_QUIT:
        continuer = 0;
        break;
    }
}

}

void createRect(int x, int y)
{
    x = x*10;
    y= y*10;
    SDL_Rect cell = {x, y, 10, 10};
    SDL_Surface *screen = SDL_GetVideoSurface();
    SDL_FillRect(screen, &cell, SDL_MapRGB(screen->format, 0, 0, 255));
    SDL_Flip(screen);
}

void destroyRect(int x, int y)
{
    x = x*10;
    y= y*10;
    SDL_Rect cell = {x, y, 10, 10};
    SDL_Surface *screen = SDL_GetVideoSurface();
    SDL_FillRect(screen, &cell, SDL_MapRGB(screen->format, 255, 255, 255));
    SDL_Flip(screen);

}
