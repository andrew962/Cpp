/* Ejemplo de una pila. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <alloc.h>

void insertar(void);
void extraer(void);
void visualizar(void);

struct pila
{
	char nombre[20];
	struct pila *ant;
}*CAB=NULL,*AUX=NULL;

main() /* Rellenar, extraer y visualizar */
{
	char opc;
	do
	{
		clrscr(); /* borramos la pantalla */
		gotoxy(30,8); /* columna 30, fila 8 */
		printf("1.- Insertar");
		gotoxy(30,10);
		printf("2.- Extraer");
		gotoxy(30,12);
		printf("3.- Visualizar la pila");
		gotoxy(30,14);
		printf("4.- Salir");
		opc=getch( );
		switch(opc)
		{
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

void insertar(void)
{
	AUX=(struct pila *)malloc(sizeof(struct pila));
	clrscr();
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
	clrscr();
	AUX=CAB;
	while (AUX!=NULL)
	{
		printf("Nombre: %s\n",AUX->nombre);
		AUX=AUX->ant;
	}
	getch( );
}
