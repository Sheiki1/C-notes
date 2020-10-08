#include <iostream>
using namespace std;
int main()
{
	//OPERADORES LOGICOS
	/*        Y -> && -> si los 2 valores son verdaderos es verdadero
	          O -> || -> si uno de los 2 valores es verdadero es verdadero
	         NO -> !  
	   Igualdad -> ==
	 Diferencia -> !=
	      Menor -> <
	      Mayor -> >
	Menor igual -> <=
	Mayor igual -> >=  */
	
	bool v1 = (true && true) || false;//true
	bool v2 = (5==5) || (6!=2) && !(1==1);//true
	bool v3 = false && true || false ;//false
	bool v4 = (5<3) || (3>=3) || true;// true
	bool v5 = ((3<=3) && (5<5) || false);//false
	
	cout<< v1<< endl;
	cout<< v2<< endl;
	cout<< v3<< endl;
	cout<< v4<< endl;
	cout<< v5<< endl;
	
	return 0;
	
	
}
