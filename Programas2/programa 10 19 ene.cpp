#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	char nom[20];
	float sal, r, sn;
	
	cout <<"Introdusca su nombre: "; 
	gets(nom);
	cout <<"Introdusca su salario bruto: ";
	cin >> sal;
	
	if (sal <= 1500)
		r = 0;
	else if (sal > 3000) 
			r = (8.00/100)*sal;
	else
			r = (5.00/100)*sal;
	
	sn = sal - r;
	cout <<"Su nombre es: "<< nom << endl; 
	cout <<"Salario: B/."<< sal << endl;
	cout << "Retencion: B/."<< r << endl;
	cout << "Salario Neto: B/." << sn << endl;
}


