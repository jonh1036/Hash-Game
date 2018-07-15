#include<stdio.h>

void imprimir();

void imprimir(){//Função que imprime a matriz completa
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %c ",mat[i][j]);
            if(j>=0 && j<=1)
            	printf("|");
        }
        if(i<2)
        	printf("\n-----------\n");
    }
}
