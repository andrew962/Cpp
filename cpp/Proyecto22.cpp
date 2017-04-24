#include<iostream>

using namespace std;

string nom[5];
float notas[4];
float nota[4];
int j=0,i=0;
float r=0.0,no=0.0,rr=0.0;
int opc;

void opcion();
void opcion1();
void opcion2();
//void opcion3();
//void opcion4();

void opcion(){      /*Instacion de Funciones*/
    do
	{
		system("cls");
		cout<<"1.- Promedio de Estudiantes"<<endl;						//Menu
		cout<<"2.- Pilas"<<endl;
        cout<<"3.- Colas"<<endl;
		cout<<"4.- Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		switch(opc)
		{
			case 1:
                opcion1();
				break;
			case 2:
  //              opcion3();
				break;
            case 3:
    //            opcion4();
				break;
		}
	}while (opc!=4);
}


void opcion1(){
	for(int i=0;i<=4;i++){
		cout<<"Introduce tu Nombre: ";
		cin>>nom[i];
		cout<<"Introduce tus Notas: "<<endl;
		for(int j=0;j<=3;j++){
			cout<<"-->";
			cin>>notas[j];
		}
		r=(notas[0]+notas[1]+notas[2]+notas[3])/4;
		nota[i]=r;
		}
		opcion2();
	}
void opcion2(){
	for(int i=0;i<=4;i++){
		cout<<"Estudiate#"<<i<<": ";
		cout<<nom[i]<<endl;
        cout<<"Notas: ";
		cout<<nota[i]<<endl;
	}
	system("pause");
}
main(){
    opcion();
}
