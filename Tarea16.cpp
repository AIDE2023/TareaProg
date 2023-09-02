#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Digite un numero: "; 
	cin>>num;
	int num2;
	cout<<"\nDigite otro numero: ";
	cin>>num2;
	int num3;
	cout<<"\nDigite otro numero: ";
	cin>>num3;
	int residuo=num%2;
	if(residuo==0)
		cout<<num<<"Es par"<<endl;
	else
		cout<<num<<"Es impar"<<endl;
	int residuo2=num2%2;
	if(residuo2==0)
		cout<<num2<<"Es par"<<endl;
	else
		cout<<num2<<"Es impar"<<endl;
	int residuo3=num3%2;
	if(residuo3==0)
		cout<<num3<<"Es par"<<endl;
	else
		cout<<num3<<"Es impar"<<endl;
	return 0;
}
