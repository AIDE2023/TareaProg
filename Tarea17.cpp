#include<iostream>
using namespace std;
int main(){
	string dia;
	cout<<"Diga el momento del dia con m:ma�ana; t:tarde y n:noche  "<<endl;
	cin>>dia;
	string sexo;
	cout<<"Cual es tu sexo: "<<endl;
	cin>>sexo;
	if(dia =="m")
		cout<<"Buenos dias ";
	else if(dia =="t")
		cout<<"Buenas tardes ";
	else
		cout<<"Buenas noches ";
	
	if(sexo =="m")
		cout<<"Se�ora";
	else
		cout<<"Se�or";
	return 0;
}
