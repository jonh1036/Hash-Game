#include<stdio.h>

void direita();

extern char mat[3][3];
extern int x, y;

void direita(){
	if (x<2)
		x++;
}
