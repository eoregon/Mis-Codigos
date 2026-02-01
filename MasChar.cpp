/*
	Archivo: MasChar.cpp
	Author: E.O.R.
	Date: 05/10/17 14:37
	Descrición: pag.: 80
*/

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// alt+15 (¤) es ñ
int main(int argc, char** argv) {
	using namespace std;
	char ch = 'E';  // asigan el código ASCII de M a ch
	int i = ch; 	// almacena el mismo código en un 'int'
    cout << "El codigo ASCII para " << ch << " es " << i << endl << endl;
    cout << "Sumar uno al codigo caracter: " << endl;
	//for (int j = 1; j<=128; j=j+1) { //bucle para char asignado
		ch = ch + 1; //cambia el código carácter 
		i = ch;  		// almacena el nuevo código caracter en i
		cout << "El codigo ASCII para " << ch << " es " << i << endl;
	//}
	//usando miembro de función cout.put() para mostrar un char
	cout << endl <<"Mostrar char ch usando cout.put(ch): ";
	cout.put(ch);
	
	//usando cout.put() para mostrar un char constante
	cout.put('ñ'); //mostrar el caracter, no el int
	
	// para no salir de la secuencia \n representa nueva linea y \" representa comillas
	cout << endl ;  //manimulador de endl
	cout << '\n';	//usando un caracter constante
	cout << "\n";	//usando una cadena de caracteres
	cout << "\n\"Terminado.\"" << endl;
	/*más notaciones especiales:
	---------------------------------------------------------------------------------------------
	Nombre de caracter | Simbolo ASCII |  código C++  | Código decimal Ascii | Código Hex ASCII
	---------------------------------------------------------------------------------------------
	Nueva linea				NL(LF)			\n					10					0xA
	Tab Horizontal			HT				\t					9					0x9
	Tab vertical			VT				\v					11					0xB
	Retroceso				BS				\b					8					0x8
	Retorno de carro		CR				\r					13					0xD
	Alerta					BEL				\a					7					0x7
	Diagonal invertida		\				\\					92					0x5C
	Signo de interrogación	?				\?					63					0x3F
	apostrofe				'				\'					39					0x27
	comillas				"				\"					34					0x22
	-----------------------------------------------------------------------------------------------				
	*/
	return 0;
}
