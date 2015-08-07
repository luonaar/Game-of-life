#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "boucleTab.h"
#include "checkCell.h"
#include "display.h"
#define TAILLE_X 500
#define TAILLE_Y 500
#define CELL_ALIVE 1
#define CELL_DEAD 0

void cellDie(int tab[TAILLE_X][TAILLE_Y], int x, int y, int cellAlive) //fonction pour tuer une cellule
{
  if(cellAlive < 2 || cellAlive > 3)
    {
        tab[x][y] = CELL_DEAD;
        destroyRect(x, y);
    }

}
void cellBirth(int tab[TAILLE_X][TAILLE_Y], int x, int y, int cellAlive)  //fonction qui donne vie a une cellule
{

    if(cellAlive == 3)
    {
        tab[x][y] = CELL_ALIVE;
        createRect(x, y);
    }


}

void cellAlive(int tab[TAILLE_X][TAILLE_Y])  //fontion qui compte le nombre de cellule en vie
{
int i = 0, j = 0;
    for(i=0; i<TAILLE_X; i++){
        for(j=0; j<TAILLE_Y; j++)
        {
            if(tab[i][j] == CELL_ALIVE)
            {
                createRect(i, j);
            }

        }
  }
}
