#include<iostream>
<<<<<<< HEAD
#include<ncurses.h>
#include<cstring>
//#include "friend.h"
=======
#include "friend.h"
>>>>>>> 1b3a49ea137ea2e68692e5e9a9d81cc8ad5b4705

//using std::cout;
using std::cin;
using std::endl;

void leerimprimir(char* );
int main(int argc, char* argv[]){
	
	initscr();
	char nombre[25];
	char numero[9];
	numero [3]='-';
	//Friend [];
	move(19,35);
	start_color();
	init_pair(2,COLOR_GREEN,COLOR_BLACK);
	attron(COLOR_PAIR(2));
	printw("Bienvenido a tu agenda de Amigos \n");
	move(20,35);

	attron(COLOR_PAIR(3));
	init_pair(3,COLOR_BLUE,COLOR_BLACK);
	attron(COLOR_PAIR(3));
	printw("Laboratorio 5 de programacion");
	getch();
	clear();
	echo();	
	initscr();
	start_color();
	init_pair(1,COLOR_YELLOW,COLOR_BLACK);
	attron(COLOR_PAIR(1));
	//leerimprimir(nombre);
	printw(nombre);
	





	
	getch();
	endwin();
	return 0;
}

/*void leerimprimir(char* Friend){
	move(19,30);
	printw("Nombre: ");
	getstr();
	printw("Numero: ");
	getstr(numero);	
}*/















