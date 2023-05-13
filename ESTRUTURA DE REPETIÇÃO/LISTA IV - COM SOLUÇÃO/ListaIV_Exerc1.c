/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 28/10/2021

	Lista de Exercícios IV
	
	QUESTÃO 01: Faça um programa que leia um número inteiro positivo N e exiba todos os 
	múltiplos de Y inferiores a N, onde N e Y são fornecidos pelo usuário.
	
	Exemplo:
			N	50
			Y	7
			
			Serão exibidos: 0  7  14  21  28  35  42  49			
*/

//importação de bibliotecas
#include <stdio.h>

void main()
{
	//declaração de variáveis
	int N, Y, i;
	
	//leitura dos dados de entrada
	printf ("Entre com o valor de N: ");
	scanf ("%d", &N);
	
	printf ("Entre com o valor de Y: ");
	scanf ("%d", &Y);
	
	//variando todos os "possíveis múltiplos" de Y
	for (i=0;i<N;i++)
	{
		//verificando se cada número do intervalo é múltiplo de Y
		if (i%Y==0)
		{
			printf ("%d ", i);
		}
	}
}
