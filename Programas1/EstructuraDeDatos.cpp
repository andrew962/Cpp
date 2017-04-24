#include <iostream>

using namespace std;

int main()
{
	int terreno, ppino ,ooyamel, ccedro;
	float ha, pino, oyamel, cedro;
	double diez = 10000, millon=1000000;
	float metrospino, metrosoyamel, metroscedro;
	
	cout<< "El gobierno del estado de Mexico desea reforestar un bosque que mide determinado numero de" << endl;
	cout<< "hectareas. Si la superficie del terreno excede a 1 millon de metros cuadrados, entonces decidira" << endl;
	cout<< "sembrar de la sig. manera: Porcentaje de la superficie del bosque Tipo de arbol 70% pino 20%" << endl;
	cout<< "oyamel 10% cedro Si la superficie del terreno es menor o igual a un millon de metros cuadrados, " << endl;
	cout<< "entonces decidira sembrar de la sig. manera: Porcentaje de la superficie del bosque Tipo de arbol " << endl;
	cout<< "50% pino 30% oyamel 20% cedro El gobierno desea saber el numero de pinos, oyameles y cedros " << endl;
	cout<< "que tendra que sembrar en el bosque, si se sabe que en 10 metros cuadrados caben 8 pinos, en 15 " << endl;
	cout<< "metros cuadrados caben 15 oyameles y en 18 metros cuadrados caben 10 cedros. Tambien se sabe " << endl;
	cout<< "que una hectarea equivale a 10 mil metros cuadrados." << endl;
	cout << "\n\n";
	
	cout<<"Introduce la superficie (HA):";
	cin>>ha;
	
	terreno = ha * diez;

	if (terreno > millon)
	{
		metrospino = (terreno * 0.7);
		pino = (metrospino * 8);
		ppino = pino / 10;
		
		metrosoyamel = (terreno * 0.2);
		oyamel = (metrosoyamel * 15);
		ooyamel = oyamel /15;
		
		metroscedro = (terreno * 0.1);
		cedro = (metroscedro * 18);
		ccedro =cedro / 18;
		
	}
	else if (terreno <= millon)
	{
		metrospino = (terreno *0.50);
		pino = (metrospino * 8);
		ppino = pino / 10;
		
		metrosoyamel = (terreno * 0.30);
		oyamel = (metrosoyamel * 15);
		ooyamel = oyamel /15;
		
		metroscedro = (terreno * 0.20);
		cedro = (metroscedro * 10);
		ccedro =cedro / 18;
	}
	
	cout<<"En una superficie de " << terreno << " m2." << endl; 
	cout<<"Caben:  "<< ppino<< " pinos." <<endl;
	cout<<"	"<< ooyamel << " oyameles." <<endl;			
	cout<<"	"<< ccedro << " cedros." <<endl;	
	cout << "Total de arboles: " << ppino + ooyamel + ccedro ;
}
