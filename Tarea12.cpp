#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Digite un numero: "<<endl;
	cin>>num;
	int i;
	for(i=1;i<=num;i++)
		cout<<i<<",";
	cout<<endl;
	int a;
	while(a<=num){
		cout<<a<<",";
		a=a+1;
	}
	cout<<endl;
	int b=1;
	do{
		cout<<b<<",";
		b=b+1;
	}while(b<=num);
	return 0;
}
