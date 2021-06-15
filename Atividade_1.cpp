/*Elabore um programa em C que solicite um valor ao usu�rio e imprima todos os n�meros pares do
n�mero fornecido at� 2000, em uma janela de execu��o. Caso o valor informado seja maior que 2000,
apresente no meio de uma tela limpa, somente o valor informado com uma mensagem dizendo que o
limite de c�lculo foi excedido.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	system("cls");
	if(numero>=1 && numero<=2000){
		printf("Todos os n�meros pares at� o n�mero %d s�o: \n", numero);
		for(int i=1; i<=numero; i++){
			if(i%2 == 0) printf("%d\n", i);
		}	
	}
	else{
		printf("\n\n\t\t\t\t%d\n\t\tO LIMITE DE C�LCULO FOI EXCEDIDO!\n", numero);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
