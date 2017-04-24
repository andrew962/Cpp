#include<iostream>

using namespace std;
string nom[4];
string cel[4];
string nomb,cell;
int opc;
int i=0;

void opcion();      /*Declaracion Funciones*/
void buscarnom();
void buscarcel();

void opcion(){      /*Instacion de Funciones*/
    do
	{
		system("cls");
		cout<<"1.- Insertar"<<endl;						//Menu
		cout<<"2.- Buscar por Nombre"<<endl;
        cout<<"3.- Buscar por Celular"<<endl;
		cout<<"4.- Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		switch(opc)
		{
			case 1:
				system("cls");
                for(int i=0;i<4;i++){
                cout<<"Insertar Nombre:";
                cin>>nom[i];
                cout<<"Insertar Celular:";
                cin>>cel[i];
                    }
                    
				break;
			case 2:
				buscarnom();
				break;
            case 3:
				buscarcel();
				break;
		}
	}while (opc!=4);
}

void buscarnom(){			//Funcion para buscar nombre
	system("cls");
    cout<<"Nombre a Buscar:";
    cin>>nomb;		//introduce nombre
    for(int i=0;i<10;i++){
       	if(nom[i]==nomb){		//igualo el nombre contra los que se tienen guardados en el array
    		cout<<"El Nombre "<<nom[i]<< " su celular es "<<cel[i]<<endl;		//Se imprime
        	system("pause");
            }
    }
}

void buscarcel(){
	system("cls");
    cout<<"Celular a Buscar:";
    cin>>cell;		//introduce celular
    for(int i=0;i<4;i++){
        if(cel[i]==cell){		//igualo el celular contra los que se tienen guardados en el array
                cout<<"El celular es "<<cel[i]<< " y pertenece a "<<nom[i]<<endl;		//Se imprime
                system("pause");
            } 
    }
}

int main(){
    opcion();
}
