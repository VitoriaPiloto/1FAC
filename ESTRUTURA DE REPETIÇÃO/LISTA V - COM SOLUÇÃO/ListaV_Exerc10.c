/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exercícios V
	
	QUESTÃO 10:
	Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de 
	altura e gênero das pessoas. Faça um programa que leia as informações de 50 pessoas 
	e informe:
 	- a maior e a menor alturas encontradas;
 	- a média de altura das mulheres;
 	- a média de altura da população;
 	- o percentual de homens na população.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 5

void main ()
{
	//declaração de variáveis
	char genero;
	int contF=0, contM=0, cont=0;
	float perRes, altura, maiorAltura=0, menorAltura=2.5, mediaAlturaFem=0, mediaAltura=0;

	printf("\tPesquisa\n");
	
	do 
	{
		//lendo a altura e gênero de cada pessoa
		printf("\n");
		printf("Altura: ");
		scanf("%f", &altura);
		
		printf("Masculino [m] || Feminino [f]\n");
		printf("Genero: ");
		fflush(stdin);
		scanf("%c", &genero);
		genero = toupper (genero);
		
		//determinando a maior altura
		if(altura>maiorAltura) 
		{
			maiorAltura = altura;
		}
		
		//determinando a menor altura
		if(altura<menorAltura) 
		{
			menorAltura = altura;
		}
		
		//verificando se o habitante é do gênero feminino
		if (genero == 'F') 
		{
			mediaAlturaFem = mediaAlturaFem + altura;
			contF++; // contador de pessoas do sexo feminino, pra relizar divisão da média			
		} 
		else 
		{
			//contando o número de homens na população (para, posteriormente, calcular o percentual de homens)
			contM++;
		}
		
		//para o cálculo da média de altura da população...
		mediaAltura = mediaAltura + altura;
		cont++;
	} 
	while(cont < QUANT);

	//calculando o percentual de homens na população
	perRes = ((float)contM/QUANT)*100;

	//exibindo os resultados	
	printf("\t\nMaior altura = %.2f - Menor altura = %.2f", maiorAltura, menorAltura);
	printf("\t\nMedia de altura das mulheres = %.2f", mediaAlturaFem/contF);
	printf("\t\nMedia de altura da populacao = %.2f", mediaAltura/QUANT);
	printf("\t\nPercentual de homens na populacao = %.2f", perRes);
}
