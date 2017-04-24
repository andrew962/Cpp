#include <iostream>
#include <cstdlib>

using namespace std;


int main ()
{
	float A,B;
	cout << "Introdusca 1er numero: ";
	cin >>A;
	cout <<"Introdusca 2do numero: ";
	cin >>B;
	
	if (B == 0){
		cout << "La division no es posible";
	}
	else {
		float res = A / B;
		cout<< "El resultado de la division es: "<<res;
	}

}
