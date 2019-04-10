#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float s,m,h;	
	printf("\n\t segundos \n\n");
	printf("\n\t digite a quantidade de segundos\n\n");
	scanf("%f",&s);
	m=60;
	m=s/m;
	printf("\n\t sua quantidade de minutos%f\n\n",m," minutos");
	h=s/m;
	h=m/h;
	printf("\n\t sua quantidade de horas%f\n\n",h," horas");
	system("PAUSE");	
 	 return 0;
 }

