/* Ejemplo de una cola. */
#include<iostream>
#include<iomanip>

void insertar(void);
void extraer(void);
void visualizar(void);

struct cola
{
	char nombre[20];
	struct cola *sig;
}*CAB=NULL,*AUX=NULL,*FIN=NULL;

main() /* Rellenar, extraer y visualizar */{
	char opc;
	do{
        system("cls");
		cout<<"1.- Insertar"<<endl;
		cout<<"2.- Extraer"<<endl;
		cout<<"3.- Visualizar la cola"<<endl;
		cout<<"4.- Salir"<<endl;
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
	AUX=(struct cola *)malloc(sizeof(struct cola));
	system("cls");
	cout<<"Nombre: ";
	cin>>AUX->nombre;
	AUX->sig=NULL;
	if (FIN==NULL)
		FIN=CAB=AUX;
	else{
		FIN->sig=AUX;
		FIN=AUX;
	}
}

void extraer(void){
	if (CAB==NULL) return;
	AUX=CAB;
	CAB=CAB->sig;
	free(AUX);
}

void visualizar(void){
	if (CAB==NULL) return;
	system("cls");
	AUX=CAB;
	while (AUX!=NULL){
		cout<<"Nombre: "
        cout<<AUX->nombre;
		AUX=AUX->sig;
	}
}
