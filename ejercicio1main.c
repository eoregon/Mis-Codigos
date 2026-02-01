#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, suma, resta, multiplicacion;
	
	printf("Ingrese el primer n%cmero: ", 163); //%c llama al codigo 163 de ASCII
	scanf("%i", &n1);
	printf("Ingrese el segundo n%cmero: ", 163);
	scanf("%i", &n2);
	
	suma = n1 + n2; 
	resta = n1 - n2;
	multiplicacion = n1 * n2 ;
	
	printf("La suma es %i \n", suma);
	printf("La resta es %i \n", resta);
	printf("La multiplicaci%cn es : %i \n", 162, multiplicacion);
	system("pause");
	return 0;
}

/*
%i, variable de intrada tipo integral

%c, variable de salida de tipo char

para caracteres con acentos:
 á -> 160
 é -> 130
 í -> 161
 ó -> 162
 ú -> 163
 caracteres del código ASCII 
*/
