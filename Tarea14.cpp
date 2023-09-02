#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Cuantos asteriscos desea imprimir: "<<endl;
	cin>>num;
	int i;
	for(i=1;i<=num;i++)
		if(num>0)
			cout<<"*";
		
	return 0;
}
