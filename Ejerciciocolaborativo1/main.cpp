#include <iostream>

using namespace std;
void sumar();
void restar ();
int main()
{
    sumar();
    restar();
    return 0;
}

void sumar(){
int a,b,c;
cout<<"Ingrese el primer numero"<<endl;
cin>>a;
cout<<"Ingrese el segundo numero"<<endl;
cin>>b;
c=a+b;
cout<<"La suma es "<< c << endl;
}
void restar(){
int n1, n2, n3;
cout<<"Ingrese los numeros que va a restar"<<endl;
cin>>n1;
cin>>n2;
n3= n1-n2;
cout<<"El resultado de la resta es: "<<n3<<endl;

}
