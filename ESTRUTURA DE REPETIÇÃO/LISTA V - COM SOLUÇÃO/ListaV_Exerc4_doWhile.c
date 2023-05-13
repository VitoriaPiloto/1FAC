/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exerc�cios V
	
	QUEST�O 04:
	Implementar um programa que exiba os N primeiros termos de uma PA (Progress�o 
	Aritm�tica) com primeiro termo a1 e raz�o r. 
	
	Exemplo:
		n: 10
		a1: 3
		r: 4
		
		PA: 3 7 11 15 19 23 27 31 35 39
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
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
	i=1;
	do
	{
		printf ("%.1f ", termo);
		termo = termo + r;   //termo += r;
		i++;
	}
	while (i<=n);
}
