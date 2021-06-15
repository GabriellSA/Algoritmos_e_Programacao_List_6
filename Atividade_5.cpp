/*Uma companhia de teatro planeja dar uma s�rie de espet�culos. A dire��o calcula que a R$15,00 o
ingresso, ser�o vendidos 120 ingressos, e as despesas montar�o R$600,00. A uma diminui��o de R$3,00
nos ingressos espera-se que haja um aumento de 26 ingressos vendidos. Fazer um programa que escreva
uma tabela de valores do lucro esperado em fun��o do pre�o do ingresso, fazendo-o variar de R$15,00 a
R$3,00 de 3 em 3 reais. Escreva, ainda, o lucro m�ximo esperado, o pre�o e o n�mero de ingressos
correspondentes.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ingresso=15, vendidos=120, lucro[5], lucroM=0, ingressoM=0, vendidosM=0;
	
	printf("--------------- VALOR DO INGRESSO / INGRESSOS VENDIDOS / LUCRO ESPERADO ---------------\n\n");
	for(int i=0; i<5; i++){
		lucro[i]=(ingresso*vendidos)-600;
		if(lucro[i]>lucroM){
			lucroM=lucro[i]; ingressoM=ingresso; vendidosM=vendidos;
		}
		printf("\t\t\tR$ %d\t\t%d\t\tR$ %d\n", ingresso, vendidos, lucro[i]);
		ingresso=ingresso-3; vendidos=vendidos+26;
	}
	printf("\nO lucro m�ximo esperado � de R$ %d com %d ingressos vendidos a um pre�o de R$ %d\n\n", lucroM, vendidosM, ingressoM);
	
	system("pause");
	return 0;
}
