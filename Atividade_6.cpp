/*Elabore um programa que identifique o n�mero de algarismos de um valor inteiro positivo informado
pelo usu�rio.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i=10, j=1;
	
	do{
		printf("Digite um n�mero inteiro e positivo: ");
	    scanf("%d", &numero);
	    if(numero<0)
	   printf("\nN�MERO DIGITADO INV�LIDO!\n");
	}while(numero<0);
	
	while(true){
		if(numero<i){
			printf("\nEsse n�mero tem %d algarismos\n\n", j); 
			break;
		}
		i=i*10;
		j++;
	}
	system("pause");
	return 0;
}
