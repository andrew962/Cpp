#include<iostream.h>
#include<conio.h>
#include<string.h>
class monitor{   //INICIO DE LA CLASE EMPLEADO
public:
         //CONSTRUCTOR
         monitor(char *,long,int,int);
         //FUNCIONES
         void muestra_pantalla(void);
private:
         char tipo[30];
         long colores;
         int resolucion_x;
         int resolucion_y;
};
monitor::monitor(char *tipo,long colores,int x_res, int y_res){
   strcpy(monitor::tipo,tipo);
   monitor::colores=colores;
   monitor::resolucion_x=x_res;
   monitor::resolucion_y=y_res;
}
void monitor::muestra_pantalla(void){
  cout<<"Tipo de Video....: "<<tipo<<endl;
  cout<<"Colores..........: "<<colores<<endl;
  cout<<"Resoluci¢n.......: "<<resolucion_x<<resolucion_y<<endl;
}
class tarjeta_principal{
public:
         tarjeta_principal(int,int,int);
         void muestra_tarjeta(void);
private:
         int procesador;
         int velocidad;
         int memoria;
};
tarjeta_principal::tarjeta_principal(int procesador,int velocidad,int memoria){
tarjeta_principal::procesador=procesador;
tarjeta_principal::velocidad=velocidad;
tarjeta_principal::memoria=memoria;
}
void tarjeta_principal::muestra_tarjeta(){
cout<<"Procesador....: "<<procesador<<endl;
cout<<"Velocidad.....: "<<velocidad<<" Mhz"<<endl;
cout<<"Memoria.......: "<<memoria<<" Mb"<<endl;
}
class computadora:public monitor,public tarjeta_principal{
public:
         computadora(char *, int, float, char *, long, int, int, int, int, int);
         void muestra_computadora(void);
private:
         char marca[50];
         int disco_duro;
         float disco_flexible;
};
computadora::computadora(char *marca,int disco_duro,float disco_flexible,char *pantalla,long colores,int res_x,int res_y,int procesador,int velocidad,int memoria):monitor(pantalla,colores,res_x,res_y),tarjeta_principal(procesador,velocidad,memoria){
   strcpy(computadora::marca,marca);
   computadora::disco_duro=disco_duro;
   computadora::disco_flexible=disco_flexible;
}
void computadora::muestra_computadora(void){
  cout<<"Marca................: "<<marca<<endl;
  cout<<"Disco duro...........: "<<disco_duro<<"  Mbytes"<<endl;
  cout<<"Unidad de disquetes..: "<<disco_flexible<<"  Mbytes"<<endl;
  muestra_tarjeta();
  muestra_pantalla();
}
void main(void){   //INICIO MAIN
clrscr();
computadora mi_pc("Compaq",212,1.44,"SVGA",16000000,640,480,486,66,8);
mi_pc.muestra_computadora();
getch();
}        //FIN MAIN

