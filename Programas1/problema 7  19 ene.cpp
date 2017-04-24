#include <iostream>
#include <cstdlib>

using namespace std;


int main ()
{
	char nom[20];
	double sal, hor;
	
	cout <<"Introdusca su nombre: "; 
	gets(nom);
	cout <<"Introdusca su salario por hora: ";
	cin >> sal;
	cout <<"Horas Trabajadas: ";
	cin >> hor;  
	
	double res = sal * hor;
	
	cout <<"Su nombre es: "<< nom << endl; 
	cout <<"Salario: "<< res << endl; 
	
	

}
