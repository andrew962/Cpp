#include <cstdlib>
#include<iostream>
#include<iomanip>

using namespace std;

//Estructura de estudiantes
struct Estudiantes{
	string nom;
	float not1;
	float not2;
	float not3;
	float not4;
	float prom;
}E[5];

//Funciones
int opcion();
void pilas();
//void colas();
int promedio();
int ver();
float calculo(float a,float b,float c,float d);

int promedio(){
	system("cls");
	for(int i=1;i<5;i++){
		cout<<"Estudiante #"<<i<<endl;
		cout<<"Nombre: ";
		cin>>E[i].nom;
		cout<<"Nota #1: ";
		cin>>E[i].not1;
		cout<<"Nota #2: ";
		cin>>E[i].not2;
		cout<<"Nota #3: ";
		cin>>E[i].not3;
		cout<<"Nota #4: ";
		cin>>E[i].not4;
		calculo(E[i].not1,E[i].not2,E[i].not3,E[i].not4);
		system("cls");
	}
}
//Calculo de notas de alumnos
float calculo(float a,float b,float c,float d){
	for(int i=1;i<5;i++){
		E[i].prom=(E[i].not1+E[i].not2+E[i].not3+E[i].not4)/4;
	}
}
int ver(){
	cout<<fixed;
	system("cls");
	for(int i=1;i<5;i++){
		cout<<"El Estudiante #"<<i<<" "<<E[i].nom<<endl;
		cout<<"Sus Notas fueron: "<<endl;
		cout<<setprecision(2)<<E[i].not1<<endl;
		cout<<setprecision(2)<<E[i].not2<<endl;
		cout<<setprecision(2)<<E[i].not3<<endl;
		cout<<setprecision(2)<<E[i].not4<<endl;
		cout<<setprecision(2)<<"Su promedio fue: "<<E[i].prom<<endl;
		cout<<"\n";
	}
	system("pause");
	system("cls");
}
int opcion(){/* Menu de opciones principal*/
	char opc;
	system("cls");
	do{
		cout<<"1.- Promedio de Estudiantes"<<endl;
		cout<<"2.- Ver Promedios"<<endl;
		cout<<"3.- Pilas"<<endl;;
		cout<<"4.- colas"<<endl;
		cout<<"5.- Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		switch(opc){
			case '1':
				promedio();
				break;
			case '2':
				ver();
				break;
			case '3':
				//pilas();
				break;
            case '4':
				//colas();
				break;
		}
	}while (opc!='5');
}

int main(){
	opcion();
}
