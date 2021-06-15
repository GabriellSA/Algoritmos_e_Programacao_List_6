/*Elabore um programa que identifique o número de algarismos de um valor inteiro positivo informado
pelo usuário.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i=10, j=1;
	
	do{
		printf("Digite um número inteiro e positivo: ");
	    scanf("%d", &numero);
	    if(numero<0)
	   printf("\nNÚMERO DIGITADO INVÁLIDO!\n");
	}while(numero<0);
	
	while(true){
		if(numero<i){
			printf("\nEsse número tem %d algarismos\n\n", j); 
			break;
		}
		i=i*10;
		j++;
	}
	system("pause");
	return 0;
}
