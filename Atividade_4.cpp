/*Foi feita uma pesquisa para determinar o �ndice de mortalidade infantil em um certo per�odo. Fazer um
programa que:
-leia o n�mero de crian�as nascidas no per�odo;
-leia um n�mero indeterminado de linhas com as informa��es das crian�as que morreram, contendo,
cada uma, o sexo da crian�a (m -masc., f- fem.) e o n�mero de meses de vida da crian�a. A �ltima linha,
que n�o entrar� nos c�lculos, cont�m no lugar do sexo o caractere v (vazio). Determine e escreva:
a) porcentagem de crian�as mortas no per�odo;
b) porcentagem de crian�as masculinas mortas no per�odo;
c) porcentagem de crian�as que viveram 24 meses ou menos no per�odo*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero, mortos=0, homens=0, menos24=0;
	float meses, percentualT, percentualM, percentual24;
	char sexo;
	
	printf("--------------- �NDICE DE MORTALIDADE INFANTIL ---------------\n\n");
	printf("Digite o n�mero de crian�as nascidas no per�odo: ");
	scanf("%f", &numero);
	
	do{
		system("cls");
		mortos++;
		printf("--------------- INFORMA��ES DAS CRIAN�AS QUE MORRRERAM ---------------\n\n");
		do{
			printf("Digite o sexo da %.0f� crian�a (F ou M): ", mortos);
			fflush(stdin);
			scanf("%c", &sexo);
			sexo=toupper(sexo);
			if(sexo!='F' && sexo!='M' && sexo!='V')
			    printf("\nSEXO DIGITADO INV�LIDO\n");
		}while(sexo!='F' && sexo!='M' && sexo!='V'); 
		if(sexo!='V'){
			do{
			printf("Digite o n�mero de meses de vida dessa crian�a: ");
			fflush(stdin);
			scanf("%f", &meses);
			if(meses<0)
			   printf("\nN�MERO DE MESES DIGITADO INV�LIDO\n");
		}while(meses<0);
		if(sexo=='M') homens++;
		if(meses<=24) menos24++;
		}			
	}while(sexo!='V');
	
	system("cls");
	percentualT=((mortos-1)/numero)*100;
	percentualM=(homens/numero)*100;
	percentual24=(menos24/numero)*100;
	printf("--------------- �NDICE DE MORTALIDADE INFANTIL ---------------\n\n");
	printf("-> A porcentagem de crian�as mortas no per�odo foi de %.2f por cento\n\n", percentualT);
	printf("-> A porcentagem de crian�as masculinas mortas no per�odo foi de %.2f por cento\n\n", percentualM);
	printf("-> A porcentagem de crian�as que viveram 24 meses, ou menos, no per�odo, foi de %.2f por cento\n\n", percentual24);
	
	system("pause");
	return 0;
}
