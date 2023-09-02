#include<iostream>
#include<stdio.h> 
#include "stdlib.h"
using namespace std;

int main()
{
//	int i;
//	for(i=0; i<4; i++){
// 		printf(">>> %d: %d\n",i,i*i*2);
// 	//Imprime en lista del 0 al 4 y realizara el numero al cuadrado y lo multiplicara por dos
// 	}
 	
// 	int i=4, x=5;
//	for(i=0; i<4; i++){
//		 printf(">>> %d: %d\n",i,i*x);
////Imprime en lista del 0 al 3 y realiza en cada i por 5
// } 
 	
// 	int i=4, x=5;
//	for(i=x; i<10; i++)
//		printf("%d, ",i);
//Imprime los numeros del 5 al 9

//	int i=4, x=5;
//	if(x<(2*i))
// 		printf("verdadero");
//	else
// 		printf("falso"); 
//Imprime verdadero ya que 5 es menor que 2*4

	int i=4, x=5;
	for(i=0; i<10; i++){
		 if(i<x) printf("%d ",i);
 		else printf("%d ",i-x);
//Hce un clico del 0 al 9 y se imprime valores del 0 al 4 ya que en la codicion if debe ser i menor a 5 que es del 0 al 4, ademas
//se imprime a partir del 5 al 9 al no cumplir la condicion se realiza la resta i-5 y se imprime
 }
	return 0;
}



