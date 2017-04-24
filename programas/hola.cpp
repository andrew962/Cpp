#include<iostream>

using namespace std;
/*
 Acceder a la private
 se tienen que crear funciones publicas para entrar en metodos privados
 */

class Caballo{
public:
    int suEdad;
    int suPeso;
};

int main(){
    Caballo Janto;
    Janto.suPeso=100;
    cout<<"Janto era un caballo de aquiles"<<endl;
    cin>>Janto.suPeso<<" K."<<endl;
    
}
