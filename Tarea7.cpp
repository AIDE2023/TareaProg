//Ejercicio 5 de la pag.23.
#include<iostream>
using namespace std;
int main(){
	int dias;
	int horas;
	int minutos;
	cout<<"Digite la cantidad de dias: ";
	cin>>dias;
	cout<<"\nDigite la cantidad de horas: ";
	cin>>horas;
	cout<<"\nDigite la cantidad de minutos: ";
	cin>>minutos;
	int segdias= dias*24*60*60;
	int seghoras= horas*60*60;
	int segminutos= minutos*60;
	int suma= segdias+seghoras+segminutos;
	cout<<"\nLa cantidad de segundos totales son: "<<suma<<" segundos";
	
	return 0;
}
