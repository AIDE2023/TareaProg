#include<iostream>
using namespace std;
int main(){
	string dia;
	cout<<"Diga el momento del dia con m:mañana; t:tarde y n:noche  "<<endl;
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
		cout<<"Señora";
	else
		cout<<"Señor";
	return 0;
}
