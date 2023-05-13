/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exercícios V
	
	QUESTÃO 09:
	Escrever um programa que encontre o quinto número maior que 1000, cuja divisão por 
	11 tenha resto 5.
*/

//importação de bibliotecas
#include <stdio.h>

void main()
{
	//declaração de variáveis
	int i, ordem=0;
	
	i = 1000;	//inicializando 'i' com o primeiro valor maior do que 1000
	
	while (ordem < 5)
	{
		i++; 
		
		if(i%11==5)
		{
			ordem++;
		}
	}
	
	printf ("\nResposta: %d", i);
}
