#include<iostream>
#include<iomanip>

using namespace std;

/*
Variables
Son 20 Empleados
Leer a Cada uno
Nombre, Horas de Trabajo, Base de Pago, Edad

Otras Variables
Impuestos, Saldo Neto
*/

struct Trabajadores{
	string nombre; //Variable
	float horas; //Variable
	float pago; //Variable
	int edad; //Variable
	float impuestos; //Variable Secundaria
	float sneto; //Variable Secundaria
}T[20];

void menu(){
	for(int i=1;i<=5;i++){
		cout<<"Introducir Nombre de Empleado #"<<i<<": ";
		cin>>T[i].nombre;
		cout<<"Introducir Edad de Empleado #"<<i<<": ";
		cin>>T[i].edad;
		cout<<"Introducir Base de Pago de Empleado #"<<i<<": ";
		cin>>T[i].pago;
		cout<<"Introducir Horas de Empleado #"<<i<<": ";
		cin>>T[i].horas;
	}
	for (int i=1;i<=5;i++){
		cout<<"Empleado #"<<i<<": "<<T[i].nombre<<endl;
	}
}

int main(){
	menu();
}
