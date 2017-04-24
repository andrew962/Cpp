/*
¿Dada la duración en minutos de una llamada calcular el costo,
 considerando?
-Hasta tres minutos el costo es 0.50

-Por encima de tres minutos es 0.50 más 0.1*
cada minuto adicional a los tres primeros
*/
#include<iostream>
#include<iomanip>

int menu();
int cal(int n1);
float c;
using namespace std;

main(){ 
	menu();
		cout<<setprecision(2)<<"Su costo fue de $"<<c<<endl;
}
int menu(){
	cout<<fixed;
	float m;
	cout<<"Cuantos Minutos Duro: ";
	cin>>m;
	cal(m);
}
int cal(int n1){
	float v1=0.50,v2=0.1;
	if(n1<=3){
			c=v1;
	}else{
		c=v1+v2*(n1-3);
	}
}
