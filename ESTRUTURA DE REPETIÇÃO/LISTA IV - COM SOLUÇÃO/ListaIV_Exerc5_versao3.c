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

void main ()
{
	//declara��o de vari�veis
	int i, p;
	
	for (i = 1, p = -2; (i < 50) /*&& (p >= -50)*/; i+=2, p-=2)
  	{
    	printf ("%d %d ", i, p);
  	}  
}
