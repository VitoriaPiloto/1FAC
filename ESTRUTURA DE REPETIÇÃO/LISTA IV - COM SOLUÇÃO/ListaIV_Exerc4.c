/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 28/10/2021

	Lista de Exercícios IV
	
	QUESTÃO 04: Faça um programa que leia 300 números reais. Ao final, devem ser exibidas 
	as seguintes informações:

	a)	A quantidade de valores negativos digitados;
	b)	A média dos valores positivos.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 300

void main()
{
	//declaração de variáveis
	int i, positivos=0, negativos=0;
	float numero, somaPos=0, mediaPos; 

	//lendo os QUANT elementos
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &numero);
		
		//verificar se o número lido é negativo
		if (numero < 0)
		{
			negativos++;  //negativos = negativos+1;
		}
		else
		{
			//verificar se o número lido é positivo (final, se chegou até aqui, o número tbm pode ser igual a 0)
			if (numero > 0)
			{
				somaPos = somaPos + numero;   // somaPos += numero;
				positivos++;
				
				//mediaPos = somaPos/positivos;  FORA DO FOR!!! A divisão é feita uma única vez
			}
		}
	}
	
	//calculando a média dos positivos
	mediaPos = somaPos/positivos;
	
	//exibindo os resultados
	printf ("\nQuantidade de valores negativos: %d\n", negativos);
	printf ("Media dos valores positivos: %.1f\n", mediaPos);
}
