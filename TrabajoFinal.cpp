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

float calculo(float n1,float n2);

struct Trabajadores{
	string nombre; //Variable
	float horas; //Variable
	float pago; //Variable
	int edad; //Variable
	float impuestos; //Variable Secundaria
	float sneto; //Variable Secundaria
}T[20];

int menu(){
	for(int j=1;j<=3;j++){
		for(int i=1;i<=3;i++){
//			cout<<"Introducir Nombre de Empleado #"<<i<<": ";
//			cin>>T[i].nombre;
//			cout<<"Introducir Edad de Empleado #"<<i<<": ";
//			cin>>T[i].edad;
			cout<<"Introducir Base de Pago de Empleado #"<<i<<": ";
			cin>>T[i].pago;
			cout<<"Introducir Horas de Empleado #"<<i<<": ";
			cin>>T[i].horas;	
		}
		calculo(T[j].pago,T[j].horas);
	}
}

float calculo(float n1, float n2){
	for(int i=1;i<=3;i++){
		cout<<T[i].pago<<endl;
		cout<<T[i].horas<<endl;
	}
}

int main(){
	menu();
}
