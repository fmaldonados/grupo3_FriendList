#include "friend.h"
#include<ncurses.h>
#include<cstring>
using namespace std;
Friend::Friend(char* nombre, char* numero){
	this -> nombre = new char[25];
	this -> numero = new char[10];
	strcpy(this -> numero,numero);
	strcpy(this -> numero,numero);
}
void Friend::set_nombre(char* nombre){
	this -> nombre = new char[25];
	strcpy(this ->nombre,nombre);
}
void Friend::set_numero(char* numero){
	this -> numero = new char[10];
	strcpy(this ->numero, numero);
}
char* Friend::get_nombre(){
	return nombre;
}
char* Friend::get_numero(){
	return numero;
}


