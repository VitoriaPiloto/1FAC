/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exerc�cios V
	
	QUEST�O 09:
	Escrever um programa que encontre o quinto n�mero maior que 1000, cuja divis�o por 
	11 tenha resto 5.
*/

//importa��o de bibliotecas
#include <stdio.h>

void main()
{
	//declara��o de vari�veis
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
