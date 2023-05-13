/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 14/10/2021
	
	Lista de Exercícios II
	
	QUESTÃO 06: Escrever um algoritmo que, dados um número inteiro i e três valores a, b e c, apresente os 
	3 números na ordem definida por i, como descrito abaixo:

		a)	i = 1: os três valores em ordem crescente;
		b)	i = 2: os três valores em ordem decrescente;
		c)	i = 3: o maior valor deve ser apresentado no meio dos outros.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main()
{
	//declaração de variáveis
	int i, a, b, c, maior, menor, meio;
	
	//leitura dos dados
	printf ("Entre com o primeiro valor: ");
	scanf ("%d", &a);
	
	printf ("Entre com o segundo valor: ");
	scanf ("%d", &b);
	
	printf ("Entre com o terceiro valor: ");
	scanf ("%d", &c);
	
	/*
	OU:
	printf ("Entre com os três valores: ");
	scanf ("%d %d %d", &a, &b, &c);
	*/
	
	printf ("Entre com o tipo de ordenacao: 1. Crescente, 2. Descrescente, 3. O maior no meio dos demais: ");
	scanf ("%d", &i);
	
	//determinando o maior, o menor e o elemento do meio
	if ((a>b)&&(a>c))	//a é o maior de todos
	{
		maior = a;
		
		//verificando, então, quem é o do meio e quem é o menor
		if (b > c)
		{
			meio = b;
			menor = c;
		}
		else
		{
			meio = c;
			menor = b;
		}
	}
	else
	{
		if (/*(b>a)&&*/(b>c))  //b é o maior de todos
		{
			maior = b;
			
			//verificando, então, quem é o do meio e quem é o menor
			if (a > c)
			{
				meio = a;
				menor = c;
			}
			else
			{
				meio = c;
				menor = a;
			}			
		}
		else
		{			
			maior = c;
			
			//verificando, então, quem é o do meio e quem é o menor
			if (a > b)
			{
				meio = a;
				menor = b;
			}
			else
			{
				meio = b;
				menor = a;
			}			
		}
	}

	//Exibindo os valores de acordo com 'i'	
	if (i == 1)
	{
		//exibindo em ordem crescente
		printf ("\nOrdem crescente: %d, %d, %d\n", menor, meio, maior);
	}
	else
	{
		if (i == 2)
		{
			//exibindo em ordem decrescente
			printf ("\nOrdem decrescente: %d, %d, %d\n", maior, meio, menor);
		}
		else
		{
			//exibindo o maior elemento no meio
			printf ("\nMaior elemento no meio: %d, %d, %d\n", meio, maior, menor);
			//OU: printf ("\nMaior elemento no meio: %d, %d, %d\n", menor, maior, meio);
		}
	}	
}
