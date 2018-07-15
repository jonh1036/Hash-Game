#include <stdio.h>
#include "outros.h"

int x = 0, y = 0, round = 0, vitX = 0, vitO = 0;//Coordenadas da matriz e contador de rodadas
char mat[3][3], tecla;//Criação da matriz e opção

int main(void) {
    
	inicializa();//Inicialização da Matriz
    while(1){
    	if(round%2==0)
    		printf("\n\nVez do jogador X");
    	else
    		printf("\n\nVez do jogador O");
    	printf("\n\nPara escolher, tecle <ENTER>");
		tecla = getch();
		system("cls");
		verifica(tecla);
		vitoria();
    }
    printf("\n\n");	
	return 0;
}
