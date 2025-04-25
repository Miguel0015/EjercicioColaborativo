#include <iostream>

using namespace std;
void sumar();

int main()
{
    sumar();
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
