#include "friend.h"
#include<ncurses.h>

Friend::Friend(char* nombre, char* numero){
	this -> nombre = new char[25];
	this -> nombre = nombre;
	this -> numero = new char[25];
	this -> numero = numero;
}
void Friend::set_nombre(char* nombre){
	this ->nombre = nombre;
}
void Friend::set_numero(char* numero){
	this -> numero = numero;
}
char* Friend::get_nombre(){
	return nombre;
}
char* Friend::get_numero(){
	return numero;
}




