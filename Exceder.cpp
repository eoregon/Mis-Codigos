/*
	Name: Exceder.cpp
	Author: EOR
	Date: 03/10/17 22:09
	Description: Ejemplo de valores asignados y no asignados cuando se exceden. 
	Pag: 74
*/

#include <iostream>
#define CERO 0 // hacer que el simbolo Cero para el valor 0

#include <climits> //define INT_MAX como el valor int más largo

int main() {
	using namespace std;
	short Fulano = SHRT_MAX; 		//inicializar con el valor máximo
	unsigned short Fulana = Fulano; 	//Esta bien si la variable sam ya está definida
	
	cout << "Fulano tiene " << Fulano << " dolares y Fulana tiene " << Fulana;
	cout << " dolares depositados." << endl << "Sumar $1 dolar a cada cuenta." << endl << "Ahora ";
	Fulano = Fulano + 1;
	Fulana = Fulana + 1;
	cout << "Fulano tiene " << Fulano << " dolares y Fulana tiene " << Fulana;
	cout << " dolares depositados.\nPobre de Fulano!" << endl;
	Fulano = CERO;
	Fulana = CERO;
	cout << "Fulano tiene " << Fulano << " dolares y Fulana tiene  " << Fulana;
	cout << " doalres depositado." << endl;
	cout << "Tomar $1 dolar de cada cuenta." << endl << "Ahora ";
	Funalo = Fulano - 1;
	Fulana = Fulana - 1;
	cout << "Fulano tiene " << Fulano << " dolares y Silvia tiene " << Fulana;
	cout << " dolares depositados." << endl << "Suerte de Fulana!" << endl;
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	return 0;
}

