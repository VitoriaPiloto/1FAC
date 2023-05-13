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
	int n, y, i, m;

	//Leitura dos dados de entrada	
	printf("Digite o N\n");
	scanf("%d", &n);
	
	printf("Digite o Y\n");
	scanf("%d", &y);
	
	for(i=0;i*y<n;i++)
	{
		m=i*y;
		printf("%d ", m);
	}
}
