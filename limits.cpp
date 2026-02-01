#include <iostream>
#include <climits>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	
	// el operador sizeof yields size of type or of variable
	cout << "int es de   " << sizeof (int) << " bytes."<< endl;
	cout << "short es de " << sizeof n_short << " bytes." << endl;
	cout << "long es de  " << sizeof n_long << " bytes." << endl << endl;
	
	//
	cout << "Valores Maximos:" << endl;
	cout << "int:   " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long:  " << n_long << endl << endl;
	
	//
	cout << "Valor minimo de int = " << INT_MIN << endl;
	cout << "Bits por Bytes = " << CHAR_BIT << endl;
	cout << "Valor Maximo de CHAR y SCHAR: " << CHAR_MAX << endl;
	cout << "Valor minimo de CHAR y SCHAR: " << CHAR_MIN << endl;
	cout << "Valor Maximo de Unsigned CHAR: " << UCHAR_MAX << endl;
	cout << "Valor Maximo de Unsigned short: " << USHRT_MAX << endl;
	cout << "Valor Maximo de Unsigned INT: " << UINT_MAX << endl;
	cout << "Valor Maximo de Unsigned Long: " 	<<ULONG_MAX << endl;
	cout << "declaracion alternativa de c++ int variable(1981)" << endl;
	int variable(1981);
	cout << variable << endl;
	
	system("pause");
	
	
	return 0;
}
