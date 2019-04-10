#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float cm,m,dc,mm;	
	printf("\n\t conversao de medida \n\n");
	printf("\n\t digite a quantidade de centímetros\n\n");
	scanf("%f",&cm);
	mm=cm*10;
	printf("\n\tesse e o seu valor em milímetro%f\n\n",mm);
	dc=cm/10;
	printf("\n\tesse e o seu valor em milímetro%f\n\n",dc);
	m=dc/10;
	printf("\n \t esse é o seu valor em metros : %f\n\n",m,"cm²");
	system("PAUSE");	
 	 return 0;
 }

	
	
	
