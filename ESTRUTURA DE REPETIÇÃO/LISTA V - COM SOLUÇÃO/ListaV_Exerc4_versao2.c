/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exercícios V
	
	QUESTÃO 04:
	Implementar um programa que exiba os N primeiros termos de uma PA (Progressão 
	Aritmética) com primeiro termo a1 e razão r. 
	
	Exemplo:
		n: 10
		a1: 3
		r: 4
		
		PA: 3 7 11 15 19 23 27 31 35 39
*/

//importação de bibliotecas
#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int n, i;
	float a1, r, termo;
	
	//leitura dos elementos que definem a PA
	printf ("Quantos elementos? ");
	scanf ("%d", &n);
	
	printf ("Quem e' o primeiro elemento? ");
	scanf ("%f", &a1);
	
	printf ("Qual e' a razao? ");
	scanf ("%f", &r);
	
	termo = a1;
	
	//exibindo a PA
	for (i=1;i<=n;i++)
	{
		printf ("%.1f ", termo);
		termo = a1 + i*r;   
	}
}
