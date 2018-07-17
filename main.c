#include <stdio.h>
#include "outros.h"

int x = 0, y = 0, round = 0, vitX = 0, vitO = 0;//Coordenadas da matriz e contador de rodadas
char mat[3][3], tecla;//Criação da matriz e opção

int main(void) {
    char jogador1[20], jogador2[20];
    
    puts("\nEntre com o nome do jogador 1: ");
    fgets(jogador1, 20, stdin);
    puts("\nEntre com o nome do jogador 2: ");
    fgets(jogador2, 20, stdin);
    system("cls");
	inicializa();//Inicialização da Matriz
    while(1){
    	if(round%2==0)
    		printf("\n\nVez de: %s",jogador1);
    	else
    		printf("\n\nVez de: %s",jogador2);
    		
    	printf("\nPara escolher, tecle <ENTER>");
		tecla = getch();
		system("cls");
		verifica(tecla);
		vitoria();
    }
    printf("\n\n");	
	return 0;
}
