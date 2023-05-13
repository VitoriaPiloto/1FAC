/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exerc�cios V
	
	QUEST�O 10:
	Foi feita uma pesquisa entre os habitantes de uma regi�o e coletados os dados de 
	altura e g�nero das pessoas. Fa�a um programa que leia as informa��es de 50 pessoas 
	e informe:
 	- a maior e a menor alturas encontradas;
 	- a m�dia de altura das mulheres;
 	- a m�dia de altura da popula��o;
 	- o percentual de homens na popula��o.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 5

void main ()
{
	//declara��o de vari�veis
	char genero;
	int contF=0, contM=0, cont=0;
	float perRes, altura, maiorAltura=0, menorAltura=2.5, mediaAlturaFem=0, mediaAltura=0;

	printf("\tPesquisa\n");
	
	do 
	{
		//lendo a altura e g�nero de cada pessoa
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
		
		//verificando se o habitante � do g�nero feminino
		if (genero == 'F') 
		{
			mediaAlturaFem = mediaAlturaFem + altura;
			contF++; // contador de pessoas do sexo feminino, pra relizar divis�o da m�dia			
		} 
		else 
		{
			//contando o n�mero de homens na popula��o (para, posteriormente, calcular o percentual de homens)
			contM++;
		}
		
		//para o c�lculo da m�dia de altura da popula��o...
		mediaAltura = mediaAltura + altura;
		cont++;
	} 
	while(cont < QUANT);

	//calculando o percentual de homens na popula��o
	perRes = ((float)contM/QUANT)*100;

	//exibindo os resultados	
	printf("\t\nMaior altura = %.2f - Menor altura = %.2f", maiorAltura, menorAltura);
	printf("\t\nMedia de altura das mulheres = %.2f", mediaAlturaFem/contF);
	printf("\t\nMedia de altura da populacao = %.2f", mediaAltura/QUANT);
	printf("\t\nPercentual de homens na populacao = %.2f", perRes);
}
