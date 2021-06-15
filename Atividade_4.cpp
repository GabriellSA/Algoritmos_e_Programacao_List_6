/*Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um certo período. Fazer um
programa que:
-leia o número de crianças nascidas no período;
-leia um número indeterminado de linhas com as informações das crianças que morreram, contendo,
cada uma, o sexo da criança (m -masc., f- fem.) e o número de meses de vida da criança. A última linha,
que não entrará nos cálculos, contém no lugar do sexo o caractere v (vazio). Determine e escreva:
a) porcentagem de crianças mortas no período;
b) porcentagem de crianças masculinas mortas no período;
c) porcentagem de crianças que viveram 24 meses ou menos no período*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero, mortos=0, homens=0, menos24=0;
	float meses, percentualT, percentualM, percentual24;
	char sexo;
	
	printf("--------------- ÍNDICE DE MORTALIDADE INFANTIL ---------------\n\n");
	printf("Digite o número de crianças nascidas no período: ");
	scanf("%f", &numero);
	
	do{
		system("cls");
		mortos++;
		printf("--------------- INFORMAÇÕES DAS CRIANÇAS QUE MORRRERAM ---------------\n\n");
		do{
			printf("Digite o sexo da %.0fº criança (F ou M): ", mortos);
			fflush(stdin);
			scanf("%c", &sexo);
			sexo=toupper(sexo);
			if(sexo!='F' && sexo!='M' && sexo!='V')
			    printf("\nSEXO DIGITADO INVÁLIDO\n");
		}while(sexo!='F' && sexo!='M' && sexo!='V'); 
		if(sexo!='V'){
			do{
			printf("Digite o número de meses de vida dessa criança: ");
			fflush(stdin);
			scanf("%f", &meses);
			if(meses<0)
			   printf("\nNÚMERO DE MESES DIGITADO INVÁLIDO\n");
		}while(meses<0);
		if(sexo=='M') homens++;
		if(meses<=24) menos24++;
		}			
	}while(sexo!='V');
	
	system("cls");
	percentualT=((mortos-1)/numero)*100;
	percentualM=(homens/numero)*100;
	percentual24=(menos24/numero)*100;
	printf("--------------- ÍNDICE DE MORTALIDADE INFANTIL ---------------\n\n");
	printf("-> A porcentagem de crianças mortas no período foi de %.2f por cento\n\n", percentualT);
	printf("-> A porcentagem de crianças masculinas mortas no período foi de %.2f por cento\n\n", percentualM);
	printf("-> A porcentagem de crianças que viveram 24 meses, ou menos, no período, foi de %.2f por cento\n\n", percentual24);
	
	system("pause");
	return 0;
}
