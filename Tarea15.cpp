#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Digite el primer numero: "<<endl;
	cin>>num;
	int num2;
	cout<<"Digite el segundo numero: "<<endl;
	cin>>num2;
	if(num>num2){
		cout<<"El numero mayor es: "<<num<<endl;
		cout<<"El numero menor es: "<<num2<<endl;
	}
	else{
		cout<<"El numero mayor es: "<<num2<<endl;
		cout<<"El numero menor es: "<<num<<endl;
	}
	return 0;
}
