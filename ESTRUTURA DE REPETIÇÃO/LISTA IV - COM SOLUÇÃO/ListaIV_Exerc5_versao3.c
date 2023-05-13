/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 28/10/2021

	Lista de Exercícios IV
	
	QUESTÃO 05: Faça um programa que exiba na tela os 50 primeiros termos da seguinte 
	série: 1, -2, 3, -4, 5, -6 ...
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 500

void main ()
{
	//declaração de variáveis
	int i, p;
	
	for (i = 1, p = -2; (i < 50) /*&& (p >= -50)*/; i+=2, p-=2)
  	{
    	printf ("%d %d ", i, p);
  	}  
}
