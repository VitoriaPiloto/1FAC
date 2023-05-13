/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 02/12/2021
	
	Lista de Exerc�cios IX (Fun��es)

	QUEST�O 09:
	Implementar uma fun��o que, dado um n�mero inteiro, calcule (e retorne) a soma e 
	a m�dia de seus divisores.
	
		Par�metro:	n�mero inteiro
		Retornos:	soma (int) e m�dia (float)
*/

//importa��o de bibliotecas
#include <stdio.h>

//fun��o
void calcularSomaMedia (int numero, int *soma, float *media)
{
	//declara��o de vari�veis
	int i, cont = 0;
	float med;
	
	//zerando a soma
	*soma = 0;
	
	//varrendo os 'poss�veis' divisores de 'numero'
	for (i=1;i<=numero;i++)
	{
		//verificando se 'i' � divisor de 'numero'
		if (numero % i == 0)
		{
			*soma = *soma + i;	//soma = soma de todos os divisores de 'numero'
			cont++;			
		}
	}
	
	//calculando a m�dia dos divisores de 'numero'
	*media = (float)(*soma)/cont;
	
	//retornando os resultados atrav�s dos par�metros de sa�da
//	*soma = s;
//	*media = med;
}

//main
void main ()
{
	//declara��o de vari�veis
	int num, sum;
	float average;
	
	//lendo o valor de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &num);
	
	//chamando a fun��o
	calcularSomaMedia (num, &sum, &average);
	
	//exibindo os resultados
	printf ("\nSoma = %d   -   Media = %.1f", sum, average);
}
