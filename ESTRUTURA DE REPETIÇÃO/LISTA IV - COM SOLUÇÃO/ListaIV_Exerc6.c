/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exercícios IV
	
	QUESTÃO 06: Faça um programa que leia um número N inteiro, menor ou igual a 18. Se for 
	maior do que 18, o programa exibirá uma mensagem de erro e terminará a sua execução; 
	caso contrário, deverá exibir os números no intervalo de 1 a 99 cujos algarismos somem 
	N.

	Exemplo:
	N = 12		Portanto, o programa deve exibir os números que estão no intervalo de 1 a 
	            99, cujos algarismos somam 12. Ou seja: 39, 48, 57, 66, 75, 84 e 93.
*/

//importação de bibliotecas
#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int n, i, alg1, alg2;
	
	//obtendo o valor de N
	printf ("Entre com um numero (de 1 a 18): ");
	scanf ("%d", &n);
	
	//validando o valor de N
	if ((n < 1) || (n > 18))
	{
		printf ("Valor invalido! Deveria estar no intervalo de 1 a 18!");
	}
	else
	{
		//variando todos os valores do intervalo de 1 a 99
		for (i=1;i<=99;i++)
		{
			//decompondo nos dois algarismos
			alg1 = i/10;
			alg2 = i%10;
			
			//verificando se alg1 + alg2 = N
			if (alg1 + alg2 == n)
			{
				printf ("%d ", i);
			}
		}
	}
}
