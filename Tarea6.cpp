//Ejercicio 4 de la pag.23
#include<iostream>
using namespace std;
int main(){
	int radio;
	float pi =3.1416;
	cout<<"Introduzca el radio: ";
	cin>>radio;
	float area= pi*(radio*radio);
	float perimetro = 2*pi*radio;
	float volumen = (4*pi*radio*radio*radio)/3;
	cout<<"\n El perimetro de la circunferencia es: "<<perimetro;
	cout<<"\n El area del circulo es: "<<area;
	cout<<"\n El volumen de la esfera es: "<<volumen;
	
	return 0;
}
