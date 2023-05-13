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
	int n, i=1, guardaValor=1;
	
	//Início
	printf("Insira ate que termo deseja saber a potencia de 2: ");
	scanf("%d", &n);
	
	while(i<=n)
	{
		printf("%d, ", guardaValor);
		guardaValor=guardaValor*2;
    	i++;
	}
}
