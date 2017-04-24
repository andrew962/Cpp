#include<iostream>
#include<string>
#include <stdio.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

FILE *archivo=fopen("Hola.txt","w");

class Persona{
public:
    char nombre1[2020];
    int edad;
    
    void nombre(){
        cout<<"Tu nombre: ";
        gets(nombre1);
        cout<<"Tu nombre "<<nombre1;
        cout<<"\n";
        fputs("nombre:\t",archivo);
        fputs(nombre1,archivo);
        fputs("\n",archivo);
    }
};
int main(){
    Persona per;
    
    per.nombre();
    
}
