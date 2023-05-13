/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 28/10/2021

	Lista de Exerc�cios IV
	
	QUEST�O 04: Fa�a um programa que leia 300 n�meros reais. Ao final, devem ser exibidas 
	as seguintes informa��es:

	a)	A quantidade de valores negativos digitados;
	b)	A m�dia dos valores positivos.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 300

void main()
{
	//declara��o de vari�veis
	int i, positivos=0, negativos=0;
	float numero, somaPos=0, mediaPos; 

	//lendo os QUANT elementos
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &numero);
		
		//verificar se o n�mero lido � negativo
		if (numero < 0)
		{
			negativos++;  //negativos = negativos+1;
		}
		else
		{
			//verificar se o n�mero lido � positivo (final, se chegou at� aqui, o n�mero tbm pode ser igual a 0)
			if (numero > 0)
			{
				somaPos = somaPos + numero;   // somaPos += numero;
				positivos++;
				
				//mediaPos = somaPos/positivos;  FORA DO FOR!!! A divis�o � feita uma �nica vez
			}
		}
	}
	
	//calculando a m�dia dos positivos
	mediaPos = somaPos/positivos;
	
	//exibindo os resultados
	printf ("\nQuantidade de valores negativos: %d\n", negativos);
	printf ("Media dos valores positivos: %.1f\n", mediaPos);
}
