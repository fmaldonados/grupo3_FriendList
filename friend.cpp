#include "friend.h"
#include<ncurses.h>

Friend::Friend(char* nombre, int numero){
	this -> nombre = new char[25];
	this -> nombre = nombre;
	this -> numero = numero;
}
void Friend::set_nombre(char* nombre){
	this ->nombre = nombre;
}
void Friend::set_numero(int numero;){
	this -> numero = numero;
}
char* Friend::get_nombre(){
	return nombre;
}
int Friend::get_numero(){
	return numero;
}




