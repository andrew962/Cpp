#include <iostream>
#include <cstdlib>

using namespace std;


int main ()
{
	char nom[20];
	double sal, hor, p;
	
	cout <<"Introdusca su nombre: "; 
	gets(nom);
	cout <<"Introdusca su salario por hora: ";
	cin >> sal;
	cout <<"Horas Trabajadas: ";
	cin >> hor; 
	cout << "Porcentaje de retencion: ";
	cin >> p;
	
	double res = sal * hor;
	double r = (p*res)/100;
	double sn = res - r;
	
	cout <<"Su nombre es: "<< nom << endl; 
	cout <<"Salario: B/."<< res << endl; 
	cout << "Retencion: B/."<< r << endl;
	cout << "Salario Neto: B/." << sn << endl;
}
