#include<iostream>
using namespace std;
int main(){
	int segundos;
	cout<<"Digite la cantidad de segundos: ";
	cin>>segundos;
	double segdias= segundos/(24*60*60);
	double seghoras= segundos/(60*60);
	double segminutos= segundos/60;
	cout<<"\nLa cantidad en dias es : "<<segdias<<" dias";
	cout<<"\nLa cantidad en horas es : "<<seghoras<<" horas";
	cout<<"\nLa cantidad en minutos es : "<<segminutos<<" minutos";
	
	return 0;
}
