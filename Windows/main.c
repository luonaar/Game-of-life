#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <string.h>
#include "checkCell.h"
#include "boucleTab.h"
#include "display.h"
#include "main.h"
#include "cell.h"
#include <time.h>
#define TAILLE_X 500
#define TAILLE_Y 500
#define CELL_ALIVE 1
#define CELL_DEAD 0
#define SIZE_PIXEL_X 800
#define SIZE_PIXEL_Y 600


 void tabInit(int * tab, size_t N, size_t M)   //fonction Initialisant les tableau
{
size_t j, i;

    for(j = 0; j < N; j++)
    {
        for(i = 0; i < M; i++)
        {
            tab[M * j + i] = 0;

        }
    }
}



void tabIter()
{
int tabCase[TAILLE_X][TAILLE_Y], tabClone[TAILLE_X][TAILLE_Y];

size_t N = sizeof(tabCase) / sizeof(tabCase[0]), M = sizeof(tabCase[0]) / sizeof(tabCase[0][0]);
tabInit(tabCase[0], N, M);

N = sizeof(tabClone) / sizeof(tabClone[0]), M = sizeof(tabClone[0]) / sizeof(tabClone[0][0]);
tabInit(tabClone[0], TAILLE_X, TAILLE_Y);

 randPattern(tabCase);
 cellAlive(tabCase);
 int continuer = 50;
    while(continuer != 0)
    {
        SDL_Delay(10);
        int x =0, y = 0;
        memcpy(tabClone, tabCase, sizeof(tabCase));
        boucleTab(tabCase, tabClone, x, y);


        }
}

void randPattern(int tab[TAILLE_X][TAILLE_Y])
{

    int  x = 0, y = 0;
   srand(time(NULL));
for(x=0; x<10; x++){
    for(y=0; y<10; y++){
 tab[x][y] = rand() % 2;
        }
    }
}

int main(int argc, char *argv[])
{

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Surface *screen = NULL;
    screen = SDL_SetVideoMode(SIZE_PIXEL_X, SIZE_PIXEL_Y, 32, SDL_HWSURFACE);
    SDL_WM_SetCaption("Game of Life", NULL);
    SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 255, 255, 255));
    tabIter();
    SDL_Flip(screen);
    free(screen);
    pause();
    SDL_Quit();


    return EXIT_SUCCESS;
}


/*
tabCase[20][20]= CELL_ALIVE;
tabCase[19][21]= CELL_ALIVE;
tabCase[18][21]= CELL_ALIVE;    //pattern du planneur du jeu de la vie.
tabCase[18][20]= CELL_ALIVE;   //Normalement pour X itération 5 cellule restent vivantes.
tabCase[18][19]= CELL_ALIVE;
*/
/*
tabCase[20][20]= CELL_ALIVE;
tabCase[19][21]= CELL_ALIVE;
tabCase[18][21]= CELL_ALIVE;    //pattern du planneur du jeu de la vie.
tabCase[18][20]= CELL_ALIVE;   //Normalement pour X itération 5 cellule restent vivantes.
tabCase[18][19]= CELL_ALIVE;
*/


/*
tabCase[30][20]= CELL_ALIVE;
tabCase[29][19]= CELL_ALIVE;
tabCase[28][19]= CELL_ALIVE;    //pattern du planneur du jeu de la vie.
tabCase[28][20]= CELL_ALIVE;   //Normalement pour X itération 5 cellule restent vivantes.
tabCase[28][21]= CELL_ALIVE;
*/

/*
tabCase[11][10]= CELL_ALIVE;   //pattern du nid d'abeill il est censé comporter 6 case vivante au bout de 2 itérations.
tabCase[10][8]= CELL_ALIVE;
tabCase[10][9]= CELL_ALIVE;
tabCase[10][10]= CELL_ALIVE;
*/

/*
tabCase[15][16] = CELL_ALIVE;
tabCase[14][17] = CELL_ALIVE;
tabCase[14][15] = CELL_ALIVE;
tabCase[13][16] = CELL_ALIVE;
*/
/*
tabCase[15][14] = CELL_ALIVE;
tabCase[15][15] = CELL_ALIVE;
tabCase[14][14] = CELL_ALIVE;
tabCase[14][16] = CELL_ALIVE;
tabCase[13][15] = CELL_ALIVE;
*/
