/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 28/10/2021

	Lista de Exerc�cios IV
	
	QUEST�O 05: Fa�a um programa que exiba na tela os 50 primeiros termos da seguinte 
	s�rie: 1, -2, 3, -4, 5, -6 ...
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 500

void main()
{
	//declara��o de vari�veis
	int i;
	
	for (i = 1; i <= QUANT; i++)	
	{
		//verificando se o n�mero � par
		if (i%2==0)
		{
			printf ("-%d, ", i);
		}
		else
		{
			printf ("%d, ", i);
		}
    }
}
