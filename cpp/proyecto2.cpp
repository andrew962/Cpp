#include<iostream>

using namespace std;

string nom[5];
float notas[4];
float nota[4];
int j=0,i=0;
float r=0.0,no=0.0,rr=0.0;

void opcion();
void opcion2();

void opcion(){
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
	}



void opcion2(){
	for(int i=0;i<=4;i++){
		cout<<"Tu Nombre: ";
		cout<<nom[i]<<endl;
		cout<<nota[i]<<endl;
	}
	
}

int main(){
	opcion();
	opcion2();
}
