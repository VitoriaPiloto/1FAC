/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 28/10/2021

	Lista de Exerc�cios IV
	
	QUEST�O 01: Fa�a um programa que leia um n�mero inteiro positivo N e exiba todos os 
	m�ltiplos de Y inferiores a N, onde N e Y s�o fornecidos pelo usu�rio.
	
	Exemplo:
			N	50
			Y	7
			
			Ser�o exibidos: 0  7  14  21  28  35  42  49			
*/

//importa��o de bibliotecas
#include <stdio.h>

void main()
{
	//declara��o de vari�veis
	int N, Y, i;
	
	//leitura dos dados de entrada
	printf ("Entre com o valor de N: ");
	scanf ("%d", &N);
	
	printf ("Entre com o valor de Y: ");
	scanf ("%d", &Y);
	
	//variando todos os "poss�veis m�ltiplos" de Y
	for (i=0;i<N;i++)
	{
		//verificando se cada n�mero do intervalo � m�ltiplo de Y
		if (i%Y==0)
		{
			printf ("%d ", i);
		}
	}
}
