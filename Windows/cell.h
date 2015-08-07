#ifndef CELL_H_INCLUDED
#define CELL_H_INCLUDED

void cellAlive(int tab[TAILLE_X][TAILLE_Y]);
void cellDie(int tab[TAILLE_X][TAILLE_Y], int x, int y, int cell);
void cellBirth(int tab[TAILLE_X][TAILLE_Y], int x, int y, int cell);

#endif // CELL_H_INCLUDED
