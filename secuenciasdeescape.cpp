#include <iostream>

using namespace std;

int main()
{
	/*SECUENCIAS DE ESCAPE */
	cout << "hello word!"<< "hello word 2!" <<endl;
	/*\n salto de linea*/
	cout << "hello word! \n" << "hello word 2!" <<endl;
	/*\b retroceso*/
	cout << "hello word! \b" << "hello word 2!" <<endl;
	/*\r retorno del carro*/
	cout << "hello word! \r" << "hello word 2!" <<endl;
	/*\t tabulador*/
	cout << "hello word! \t" << "hello word 2!" <<endl;
	return 0;
}
