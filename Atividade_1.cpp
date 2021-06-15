/*Elabore um programa em C que solicite um valor ao usuário e imprima todos os números pares do
número fornecido até 2000, em uma janela de execução. Caso o valor informado seja maior que 2000,
apresente no meio de uma tela limpa, somente o valor informado com uma mensagem dizendo que o
limite de cálculo foi excedido.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	system("cls");
	if(numero>=1 && numero<=2000){
		printf("Todos os números pares até o número %d são: \n", numero);
		for(int i=1; i<=numero; i++){
			if(i%2 == 0) printf("%d\n", i);
		}	
	}
	else{
		printf("\n\n\t\t\t\t%d\n\t\tO LIMITE DE CÁLCULO FOI EXCEDIDO!\n", numero);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
