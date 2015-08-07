#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#define TAILLE_X 500
#define TAILLE_Y 500

void tabInit(int * tab, size_t N, size_t M);
void tabIter();
void randPattern(int tab[TAILLE_X][TAILLE_Y]);



#endif // MAIN_H_INCLUDED
