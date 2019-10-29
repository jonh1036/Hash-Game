#include<stdio.h>
#include<stdlib.h>

extern char mat[7][7], opcao;
extern int p1X, p1Y, p2X, p2Y, bolaX, bolaY;

void verifica();
void baixoPlayer1();
void cimaPlayer1();
void baixoPlayer2();
void cimaPlayer2();

void verifica(){
	switch(opcao){
        case 72: cimaPlayer2();//Movimentar para cima a barra do player 1
            break;
        case 80: baixoPlayer2();//Movimentar para baixo a barra do player 2
            break;
		case 113: exit(0);//Encerrar o jogo
			break;
		case 115: baixoPlayer1();//Movimentar para baixo a barra do player 1
			break;
		case 119: cimaPlayer1();//Movimentar para cima a barra do player 1
			break;
	}
}

void baixoPlayer1(){
	if(p1Y<6){
		mat[p1Y][p1X] = ' ';
		p1Y++;
		mat[p1Y][p1X] = '|';	
	}
}

void cimaPlayer1(){
	if(p1Y>0){
		mat[p1Y][p1X] = ' ';
		p1Y--;
		mat[p1Y][p1X] = '|';	
	}
}

void baixoPlayer2(){
	if(p2Y<6){
		mat[p2Y][p2X] = ' ';
		p2Y++;
		mat[p2Y][p2X] = '|';	
	}
}

void cimaPlayer2(){
	if(p2Y>0){
		mat[p2Y][p2X] = ' ';
		p2Y--;
		mat[p2Y][p2X] = '|';	
	}
}
