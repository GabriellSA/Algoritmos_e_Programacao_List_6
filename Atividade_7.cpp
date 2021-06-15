/*Escreva um programa que transforme o computador em uma urna eletr�nica para elei��o do melhor
jogador de futebol de todos os tempos. O n�mero 25 � do candidato Pel� e o 33 do candidato Maradona. 
Cada voto ser� efetivado pelo n�mero do candidato, permitindo-se ainda o voto 0 (em branco) e
qualquer outro voto diferente dos especificados ser� considerado nulo. O eleitor dever� sempre ser
consultado quanto a confirma��o do voto. Ao final da elei��o dever� ser apresentado um relat�rio
contendo:
� Quantidade de votos de cada candidato;
� Quantidade de votos em branco e nulos;
� Nome do candidato vencedor (prever possibilidade de empate).*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int menu, pele=0, maradona=0, branco=0, nulo=0, confirma;
	
	do{
    printf("----- MELHOR JOGADOR DE FUTEBOL DE TODOS OS TEMPOS -----\n\n");
	printf("\t\t[25] Pel�\n\t\t[33] Maradona\n\n\t\t[0] Branco\n\t\t[1] Encerrar vota��o\n\n");
	printf("Digite o seu voto: ");
	scanf("%d", &menu);
	system("cls");
	
	switch(menu){
		case 25: 
		    confirma=0;
		    printf("Deseja confirmar seu voto no Pel� ?\n[1] SIM\n[2]N�O\n");
		    scanf("%d", &confirma);
		    if(confirma==1) pele++;
		    system("pause"); system("cls"); break;
		case 33:
			confirma=0;
		    printf("Deseja confirmar seu voto no Maradona ?\n[1] SIM\n[2]N�O\n");
		    scanf("%d", &confirma);
		    if(confirma==1) maradona++;
		    system("pause"); system("cls"); break;
		case 0:
			confirma=0;
		    printf("Deseja confirmar seu voto em Branco?\n[1] SIM\n[2]N�O\n");
		    scanf("%d", &confirma);
		    if(confirma==1) branco++;
		    system("pause"); system("cls"); break;
		case 1:
			system("cls"); break;
		default:
			confirma=0;
		    printf("Deseja confirmar seu voto Nulo ?\n[1] SIM\n[2]N�O\n");
		    scanf("%d", &confirma);
		    if(confirma==1) nulo++;
		    system("pause"); system("cls"); break;		    
	}
	}while(menu!=1);
	
	printf("----- MELHOR JOGADOR DE FUTEBOL DE TODOS OS TEMPOS -----\n");
	printf("--------------------- RESULTADO ------------------------\n\n");
	if(pele>maradona) printf("\t\tO VENCEDOR � O PEL�!\n\n");
	else if(maradona>pele) printf("\t\tO VENCEDOR � O MARADONA!\n\n");
	else printf("\t\tHOUVE UM EMPATE!\n\n");
	printf("-> Pel�: %d votos\n-> Maradona: %d votos\n\n-> Brancos: %d votos\n-> Nulos: %d votos\n\n", pele, maradona, branco, nulo);
	
	system("pause");
	return 0;
}
