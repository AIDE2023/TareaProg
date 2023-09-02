#include<iostream>
using namespace std;

int main (){
	int precio;
	int porcentaje;
	cout<<"Introduzca el precio: ";
	cin>>precio;
	cout<<"\nIntroduzca el porcentaje de descuento: ";
	cin>>porcentaje;
	int mult = porcentaje*precio;
	double descuento = mult/100;
	cout<<"\nEl descuento es: "<<descuento;
	double preciofinal= precio-descuento;
	cout<<"\nEl precio final es: "<<preciofinal;
	
	return 0;
}
