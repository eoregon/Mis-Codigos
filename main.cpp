/*
	Name: 
	Copyright: 
	Author: 
	Date: 06/10/17 16:47
	Description: pag:98
	
*/
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield); //arrego de punto decimal (6 digitos decimales)
	cout << "divisi\xA2n entera: 9/5 = " << 9 / 5 << endl << endl;
	cout << "divisi\xA2n de punto flotante: 9.0/5.0 " << endl;
	cout << 9.0 / 5.0 << endl << endl;
	cout << "Divisi\xA2n mezclada: 9.0/5= " << 9.0 / 5 << endl;
	cout << "\nconstantes dobles: 1e7/9.0 = ";
	cout << 1.e7 / 9.0 << endl; // double por defecto
	cout << "\nconstantes flotantes: 1e7f/9.0f = ";
	cout << 1.e7f / 9.0 << endl;
	return 0;
}
