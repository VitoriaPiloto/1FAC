/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exercícios V
	
	QUESTÃO 01:
	Dado um número inteiro N, fazer um programa que exiba os números pares iguais ou 
	inferiores a N. 
	
	Exemplos: 
	
		N = 15		0, 2, 4, 6, 8, 10, 12, 14
		
		N = 8		0, 2, 4, 6, 8
*/

//importação de bibliotecas
#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int i, n;
	
	//leitura do valor
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	//variando todos os valores de 0 ao n
	for (i=0;i<=n;i=i+2)
	{
		printf ("%d ", i);
	}
}
