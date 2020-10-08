#include <iostream>

using namespace std;

int main()
{
	float base;
	float altura;
	
	cout << "ingresa la medida de la base del triangulo"<< endl;
	cin >> base ;
	cout << "ingresa la medida de la altura"<< endl;
	cin >> altura ;
	float resultado = ((base*altura)/2);
	cout << "Esta es el area del triangulo " << endl;
	cout << resultado ;
	
	return 0;
	
}

