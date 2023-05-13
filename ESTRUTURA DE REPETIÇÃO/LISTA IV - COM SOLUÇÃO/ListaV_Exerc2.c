/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exercícios V
	
	QUESTÃO 02:
	Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número 
	inteiro fornecido pelo usuário.
*/

//importação de bibliotecas
#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int i, n, soma = 0;
	
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

	//somando os valores de 1 até n
	for(i=1;i<=n;i++)	
	{
		soma = soma + i;  // soma += i;
	}
	
	//exibindo o valor da soma
	printf ("\nSoma = %d", soma);
}
