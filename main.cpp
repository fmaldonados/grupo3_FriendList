#include<iostream>
#include<ncurses.h>
#include<cstring>
#include "friend.h"
#include <vector>

//using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(int argc, char* argv[]){
	char opcion;
	initscr();
	bool salir=false;
	vector <Friend> lista;
	move(19,35);
	start_color();
	init_pair(2,COLOR_GREEN,COLOR_BLACK);
	attron(COLOR_PAIR(2));
	printw("Bienvenido a tu agenda de Amigos \n");
	move(20,35);

	
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
		

	
	while(!salir){
		char nombre[26];
	        char numero[10];
		initscr();
		move(20,45);
		init_pair(4,COLOR_GREEN,COLOR_BLACK);
		attron(COLOR_PAIR(4));
		printw("*-*-*-*-*-Menu*-*-*-*-*-* \n");
		init_pair(11,COLOR_MAGENTA,COLOR_BLACK);
                attron(COLOR_PAIR(11));

		move(21,45);
		printw("1) agregar contacto");
		init_pair(12,COLOR_CYAN,COLOR_BLACK);
                attron(COLOR_PAIR(12));

		move(22,45);
		printw("2) listar contactos");
		init_pair(13,COLOR_YELLOW,COLOR_BLACK);
                attron(COLOR_PAIR(13));

		move(23,47);
		printw("3) salir");
		opcion=getch();
		clear();
		echo();
		if(opcion=='1'){
			clear();
			echo();
			move(19,30);
			init_pair(8,COLOR_MAGENTA,COLOR_BLACK);
	                attron(COLOR_PAIR(8));

			printw("Nombre: ");
			for(int i=0;i<25;i++){
				char caracter=getch();
				if(caracter!='\n'){
					if(caracter!=48 &&caracter!=49 &&caracter!=50 &&caracter!=51 &&caracter!=52 &&caracter!=53 &&caracter!=54
					&&caracter!=55 &&caracter!=56 &&caracter!=57){
						nombre[i]=caracter;
					}else{
						i--;
					}
				}else{
					nombre[i]='\0';
					break;
				}
			}
		        init_pair(10,COLOR_GREEN,COLOR_BLACK);
	                attron(COLOR_PAIR(10));
			move(20,30);
	
			printw("Numero: ");
				
			for (int i=0;i<10;i++){
                	        char caracter=getch();
			
			
                	        if(caracter!='\n'){
                	                if(caracter==48 ||caracter==49 ||caracter==50 ||caracter==51 ||caracter==52 ||caracter==53 ||caracter==54
                        	        ||caracter==55 ||caracter==56 ||caracter==57 ||caracter==45){
                                	        if(caracter==45 && i==4){
							numero[i]='-';	
						}else{
							numero[i]=caracter;
						}
                        	        }else{
                                	        i--;
                               		 }
                     		 }else{
              				 numero[i]='\0';
                        	         break;
                               	}
                	}
			clear();
			echo();
	
			Friend amigo(nombre,numero);
			lista.push_back(amigo);
	
		}else if(opcion=='2'){
		
			
			clear();
			echo();

			init_pair(9,COLOR_MAGENTA,COLOR_BLACK);
	                attron(COLOR_PAIR(9));

			move(10,45);
			printw("nombre");
			
			init_pair(9,COLOR_MAGENTA,COLOR_BLACK);
                        attron(COLOR_PAIR(9));
			move(10,80);
			printw("numero");
			for(int i=1;i<=lista.size();i++){
			        init_pair(9,COLOR_MAGENTA,COLOR_BLACK);
                                attron(COLOR_PAIR(9));

				move(10+i,45);
				printw((lista.at(i-1)).get_nombre());

				move(10+i,81);
				printw((lista.at(i-1)).get_numero());
			}
			getch();		
			clear();	
			
		}else if(opcion=='3'){
			salir=true;
		}
		


	}//llave del while
	getch();
	endwin();
	return 0;
}

















