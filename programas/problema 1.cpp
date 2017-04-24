/*De una lista de 100 números determinar simultáneamente
el máximo y mínimo número*/
#include<iostream>

int menu();
int cal(int n1);

using namespace std;

main(){ 
	menu();
}

int menu(){
	float n;
	cout<<"Introdusca Numero: ";
	cin>>n;
	cal(n);
}
int cal(int n1){
	float max,min;
	max=n1;min=n1;
	for(int i=0;i<=10;i++){
		cout<<"Introdusca Numero: ";
		cin>>n1;
		if(n1>max){
			max=n1;
		}else if(n1<min){
			min=n1;
		}
	}
	cout<<"Mayor "<<max<<endl;
	cout<<"Menor "<<min<<endl;
}
