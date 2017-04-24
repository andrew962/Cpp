		
/* Ejemplo de una pila. */

//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <alloc.h>
#include<iostream>
#include<iomanip>

void insertar(void);
void extraer(void);
void visualizar(void);

struct pila
{
	char nombre[20];
	struct pila *ant;
}*CAB=NULL,*AUX=NULL;

int main() /* Rellenar, extraer y visualizar */
{
	char opc;
	do
	{
	system("cls");
		cout<<"1.- Insertar"<<endl;
		cout<<"2.- Extraer"<<endl;
		cout<<"3.- Visualizar la pila"<<endl;;
		cout<<"4.- Salir"<<endl;
		cin>>opc;
		switch(opc)
		{
			case '1':
				insertar();
				break;
			case '2':
				extraer();
				break;
			case '3':
				visualizar();
		}
	}while (opc!='4');
}

void insertar(void)
{
	AUX=(struct pila *)malloc(sizeof(struct pila));
	//clrscr();
	printf("Nombre: ");
	gets(AUX->nombre);
	if (CAB==NULL)
	{
		CAB=AUX;
		AUX->ant=NULL;
	}
	else
	{
		AUX->ant=CAB;
		CAB=AUX;
	}
}

void extraer(void)
{
	if (CAB==NULL) return;
	AUX=CAB;
	CAB=CAB->ant;
	free(AUX);
}

void visualizar(void)
{
	if (CAB==NULL) return;
	//clrscr();
	AUX=CAB;
	while (AUX!=NULL)
	{
		printf("Nombre: %s\n",AUX->nombre);
		AUX=AUX->ant;
	}
}
