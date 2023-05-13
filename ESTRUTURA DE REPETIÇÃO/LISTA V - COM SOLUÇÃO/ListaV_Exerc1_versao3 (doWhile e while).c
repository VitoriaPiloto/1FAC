/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exerc�cios V
	
	QUEST�O 01:
	Dado um n�mero inteiro N, fazer um programa que exiba os n�meros pares iguais ou 
	inferiores a N. 
	
	Exemplos: 
	
		N = 15		0, 2, 4, 6, 8, 10, 12, 14
		
		N = 8		0, 2, 4, 6, 8
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	int i, n;
	
	do
	{
		//leitura do valor, validando se o n�mero � maior ou igual a zero
		printf ("Entre com um numero: ");
		scanf ("%d", &n);
		
		if (n < 0)
		{
			printf ("\nNumero invalido, pois deve ser maior ou igual a 0. Tente novamente.\n");
		}
	}
	while (n < 0);
	
	i=0;
	while (i<=n)
	{		
		printf ("%d ", i);				
		i=i+2;
	}
}
