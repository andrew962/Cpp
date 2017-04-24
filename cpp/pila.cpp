/* Ejemplo de una pila. */
#include<iostream>
#include<iomanip>

using namespace std;

void insertar(void);
void extraer(void);
void visualizar(void);

struct pila
{
	char nombre[20];
	struct pila *ant;
}*CAB=NULL,*AUX=NULL;

int main() /* Rellenar, extraer y visualizar */{
	char opc;
	do{
		system("cls");
		cout<<"1.- Insertar"<<endl;
		cout<<"2.- Extraer"<<endl;
		cout<<"3.- Visualizar la pila"<<endl;
		cout<<"4.- Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		switch(opc){
			case '1':
				insertar( );
				break;
			case '2':
				extraer( );
				break;
			case '3':
				visualizar( );
		}
	}while (opc!='4');
}

void insertar(void){
	AUX=(struct pila *)malloc(sizeof(struct pila));
	system("cls");
	cout<<"Nombre: ";
	cin>>AUX->nombre;
	if (CAB==NULL){
		CAB=AUX;
		AUX->ant=NULL;
	}else{
		AUX->ant=CAB;
		CAB=AUX;
	}
}
void extraer(void){
	if (CAB==NULL) return;
	AUX=CAB;
	CAB=CAB->ant;
	free(AUX);
}
void visualizar(void){
	if (CAB==NULL) return;
    //system("cls");
	AUX=CAB;
	while (AUX!=NULL){
		cout<<"Nombre:" ;
        cout<<AUX->nombre<<endl;
		AUX=AUX->ant;
	}
	system("pause");
}
