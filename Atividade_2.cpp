/*O fatorial de um valor inteiro, consiste no produto de todos os inteiros entre um e o valor fatorial. O
fatorial de 5 é 1*2*3*4*5 = 120. Fazer um programa para desenvolver este cálculo (fatorial) usando o
while.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero, contador, fatorial=1;
	int i=0;
	
	printf("Digite um número: ");
	scanf("%f", &numero);
	contador=numero;
	
	while(i<numero){
		fatorial=fatorial*contador;
		contador=contador-1;
		i++;
	}
	printf("\nO fatorial de %.2f é %.2f\n\n", numero, fatorial);
	system("pause");
	return 0;
}
