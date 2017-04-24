/*
¿Dada las horas trabajadas de 20 personas y la tarifa de pago calcular el salario?
*/
#include<iostream>
#include<iomanip>

using namespace std;
int menu();
float cal(float n1, float n2);
int nada();

struct Trabajadores{
	float horas;
	float tarifa;
	float pago;
	int num;
}T[20];
main(){
	menu();
	nada();
}
int menu(){
	for(int i=1;i<=20;i++){
		cout<<"Trabajador #"<<i<<endl;
		cout<<"Introduce las horas trabajadas: ";
		cin>>T[i].horas;
		cout<<"Introduce la sifra de pago por hora: ";
		cin>>T[i].tarifa;
		cal(T[i].horas,T[i].tarifa);
	}
}
float cal(float n1, float n2){
	for(int i=1;i<=20;i++){
		T[i].pago=T[i].horas*T[i].tarifa;
	}
}
int nada(){
	cout<<fixed;
	cout<<"\n\n";
	for(int i=1;i<=20;i++){
		cout<<"Trabajador #"<<i<<endl;
		cout<<setprecision(2)<<"Su pago sera de "<<T[i].pago<<endl;
	}
}
