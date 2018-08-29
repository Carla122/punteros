#include <iostream>
#include <conio.h>
using namespace std;
struct Dato{
	int dato1;
	char dato2[20];
};

int main(){
	struct Dato Var1;
    struct Dato *Ptr;
    Ptr=&Var1;
	cout<<"Puntero: "<<&Ptr<<endl;//Imprime el valor del puntero
	cout<<"Direccion del puntero: "<<Ptr<<endl;//Imprime la direccion del puntero
	cout<<&Var1>>"/n";
	cout<<"Ingresa el numero del puntero";
	cin>>Ptr->dato1;
	cout<<"Valor ingresado: "<<Ptr->dato1<<"/n";
	cin>>Ptr->dato2;
	system("pause");

	return 0;
}
