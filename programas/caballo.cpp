#include<iostream>

using namespace std;

class Caballo{
public:
    int ObtenerEdad();             //Funcion de acceso
    void ConfigurarEdad(int edad); //Funcion acceso
    int Relinchar();               //Funcion general
private:                           //Seccion privada
    int suEdad;                    //variable miembro
};
/*
 ObtenerEdad, funcion de acceso publica
 devuelve el valor del mienbro suEdad
 */
int Caballo::ObtenerEdad(){
    return suEdad;
}
/*
 definicion de ConfigurarEdad, funcion acceso publica
 configurar mienbro suEdad
 */
void Caballo::ConfigurarEdad(int edad){
    /*
     configurar la variable miembro
     valor pasado por el parametro
     */
    suEdad=edad;
}
int main(){
    Caballo Ca;
    Ca.ConfigurarEdad(10);
    cout<<"el caballo tiene ";
    cout<<Ca.ObtenerEdad();
}
