#include <iostream> 
#include <cmath> 

using namespace std;

int main ()
 {
 	double volumen, radio;
 	const float pi = 3.14159;
 	cout << "Ingrese la medida del radio " << endl;
 	cin >> radio;
 	volumen = 3*(pi*pow(radio,3))/4;
 	cout << "Resultado " <<volumen <<endl;
 	
 	return 0;
 }
 
 
