/*
	Name: fltadd.cpp
	Copyright: 
	Author: 
	Date: 06/10/17 15:38
	Description: 
	Pag: 94

 run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Las ventajas de Float es que representan valores entre enteros y su escala puede ser muy gande.
La desventaja es que son lentos y sin un co-procesador matemático pueden dar otros resultados y perder precisión*/
#include <iostream>

int main(int argc, char** argv) {
	using namespace std ;
	float a = 2.34E+22f;
	float b = a + 1.0f;
	
	cout << "\na = " << a << endl << endl;
	cout << "b - a = " << b - a << endl; // el resultado debería dar 1
	
	/*El problema es que 2.34E+22 representa un número con 23 dígitos a la izquierda del decimal(23400000000000000000000.0). 
	Sumando 1, está intentando agregar 1 al 23ro dígito en ese número. 
	Pero el tipo 'flotante' puede representar sólo los primeros 6 o 7 dígitos 
	de un número, por lo que intentar cambiar el dígito 23 no tiene ningún efecto en el valor. */
	
	return 0;
}
