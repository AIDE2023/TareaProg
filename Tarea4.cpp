//Ejercicio 2 de la pag.23.
#include<iostream>
using namespace std;

int main(){
	int base;
	int altura;
	cout<<"Introduzca la base del rectangulo: ";
	cin>>base;
	cout<<"\nIntroduzca la altura del rectangulo: ";
	cin>>altura;
	
	int area= base*altura;
	int perimetro= (2*base)+(2*altura);
	cout<<"\nEl area es: "<<area;
	cout<<"\nEl perimetro es: "<<perimetro;	
	
	return 0;
}
