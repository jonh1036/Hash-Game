#include <stdio.h>
#include "outros.h"

int x = 0, y = 0, round = 0;//Coordenadas da matriz e contador de rodadas
char mat[3][3], tecla;//Cria��o da matriz e op��o

int main(void) {
    
	inicializa();//Inicializa��o da Matriz
    while(1){
		tecla = getch();
		verifica(tecla);
		system("cls");
		imprimir();
		vitoria();
    }
    printf("\n\n");	
	return 0;
}
