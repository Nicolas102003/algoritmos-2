#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float r,v;	
	printf("\n\t digite o raio\n\n");
	scanf("%f",&r);
	v=(4*3.14*pow(r,3))/3;

	printf("\n \t  o valor do seu raio e: %f\n\n",v,"cm�"); 
	system("PAUSE");	
 	 return 0;
 }

	
