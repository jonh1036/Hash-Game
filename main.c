#include <stdio.h>
#include "outros.h"

int x = 0, y = 0, round = 0;//Coordenadas da matriz e contador de rodadas
char mat[3][3], tecla;//Criação da matriz e opção

int main(void) {
    
	inicializa();//Inicialização da Matriz
    while(1){
		tecla = getch();
		verifica(tecla);
		system("cls");
		imprimir();
    }
    printf("\n\n");	
	return 0;
}
