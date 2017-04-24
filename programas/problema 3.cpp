/*	¿Dado el monto de una compra calcular el descuento considerado
     -descuento es 10% si el monto es mayor a 100 soles
     -descuento es 20% si el monto es mayor a 50 soles y menor o 
	 igual a 100 soles
     -no hay descuento si el monto es mayor o igual a 50 soles*/
     
#include<iostream>
#include<iomanip>
int menu();
float cal(float n1);
	float m;
	float des;

using namespace std;

main(){
	cout<<fixed;
	menu();
		cout<<setprecision(2)<<"Su descuento por su compra fue de B/."<<cal(m);
}
int menu(){
	cout<<"Ingrese el monto de su compra B/. ";
	cin>>m;
	cal(m);
}
float cal(float n1){

	if(n1>100){
		des=n1*0.1;
		return des;
	}else if(m>50 && m<=100){
		des=n1*0.2;
		return des;
	}else{
		des=0;
		return des;
	}
}
