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
	string nombre;
	float salario;
	float horas;
	float pago;
	float impuestos;
	float sneto;
	int edad;
}T[20];

void menu(){
	for(int i=0;i<=20;i++){
		cout<<"Introducir Nombre de Empleado #"<<i<<": ";
		cin>>T[i].nombre;
	}
}

int main(){
	menu();
}
