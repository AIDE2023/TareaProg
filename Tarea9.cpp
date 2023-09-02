#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Digite un numero: ";
	cin>>num;
	int num2;
	do
	{
		cout<<"\nDigite un numero: ";
		cin>>num2;
		if(num2>=0){
			int suma=num+num2;
			cout<<"\nLa suma es: "<< suma;
			num=suma;
			}
		else
		 cout<<"\nTermino";
	}while(num2>=0);
	
	return 0;
}
