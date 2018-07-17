#include<stdio.h>
#include <stdlib.h>

void imprimir();
void inicializa();
void verifica();
void escolha();
void vitoria();
void direita();
void esquerda();
void baixo();
void cima();
int cont(int contX, int contO);

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

void direita(){//Função que movimenta para a direita
	if (x<2)
		x++;
	imprimir();
}

void esquerda(){//Função que movimenta para a esquerda
	if (x>0)
		x--;
	imprimir();
}

void baixo(){//Função que movimenta para baixo
	if (y<2)
		y++;
	imprimir();
}

void cima(){//Função que movimenta para cima
	if (y>0)
		y--;
	imprimir();
}

void verifica(){//Função que verifica os casos de teste
	switch(tecla){
		case 13: escolha();//Cadastrar a escolha
			break;
		case 97: esquerda();//Movimentar para a esquerda
			break;
		case 100: direita();//Movimentar para a direita
			break;
		case 113: exit(0);//Encerrar o jogo
			break;
		case 115: baixo();//Movimentar para baixo
			break;
		case 119: cima();//Movimentar para cima
			break;
		default:  imprimir();
			break;
	}
}

void escolha(){//Função que cadastra a escolha do jogador da vez
	if(round%2==0 && tecla == 13 && mat[y][x] == ' '){
		mat[y][x] = 'X';
		round++;
	}
	else if(round!=0 && tecla == 13 && mat[y][x] == ' '){
		mat[y][x] = 'O';	
		round++;
	}
	imprimir();
}

void vitoria(){//Função que verifica se o jogador que escolheu venceu
	int i, j, contX = 0, contO = 0, validacao = 1;
	
	for(i=0;i<3;i++){		//Verificação por linhas
		for(j=0;j<3;j++){
			if(mat[i][j] == 'X')
				contX++;
			else if(mat[i][j] == 'O')
				contO++;
		}
		contX = cont(contX, contO);
		contO = contX;
	}
	
	for(i=0;i<3;i++){			//Verificação por colunas
		for(j=0;j<3;j++){
			if(mat[j][i] == 'X')
				contX++;
			else if(mat[j][i] == 'O')
				contO++;
		}
		contX = cont(contX, contO);
		contO = contX;
	
	}			
	
	if((mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X')||(mat[0][2] == 'X' && mat[1][1] == 'X' && mat[2][0] == 'X' )){
		printf("\n\nVITORIA DO X");	
		exit(0);
	}
	else if((mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == 'O')||(mat[0][2] == 'O' && mat[1][1] == 'O' && mat[2][0] == 'O' )){
		printf("\n\nVITORIA DO O");	
		exit(0);
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(mat[i][j] == ' '){
				validacao = 0;
				break;	
			}
		}
	}
	if(validacao == 1){
		printf("\nEMPATE!");
		exit(0);
	}
}

int cont(int contX, int contO){//Função que imprime a mensagem de vitória do jogador da vez
	if(contX==3){
		printf("\n\nVITORIA DO X");	
		exit(0);
	}
	else if(contO==3){
		printf("\n\nVITORIA DO O");	
		exit(0);
	}
	else{
		return 0;
	}	
}
