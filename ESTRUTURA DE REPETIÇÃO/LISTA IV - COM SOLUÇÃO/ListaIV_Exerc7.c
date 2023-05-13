/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exercícios IV
	
	QUESTÃO 07: Uma determinada empresa fez uma pesquisa de mercado para saber se as 
	pessoas gostaram ou não de um novo produto que foi lançado. Para cada pessoa 
	entrevistada foram coletados os seguintes dados: gênero (M ou F) e resposta 
	(G [Gostou] ou N [Não Gostou]). Sabendo-se que foram entrevistadas X pessoas, faça 
	um programa que forneça:

	a)	Número de pessoas que gostaram do produto;
	b)	Número de pessoas que não gostaram do produto;
	c)	Informação dizendo em que gênero o produto teve uma melhor aceitação.
*/

//importação de bibliotecas
#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int x, 				//quantidade de entrevistados
		i, 				//contador do for
		contM = 0, 		//quantidade de homens entrevistados
		contF = 0, 		//quantidade de mulheres entrevistadas
		contMG = 0, 	//quantidade de homens entrevistados que gostaram do produto
		contFG = 0,		//quantidade de mulheres entrevistadas que gostaram do produto
		contG,			//quantidade de entrevistados que gostaram do produto
		contNG;			//quantidade de entrevistados que não gostaram do produto
	char genero, 		//gênero de cada entrevistado
		 opiniao;		//opinião de cada entrevistado
	float percM,		//percentual de homens que gostaram do produto
	      percF;		//percentual de mulheres que gostaram do produto

	//leitura do número de entrevistados
	printf ("Quantas pessoas foram entrevistadas? ");
	scanf ("%d", &x);
	
	//lendo as informações das x pessoas entrevistadas
	for (i=1;i<=x;i++)
	{
		//leitura do gênero
		printf ("Genero [M/F]: ");
		fflush (stdin);
		scanf ("%c", &genero);
		
		//leitura da opinião
		printf ("Opiniao sobre o produto [G - Gostou / N - Nao Gostou]: ");
		fflush (stdin);
		scanf ("%c", &opiniao);
		
		//verificando o gênero do entrevistado
		if (toupper(genero) == 'M')
		{
			//atualizando a quantidade de homens
			contM++;
			
			//verificando se o homem gostou do produto
			if (toupper(opiniao) == 'G')
			{
				contMG++;
			}
		}
		else
		{
			//atualizando a quantidade de mulheres
			contF++;
			
			//verificando se a mulher gostou do produto
			if (toupper(opiniao) == 'G')
			{
				contFG++;
			}
		}		
	}
	
	//calculando a quantidade de pessoas que gostaram e não gostaram do produto
	contG = contMG + contFG;
	contNG = x - contG;
	
	//exibindo a quantidade de pessoas que gostaram e não gostaram do produto
	printf ("\n\nNumero de pessoas que gostaram do produto: %d\n", contG);
	printf ("Numero de pessoas que nao gostaram do produto: %d\n", contNG);
	
	//calculando os percentuais de homens e mulheres que gostaram do produto
	percM = ((float)contMG/contM) * 100;		//casting
	percF = ((float)contFG/contF) * 100;		//casting
	
	//determinando em que gênero houve maior aceitação
	if (percF > percM)
	{
		printf ("\nHouve maior aceitacao entre as mulheres (%.2f %%).", percF);
	}
	else
	{
		if (percM > percF)
		{
			printf ("\nHouve maior aceitacao entre os homens (%.2f %%).", percM);
		}
		else
		{
			printf ("\nHouve a mesma aceitacao entre homens e mulheres (%.2f %%).", percF);
		}
	}
}
