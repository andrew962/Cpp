/*Copyright (c) 2017 Andres Abadia Permission*/

#include <iostream>
#include <iomanip>

/*Proyecto se entrega la semana 7*/
/*
	Utilize varias faunciones para dividir cada porcentaje por materia.
*/


using namespace std;
	
	float cc=0.0,jj=0.0,nn=0.0;//	Los acumuladores de precios de las materias.
	float c1=420.00,c2=580.00,c3=600.00,c4=25.00; //	Precios.
	float por1=1.00,por2=1.05,por3=1.10;	//	Porcentajes de las materias 0%, 5%, 10%.
	float a=0.0,x=0.0; //	Donde guardo la multiplicacion de las oeraciones.
	
	int opc=true; //	Opcion del while true para poder entrar al ciclo cuando se iguala a 0 Cierra el programa.
	int c=0,j=0,n=0; //	Contador de los estudiantes que se matriculan.
	
	//	Declaracion de Funciones.
	int opcion();
	int opcion1();
	int opcion2();
	int opcion3();
	int opcion4();
	
	//	Funciones.
	int opcion(){ //Menu. Seleccion de menu para la eleccion de curso.
		while(opc!=0){
			cout<<"	\n";
			cout<<"	********************"<<endl;
			cout<<"	*Eleccion de cursos*"<<endl;
			cout<<"	********************"<<endl;
			
			cout<<"	Cursos Disponibles\n"<<endl;
			cout<<"	1.C++ B/.420.00"<<endl;
			cout<<"	2.Java B/.580.00"<<endl;
			cout<<"	3..NET B/.600.00"<<endl;
			cout<<"	4.Datos registrados"<<endl;
			cout<<"	5.Salir."<<endl;
			cout<<"\t->";
			cin>>opc;
			opcion1();
		}
	}
	int opcion1(){	//Menu de Cursos.
	cout<<fixed;
		switch(opc){
			case 1:
				cout<<"\n";
				cout<<"	Escojiste C++"<<endl;
				cout<<"	Que turno"<<endl;
				cout<<"	1.Manana 0%"<<endl;
				cout<<"	2.Tarde 5%"<<endl;
				cout<<"	3.Noche 10%"<<endl;
				cout<<"\t->";
				cin>>opc;
				opcion2();
					break;
			case 2:
				cout<<"\n";
				cout<<"	Escojiste Java"<<endl;
				cout<<"	Que turno"<<endl;
				cout<<"	1.Manana 0%"<<endl;
				cout<<"	2.Tarde 5%"<<endl;
				cout<<"	3.Noche 10%"<<endl;
				cout<<"\t->";
				cin>>opc;
				opcion3();
					break;
			case 3:
					cout<<"\n";
				cout<<"	Escojiste .NET"<<endl;
				cout<<"	Que turno"<<endl;
				cout<<"	1.Manana 0%"<<endl;
				cout<<"	2.Tarde 5%"<<endl;
				cout<<"	3.Noche 10%"<<endl;
				cout<<"\t->";
				cin>>opc;
				opcion4();
					break;
			case 4:
				cout<<"\tEstudiantes que Escojieron C++ "<<(c)<<endl;
				cout<<setprecision(2)<<"\tMonto total de C++ B/."<<cc<<endl;
				cout<<"\tEstudiantes que Escojieron Java "<<(j)<<endl;
				cout<<setprecision(2)<<"\tMonto total de Java B/."<<jj<<endl;
				cout<<"\tEstudiantes que Escojieron .NET "<<(n)<<endl;
				cout<<setprecision(2)<<"\tMonto total de .NET B/."<<nn<<endl;
				cout<<"\t";
				cout<<"\n\n\n\n\n";
				system("pause");
				
				break;
			case 5: //	Salir.
				cout<<"\n"<<endl;
				cout<<"	-----------------"<<endl;
				cout<<"	Datos registrados"<<endl;
				cout<<"	-----------------"<<endl;
				cout<<"\n\tEstudiantes que Escojieron C++ "<<(c)<<endl;
				cout<<setprecision(2)<<"\tMonto total de C++ B/."<<cc<<endl;
				cout<<"\tEstudiantes que Escojieron Java "<<(j)<<endl;
				cout<<setprecision(2)<<"\tMonto total de Java B/."<<jj<<endl;
				cout<<"\tEstudiantes que Escojieron .NET "<<(n)<<endl;
				cout<<setprecision(2)<<"\tMonto total de .NET B/."<<nn<<endl;
				cout<<"\n";
				cout<<"	********************"<<endl;
				cout<<"	*     Saliendo     *"<<endl;
				cout<<"	********************"<<endl;
				cout<<"\n\n\n\n\n";
				opc=0;
				break;
			default:
				cout<<"Error x0000001 Materia."<<endl;
				break;
		}	
	}
	int opcion2(){	//Menu de C++.
		c++;
	switch(opc){
		case 1:
			cout<<fixed;
			x=c1*por1;
			cout<<"\n";
			cout<<"	Escojiste el turno de la Manana en C++."<<endl;
			cout<<setprecision(2)<<"	El curso cuesta B/."<<c1<<" mas un impuesto del 0%"<<endl;
			cout<<setprecision(2)<<"	Te quedaria en un Sub-total de B/."<<x<<endl;
			cout<<setprecision(2)<<"	Al final del curso debes precentar un pago de B/."<<c4<<" por derecho de examen."<<endl;
			a=x+c4;
			cout<<setprecision(2)<<"	El Total seria B/."<<a<<" por pagar.";
			cc+=a;
			cout<<"\n";
				break;
		case 2:
			cout<<fixed;
			x=c1*por2;
			cout<<"\n";
			cout<<"	Escojiste el turno de la Tarde en C++."<<endl;
			cout<<setprecision(2)<<"	El curso cuesta B/."<<c1<<" mas un impuesto del 5%"<<endl;
			cout<<setprecision(2)<<"	Te quedaria en un Sub-total de B/."<<x<<endl;
			cout<<setprecision(2)<<"	Al final del curso debes precentar un pago de B/."<<c4<<" por derecho de examen."<<endl;
			a=x+c4;
			cout<<setprecision(2)<<"	El Total seria B/."<<a<<" por pagar.";
			cc+=a;
			cout<<"\n";
			break;
		case 3:
			cout<<fixed;
			x=c1*por3;
			cout<<"\n";
			cout<<"	Escojiste el turno de la Noche en C++."<<endl;
			cout<<setprecision(2)<<"	El curso cuesta B/."<<c1<<" mas un impuesto del 10%"<<endl;
			cout<<setprecision(2)<<"	Te quedaria en un Sub-total de B/."<<x<<endl;
			cout<<setprecision(2)<<"	Al final del curso debes precentar un pago de B/."<<c4<<" por derecho de examen."<<endl;
			a=x+c4;
			cout<<setprecision(2)<<"	El Total seria B/."<<a<<" por pagar.";
			cc+=a;
			cout<<"\n";
			break;
		default:
			c-=1;
			cout<<"Error x0000001 Horario de curso.";
			break;
	}
}
	int opcion3(){	//Menu de Java.
	j++;
	switch(opc){
		case 1:
			cout<<fixed;
			x=c2*por1;
			cout<<"\n";
			cout<<"	Escojiste el turno de la Manana en Java."<<endl;
			cout<<setprecision(2)<<"	El curso cuesta B/."<<c2<<" mas un impuesto del 0%"<<endl;
			cout<<setprecision(2)<<"	Te quedaria en un Sub-total de B/."<<x<<endl;
			cout<<setprecision(2)<<"	Al final del curso debes precentar un pago de B/."<<c4<<" por derecho de examen."<<endl;
			a=x+c4;
			cout<<setprecision(2)<<"	El Total seria B/."<<a<<" por pagar.";
			jj+=a;
			cout<<"\n";
				break;
		case 2:
			cout<<fixed;
			x=c2*por2;
			cout<<"\n";
			cout<<"	Escojiste el turno de la Tarde en Java."<<endl;
			cout<<setprecision(2)<<"	El curso cuesta B/."<<c2<<" mas un impuesto del 5%"<<endl;
			cout<<setprecision(2)<<"	Te quedaria en un Sub-total de B/."<<x<<endl;
			cout<<setprecision(2)<<"	Al final del curso debes precentar un pago de B/."<<c4<<" por derecho de examen."<<endl;
			a=x+c4;
			cout<<setprecision(2)<<"	El Total seria B/."<<a<<" por pagar.";
			jj+=a;
			cout<<"\n";
			break;
		case 3:
			cout<<fixed;
			x=c2*por3;
			cout<<"\n";
			cout<<"	Escojiste el turno de la Noche en Java."<<endl;
			cout<<setprecision(2)<<"	El curso cuesta B/."<<c2<<" mas un impuesto del 10%"<<endl;
			cout<<setprecision(2)<<"	Te quedaria en un Sub-total de B/."<<x<<endl;
			cout<<setprecision(2)<<"	Al final del curso debes precentar un pago de B/."<<c4<<" por derecho de examen."<<endl;
			a=x+c4;
			cout<<setprecision(2)<<"	El Total seria B/."<<a<<" por pagar.";
			jj+=a;
			cout<<"\n";
			break;
		default:
			j-=1;
			cout<<"Error x0000001 Horario de curso.";
			break;
	}
}
	int opcion4(){	//Menu de .NET.
	n++;
	switch(opc){
		case 1:
			cout<<fixed;
			x=c3*por1;
			cout<<"\n";
			cout<<"	Escojiste manana en C++."<<endl;
			cout<<setprecision(2)<<"	El curso cuesta B/."<<c3<<" mas un impuesto del 0%"<<endl;
			cout<<setprecision(2)<<"	Te quedaria en un Sub-total de B/."<<x<<endl;
			cout<<setprecision(2)<<"	Al final del curso debes precentar un pago de B/."<<c4<<" por derecho de examen."<<endl;
			a=x+c4;
			cout<<setprecision(2)<<"	El Total seria B/."<<a<<" por pagar.";
			nn+=a;
			cout<<"\n";
				break;
		case 2:
			cout<<fixed;
			x=c3*por2;
			cout<<"\n";
			cout<<"	Escojiste manana en C++."<<endl;
			cout<<setprecision(2)<<"	El curso cuesta B/."<<c3<<" mas un impuesto del 5%"<<endl;
			cout<<setprecision(2)<<"	Te quedaria en un Sub-total de B/."<<x<<endl;
			cout<<setprecision(2)<<"	Al final del curso debes precentar un pago de B/."<<c4<<" por derecho de examen."<<endl;
			a=x+c4;
			cout<<setprecision(2)<<"	El Total seria B/."<<a<<" por pagar.";
			nn+=a;
			cout<<"\n";
			break;
		case 3:
			cout<<fixed;
			x=c3*por3;
			cout<<"\n";
			cout<<"	Escojiste manana en C++."<<endl;
			cout<<setprecision(2)<<"	El curso cuesta B/."<<c3<<" mas un impuesto del 10%"<<endl;
			cout<<setprecision(2)<<"	Te quedaria en un Sub-total de B/."<<x<<endl;
			cout<<setprecision(2)<<"	Al final del curso debes precentar un pago de B/."<<c4<<" por derecho de examen."<<endl;
			a=x+c4;
			cout<<setprecision(2)<<"	El Total seria B/."<<a<<" por pagar.";
			nn+=a;
			cout<<"\n";
			break;
		default:
			n-=1;
			cout<<"Error x0000001 Horario de curso.";
			break;
	}
}
int main(){
	
	opcion();//	No desgloso nada en el main ya que de salida llamo la primera funcion y cada funcion llama a otra funcon para hace su ciclo.
	
}
