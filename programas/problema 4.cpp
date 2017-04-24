/*
¿A una fiesta asistieron personas de diferentes edades y sexos.
Construir un algoritmos dadas las edades y sexos de las personas?
Calcular :
-Cuantas personas asistieron a la fiesta
-Cuantos hombres y cuantas mujeres
-Promedio de edades por sexo
-La edad de la persona más joven que asistió
-No se permiten menores de edad a la fiesta
-Ingresar datos hasta que se ingrese una edad a cero
*/


#include<iostream>

int menu();

using namespace std;



main(){
	menu();
}

int menu(){
	char sex;
	float pm,pf;
	int e=1,a,m=0,f=0,sexm=0,sexf=0,menor=200;
	while(e!=0){
		cout<<"Introdusca Edad: ";
		cin>>e;
		cout<<"Introdusca Sexo (f=Femenino, m=Masculino)";
		cin>>sex;
		if(e>=18){
			a++;
			if(sex=='m'){
				m++;
				sexm+=e;
			}else if(sex=='f'){
				f++;
				sexf+=e;
			}
			if(e<menor){
				menor=e;
			}
		}
		else{
			cout<<"Menor de edad"<<endl;
		}
	}
	pm=sexm/m;
	pf=sexf/f;
	cout<<"			Hombres"<<"	"<<"Mujeres"<<"	"<<endl;
	cout<<"Asistieron		"<<m<<"	"<<f<<endl;
	cout<<"Promedio de Edad	"<<pm<<"	"<<pf<<endl;
	cout<<"\nPersona mas joven de 	"<<menor;
}
