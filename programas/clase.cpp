#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

FILE *archivo=fopen("Formulario.docx","w");//Creacion de Archivo

class Formulario{
private:        //Atributos son privados
    char nombre[15];
    char apellido[15];
    char cedula[20];
    char telefono[10];
public:         //Metodos son publicos
    char sexo[2]; // Sin necesidad de ser privado
    char estado[10];
    char edad[3];
    char direccion[50];
    
    
    void recibinombre(){
        cout<<"Ingrese Nombre: ";
        cin>>nombre;
    }
    void recibiapellido(){
        cout<<"Ingrese Apellido: ";
        cin>>apellido;
    }
    void recibiedad(){
        cout<<"Ingrese Edad: ";
        cin>>edad;
    }
    void recibicedula(){
        cout<<"Ingrese Cedula o Pasaporte: ";
        cin>>cedula;
    }
    void recibisexo(){
        cout<<"Ingrese Sexo (M=masculino,F=Femenino): ";
        cin>>sexo;
    }
    void recibitelefono(){
        cout<<"Ingrese Telefono: ";
        cin>>telefono;
    }
    void recibiestado(){
        cout<<"Ingrese Estado Civil (Casado, Soltero, Divorciado, Viudo): ";
        cin>>estado;
    }
    void recibidireccion(){
        cout<<"Direccion: ";
        cin>>direccion;
    }
    
    //*************************//
    void decirnombre(){
        cout<<"Nombre: "<<nombre<<"\n";
        fputs("Nombre:\t\t\t\t",archivo);
        fputs(nombre,archivo);
        fputs("\n",archivo);
    }
    void decirapellido(){
        cout<<"Apellido: "<<apellido<<"\n";
        fputs("Apellido:\t\t\t\t",archivo);
        fputs(apellido,archivo);
        fputs("\n",archivo);
    }
    void deciredad(){
        cout<<"Edad: "<<edad<<"\n";
        fputs("Edad:\t\t\t\t",archivo);
        fputs(edad,archivo);
        fputs("\n",archivo);
    }
    void decircedula(){
        cout<<"Cedula: "<<cedula<<"\n";
        fputs("Cedula o Pasaporte:\t",archivo);
        fputs(cedula,archivo);
        fputs("\n",archivo);
    }
    void decirsexo(){
        cout<<"Sexo: "<<sexo<<"\n";
        fputs("Sexo:\t\t\t\t",archivo);
        fputs(sexo,archivo);
        fputs("\n",archivo);
    }
    void decirtelefono(){
        cout<<"Telefono: "<<telefono<<"\n";
        fputs("Telefono:\t\t\t\t+507 ",archivo);
        fputs(telefono,archivo);
        fputs("\n",archivo);
    }
    void decirestado(){
        cout<<"Estado: "<<estado<<"\n";
        fputs("Estado Civil:\t\t\t",archivo);
        fputs(estado,archivo);
        fputs("\n",archivo);
    }
    void decirdireccion(){
        cout<<"Direccion: "<<direccion<<"\n";
        fputs("Direccion:\t\t\t",archivo);
        fputs(direccion,archivo);
        fputs("\n",archivo);
    }
    
};

int main(){
    Formulario pupi;
    fputs("\t\t\t\t\t\t\t **************",archivo);
    fputs("\n\t\t\t\t\t\t\t * Formulario *",archivo);
    fputs("\n\t\t\t\t\t\t\t **************\n",archivo);
    fputs("\n\n",archivo);
    fputs("\t\t\t\t\t\t\t\t\t\t\t\t\t\t***************\n",archivo);
    fputs("\t\t\t\t\t\t\t\t\t\t\t\t\t\t*\t\t\t*\n",archivo);
    fputs("\t\t\t\t\t\t\t\t\t\t\t\t\t\t*\t\t\t*\n",archivo);
    fputs("\t\t\t\t\t\t\t\t\t\t\t\t\t\t*\t\t\t*\n",archivo);
    fputs("\t\t\t\t\t\t\t\t\t\t\t\t\t\t*\t\t\t*\n",archivo);
    fputs("\t\t\t\t\t\t\t\t\t\t\t\t\t\t*\t Foto \t*\n",archivo);
    fputs("\t\t\t\t\t\t\t\t\t\t\t\t\t\t*\t\t\t*\n",archivo);
    fputs("\t\t\t\t\t\t\t\t\t\t\t\t\t\t*\t\t\t*\n",archivo);
    fputs("\t\t\t\t\t\t\t\t\t\t\t\t\t\t*\t\t\t*\n",archivo);
    fputs("\t\t\t\t\t\t\t\t\t\t\t\t\t\t*\t\t\t*\n",archivo);
    fputs("\t\t\t\t\t\t\t\t\t\t\t\t\t\t***************\n",archivo);
    pupi.recibinombre();
    pupi.recibiapellido();
    pupi.recibiedad();
    pupi.recibicedula();
    pupi.recibisexo();
    pupi.recibitelefono();
    pupi.recibiestado();
    pupi.recibidireccion();
    
    
    pupi.decirnombre();
    pupi.decirapellido();
    pupi.deciredad();
    pupi.decircedula();
    pupi.decirsexo();
    pupi.decirtelefono();
    pupi.decirestado();
    pupi.decirdireccion();

}
