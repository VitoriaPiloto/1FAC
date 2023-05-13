/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exercícios V
	
	QUESTÃO 05:
	Criar um programa que exiba os N primeiros termos da seguinte série: 

								1,2,4,8,16,32,...
*/

//importação de bibliotecas
#include <stdio.h>

void main ()
{
	//Declaração de variáveis
	int i, n, num=1;
	
	printf("Informe N: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) 
	{
		printf("%d ", num);
		
		num = num * 2;
	}
}
