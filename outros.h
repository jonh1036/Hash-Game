#include<stdio.h>
#include <stdlib.h>

void imprimir();
void inicializa();
void verifica();
void escolha();
void vitoria();
void direita();

extern char mat[3][3], tecla;
extern int round, x, y;

void imprimir(){//Função que imprime a matriz completa
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        	if(y == i && x == j && mat[y][j] == ' ')
        		printf(" * ");
			else
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

void direita(){
	if (x<2)
		x++;
	imprimir();
}

void verifica(){
	switch(tecla){
		case 13: escolha();//Cadastrar a escolha
			break;
		case 97: //Movimentar para a esquerda
			break;
		case 100: direita();//Movimentar para a direita
			break;
		case 113: exit(0);//Encerrar o jogo
			break;
		case 115: //Movimentar para baixo
			break;
		case 119: //Movimentar para cima
			break;
	}
}

void escolha(){
	if(round%2==0 && tecla == 13)
		mat[y][x] = 'X';
	else if(round!=0 && tecla == 13)
		mat[y][x] = 'O';
		
	round++;
}

void vitoria(){
	int i, j, contX = 0, contO = 0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(mat[i][j] == 'X')
				contX++;
			else if(mat[i][j] == 'O')
				contO++;
		}
		if(contX==3){
			printf("\n\nVITORIA DO X");	
			exit(0);
		}
		else if(contO==3){
			printf("\n\nVITORIA DO O");	
			exit(0);
		}
		else{
			contX = 0;
			contO = 0;
		}
	}
	if((mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X')||(mat[0][2] == 'X' && mat[1][1] == 'X' && mat[2][0] == 'X' )){
		printf("\n\nVITORIA DO X");	
		exit(0);
	}
	else if((mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == 'O')||(mat[0][2] == 'O' && mat[1][1] == 'O' && mat[2][0] == 'O' )){
		printf("\n\nVITORIA DO O");	
		exit(0);
	}
}
