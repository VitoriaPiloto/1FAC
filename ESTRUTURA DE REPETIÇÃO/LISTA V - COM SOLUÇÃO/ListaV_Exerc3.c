/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exercícios V
	
	QUESTÃO 03:
	Fazer um programa que exiba todos os divisores de um número fornecido pelo usuário. 
	
	Exemplos:
	
		numero: 10			Divisores: 1  2  5  10
		numero: 2			Divisores: 1  2
		numero: 1			Divisores: 1
*/

//importação de bibliotecas
#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int i, n;
	
	do
	{
		//leitura do valor, validando se o número é positivo
		printf ("Entre com um numero positivo: ");
		scanf ("%d", &n);
		
		if (n <= 0)
		{
			printf ("\nNumero invalido, pois deve ser positivo. Tente novamente.\n");
		}
	}
	while (n <= 0);

	//variando os valores de 1 até n
	for(i=1;i<=n;i++)	
	{
		//verificando se i é divisor de n
		if (n%i==0)
		{
			printf ("%d ", i);
		}
	}
}
