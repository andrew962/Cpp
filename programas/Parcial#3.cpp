#include<iostream>
#include<iomanip>

using namespace std;
int menu();
float calculo(float a,float b,float c);

struct Estudiante{
	string nombre;
	int edad;
	float p1;
	float p2;
	float exam;
	float prom;
}A[5];

main(){
	cout<<fixed;
	menu();
	cout<<"\n";
	cout<<"Estudiantes Fracasados"<<endl;
	cout<<"Nombre"<<"	"<<"Promedio"<<endl;
		for(int i=0; i<=1; i++){
			if(A[i].prom<=0.70){
				cout<<setprecision(2)<<A[i].nombre<<"	"<<A[i].prom<<"\n";
		}
	}	
	cout<<"\n";
	cout<<"Estudiantes con Menor nota"<<endl;
	cout<<"Nombre"<<"	"<<"Edad"<<endl;
		for(int i=0; i<5; i++){
			if(A[i].prom>=0.71){
			cout<<setprecision(2)<<A[i].nombre<<"	"<<A[i].edad<<"\n";
			}
		}
	cout<<"\n";
	cout<<"Estudiantes con Mayor promedio"<<endl;
	cout<<"Nombre"<<"	"<<"Promedio"<<endl;
		for(int i=0; i<5; i++){
			if(A[i].prom>=0.80){
				cout<<setprecision(2)<<A[i].nombre<<"	"<<A[i].prom<<"\n";
			}
		}
	cout<<"\n";
	cout<<"Estudiante con Mayor nota"<<endl;
	cout<<"Nombre"<<"	"<<"Promedio"<<endl;
		for(int i=0; i<=1; i++){
			if(A[i].prom>=0.91){
				cout<<setprecision(2)<<A[i].nombre<<"	"<<A[i].prom<<"\n";
			}
	}
}

int menu(){
	for(int i=0; i<2; i++){
		cout<<"Introduce Nombre: ";
		cin>>A[i].nombre;
		cout<<"Introduce Edad: ";
		cin>>A[i].edad;
		cout<<"Nota del Parcial 1: ";
		cin>>A[i].p1;
		cout<<"Nota del Parcial 2: ";
		cin>>A[i].p2;
		cout<<"Notas de examen: ";
		cin>>A[i].exam;
		calculo(A[i].p1,A[i].p2,A[i].exam);		
	}
}
float calculo(float a,float b,float c){
	cout<<fixed;
	//Promedio
		for(int i=0; i<5; i++){
			A[i].prom=(((A[i].p1+A[i].p2)*.4)/200)+((A[i].exam*.6)/100);
			if(A[i].prom==1.00){
				A[i].prom=100.0;
			}
	}
}
