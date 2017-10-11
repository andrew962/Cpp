#include<iostream>
#include<iomanip>

using namespace std;
//Varialbes globales

//Variables que utilizare para guardar los valores ingresados por teclado
int a,b,c;
//Inicializando la funcion para trabajar con ella mas abajo
int triangulo(int n1, int n2, int n3);
//Simplemente el menu
int menu();

int main(){
	menu();
}

int menu(){
	cout<<"Ingrese #1: ";
	cin>>a;
	cout<<"Ingrese #2: ";
	cin>>b;
	cout<<"Ingrese #3: ";
	cin>>c;
	cout<<"\n";
	triangulo(a,b,c);
}

int triangulo(int n1,int n2,int n3){
	if ((n1 == n2) && (n2 == n3)){
		//n1 = 2, n2 = 2, n3 = 2
		cout<<"\nEs equilatero";
	}else if((n1 == n2) || (n1 == n3) || (n2 == n3)){
		
		cout<<"\nEs isoceles";
	}else{
		cout<<"\nEs escaleno";
	}
}
