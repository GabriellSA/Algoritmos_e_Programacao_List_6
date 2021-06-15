/*Escreva um programa que transforme o computador em uma urna eletrônica para eleição do melhor
jogador de futebol de todos os tempos. O número 25 é do candidato Pelé e o 33 do candidato Maradona. 
Cada voto será efetivado pelo número do candidato, permitindo-se ainda o voto 0 (em branco) e
qualquer outro voto diferente dos especificados será considerado nulo. O eleitor deverá sempre ser
consultado quanto a confirmação do voto. Ao final da eleição deverá ser apresentado um relatório
contendo:
• Quantidade de votos de cada candidato;
• Quantidade de votos em branco e nulos;
• Nome do candidato vencedor (prever possibilidade de empate).*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int menu, pele=0, maradona=0, branco=0, nulo=0, confirma;
	
	do{
    printf("----- MELHOR JOGADOR DE FUTEBOL DE TODOS OS TEMPOS -----\n\n");
	printf("\t\t[25] Pelé\n\t\t[33] Maradona\n\n\t\t[0] Branco\n\t\t[1] Encerrar votação\n\n");
	printf("Digite o seu voto: ");
	scanf("%d", &menu);
	system("cls");
	
	switch(menu){
		case 25: 
		    confirma=0;
		    printf("Deseja confirmar seu voto no Pelé ?\n[1] SIM\n[2]NÃO\n");
		    scanf("%d", &confirma);
		    if(confirma==1) pele++;
		    system("pause"); system("cls"); break;
		case 33:
			confirma=0;
		    printf("Deseja confirmar seu voto no Maradona ?\n[1] SIM\n[2]NÃO\n");
		    scanf("%d", &confirma);
		    if(confirma==1) maradona++;
		    system("pause"); system("cls"); break;
		case 0:
			confirma=0;
		    printf("Deseja confirmar seu voto em Branco?\n[1] SIM\n[2]NÃO\n");
		    scanf("%d", &confirma);
		    if(confirma==1) branco++;
		    system("pause"); system("cls"); break;
		case 1:
			system("cls"); break;
		default:
			confirma=0;
		    printf("Deseja confirmar seu voto Nulo ?\n[1] SIM\n[2]NÃO\n");
		    scanf("%d", &confirma);
		    if(confirma==1) nulo++;
		    system("pause"); system("cls"); break;		    
	}
	}while(menu!=1);
	
	printf("----- MELHOR JOGADOR DE FUTEBOL DE TODOS OS TEMPOS -----\n");
	printf("--------------------- RESULTADO ------------------------\n\n");
	if(pele>maradona) printf("\t\tO VENCEDOR É O PELÉ!\n\n");
	else if(maradona>pele) printf("\t\tO VENCEDOR É O MARADONA!\n\n");
	else printf("\t\tHOUVE UM EMPATE!\n\n");
	printf("-> Pelé: %d votos\n-> Maradona: %d votos\n\n-> Brancos: %d votos\n-> Nulos: %d votos\n\n", pele, maradona, branco, nulo);
	
	system("pause");
	return 0;
}
