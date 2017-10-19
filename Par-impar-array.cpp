#include<iostream>
#include<iomanip>

/*Elabore un programa que rellne un array con los numeros pares
comprendidos entre 10 y 50 y los muestre en pantalla en orden ascendente*/

using namespace std;

int main(){
	int array[50];
	int n = 10;
	for(int i=0;i<=40;i++){
		array[i] = n;
		if(array[i] % 2 == 0){
			cout << array[i] <<endl;
		}
		n++;
	}
}
