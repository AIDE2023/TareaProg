#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Digite el primer numero"<<endl;
	cin>>num;
	int num2;
	cout<<"Digite el segundo numero"<<endl;
	cin>>num2;
	int i;
	for(i=num;i<=num2;i++)
		cout<<i;
	cout<<endl;
	int a=num;
	do{
		cout<<a;
		a=a+1;
 	
	}while(a<=num2);
	
	cout<<endl;
	while(num<=num2){
		cout<<num;
		num=num+1;	
	}
	
	return 0;
}
