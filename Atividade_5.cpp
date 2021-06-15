/*Uma companhia de teatro planeja dar uma série de espetáculos. A direção calcula que a R$15,00 o
ingresso, serão vendidos 120 ingressos, e as despesas montarão R$600,00. A uma diminuição de R$3,00
nos ingressos espera-se que haja um aumento de 26 ingressos vendidos. Fazer um programa que escreva
uma tabela de valores do lucro esperado em função do preço do ingresso, fazendo-o variar de R$15,00 a
R$3,00 de 3 em 3 reais. Escreva, ainda, o lucro máximo esperado, o preço e o número de ingressos
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
	printf("\nO lucro máximo esperado é de R$ %d com %d ingressos vendidos a um preço de R$ %d\n\n", lucroM, vendidosM, ingressoM);
	
	system("pause");
	return 0;
}
