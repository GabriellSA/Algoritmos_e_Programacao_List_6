/*Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de at� 10 pessoas. Fazer
um programa que calcule e escreva: a maior e a menor altura do grupo; a m�dia da altura das mulheres;
o n�mero de homens. Usar os tr�s comandos de repeti��o na solu��o do problema.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float altura, maior=0, menor=0, alturaM=0, alturaF=0, mediaF, mediaM;
	int homens=0, mulheres=0;
	char sexo;
	
	for(int i=1; i<=10; i++){
		do{
			printf("Digite a altura da %d� pessoa em cent�metros: ", i);
			fflush(stdin);
			scanf("%f", &altura);
			if(altura<0 || altura>500)
			    printf("\nALTURA INV�LIDA!\n");
		}while(altura<0 || altura>500);
		do{
			printf("Digite o sexo dessa pessoa (F ou M): ");
			fflush(stdin);
			scanf("%c", &sexo);
			sexo=toupper(sexo);
			if(sexo!='F' && sexo!='M')
			    printf("\nSEXO INV�LIDO\n");
		}while(sexo!='F' && sexo!='M');
		
		if(altura>maior) maior=altura;
		if(altura<menor || menor==0) menor=altura;
		if(sexo=='F'){
			mulheres++;
			alturaF=alturaF+altura;}
		if(sexo=='M'){
			homens++;
			alturaM=alturaM+altura;}	
	}
	system("cls");
	printf("\t\t- RESULTADOS -\n\n");
	printf("-> A maior altura do grupo �: %.2f cm\n", maior);
	printf("-> A menor altura do grupo �: %.2f cm\n\n", menor);
	printf("-> A quantidade de mulheres no grupo � de: %d\n", mulheres);
	printf("-> A m�dia da altura das muheres � de: %.2f cm\n\n", mediaF=alturaF/mulheres);
	printf("-> A quantidade de homens no grupo � de: %d\n", homens);
	printf("-> A m�dia da altura dos homens � de: %.2f cm\n\n", mediaM=alturaM/homens);
	
	system("pause");
	return 0;
}
