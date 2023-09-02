#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Digite un numero: "; 
	cin>>num;
	int num2;
	cout<<"\nDigite otro numero: ";
	cin>>num2;
	int i;
	for(i=num;i<=num2;i++){
		num=i%2;
		if(num==1)
		cout<<i<<",";
	}
	return 0;
}
