#include <stdio.h>
#include <stdlib.h>
#include "checkCell.h"
#define TAILLE_X 500
#define TAILLE_Y 500


int checkCell(int tab[TAILLE_X][TAILLE_Y], int x, int y) {

    if(x <= TAILLE_X-1 && x >= 1 && y <= TAILLE_Y-1 && y >= 1)  //si il est dans les limite on vérifie les vosins en on renvoie la somme.
    {

    int cell = tab[x-1][y-1] + tab[x-1][y] + tab[x-1][y+1]
         + tab[x  ][y-1]        +        tab[x  ][y+1]
         + tab[x+1][y-1] + tab[x+1][y] + tab[x+1][y+1];

    return cell;
    }
   else    //sinon on renvoie 0
    {

    return 0;
    }
}
