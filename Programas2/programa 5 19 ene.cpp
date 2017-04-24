#include <iostream>
#include <cstdlib>

using namespace std;


int main ()
{
	int A,B;
	cout << "Introdusca 1er numero: ";
	cin >>A;
	cout <<"Introdusca 2do numero: ";
	cin >>B;
	
	int res = A + B;
	if (res < 0)
	{
			cout << "1er numero es: " << A << endl;
	cout << "2do numero es: " << B << endl;
	cout << "La suma de los numeros es: " << res << endl;
	
	}
	else 
	cout<< "tus numeros son: "<<A<<","<<B;
	

}
