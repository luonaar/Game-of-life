#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "boucleTab.h"
#include "checkCell.h"
#include "cell.h"
#define TAILLE_X 500
#define TAILLE_Y 500
#define CELL_ALIVE 1
#define CELL_DEAD 0



void boucleTab(int tab[TAILLE_X][TAILLE_Y], int tabClone[TAILLE_X][TAILLE_Y], int x, int y)  //boucle qui permet de scaner case par case l'état des celulles.
{

    int cellAlive = 0;
    for(y=0; y<TAILLE_X; y++)
        {
            for(x= 0; x<TAILLE_Y; x++)
               {
                if(tab[x][y] == CELL_ALIVE){
                cellAlive = checkCell(tabClone, x, y);
                cellDie(tab, x, y, cellAlive);
                }
                else if(tab[x][y] == CELL_DEAD)
                {
                cellAlive = checkCell(tabClone, x, y);
                cellBirth(tab, x, y, cellAlive);
                }
            }
    }
}
