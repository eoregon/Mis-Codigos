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

int main(int argc, char** argv) {
	using namespace std;
	short Chester = SHRT_MAX; 		//inicializar con el valor máximo
	unsigned short Silvia = Chester; 	//Esta bien si la variable sam ya está definida
	
	cout << "Chester tiene " << Chester << " dolares y Silvia tiene " << Silvia;
	cout << " dolares depositados." << endl << "Sumar $1 dolar a cada cuenta." << endl << "Ahora ";
	Chester = Chester + 1;
	Silvia = Silvia + 1;
	cout << "Chester tiene " << Chester << " dolares y Silvia tiene " << Silvia;
	cout << " dolares depositados.\nPobre de Chester!" << endl;
	Chester = CERO;
	Silvia = CERO;
	cout << "Chester tiene " << Chester << " dolares y Silvia tiene  " << Silvia;
	cout << " doalres depositado." << endl;
	cout << "Tomar $1 dolar de cada cuenta." << endl << "Ahora ";
	Chester = Chester - 1;
	Silvia = Silvia - 1;
	cout << "Chester tiene " << Chester << " dolares y Silvia tiene " << Silvia;
	cout << " dolares depositados." << endl << "Suerte de Silvia!" << endl;
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	return 0;
}
