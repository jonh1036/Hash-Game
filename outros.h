#include<stdio.h>

void imprimir();
void inicializa();
void verifica();

extern char mat[3][3];

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

void inicializa(){//Função que inicializa a matriz no início do programa
    int i, j;
    char op;
    
    for(i = 0; i < 3; i++ )
        for(j = 0; j < 3; j++)
            mat[i][j] = ' ';

    mat[0][0] = '*';//Origem
    imprimir();
    mat[0][0] = ' ';
}

void verifica(){
	switch(tecla){
		case 13: //Cadastrar a escolha
			break;
		case 97: //Movimentar para a esquerda
			break;
		case 100: //Movimentar para a direita
			break;
		case 113: //Encerrar o jogo
			break;
		case 115: //Movimentar para baixo
			break;
		case 119: //Movimentar para cima
			break;
	}
}
