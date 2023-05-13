/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 02/12/2021
	
	Lista de Exercícios IX (Funções)

	QUESTÃO 09:
	Implementar uma função que, dado um número inteiro, calcule (e retorne) a soma e 
	a média de seus divisores.
	
		Parâmetro:	número inteiro
		Retornos:	soma (int) e média (float)
*/

//importação de bibliotecas
#include <stdio.h>

//função
void calcularSomaMedia (int numero, int *soma, float *media)
{
	//declaração de variáveis
	int i, s = 0 , cont = 0;
	float med;
	
	//varrendo os 'possíveis' divisores de 'numero'
	for (i=1;i<=numero;i++)
	{
		//verificando se 'i' é divisor de 'numero'
		if (numero % i == 0)
		{
			s = s + i;	//s = soma de todos os divisores de 'numero'
			cont++;			
		}
	}
	
	//calculando a média dos divisores de 'numero'
	med = (float)s/cont;
	
	//retornando os resultados através dos parâmetros de saída
	*soma = s;
	*media = med;
}

//main
void main ()
{
	//declaração de variáveis
	int num, sum;
	float average;
	
	//lendo o valor de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &num);
	
	//chamando a função
	calcularSomaMedia (num, &sum, &average);
	
	//exibindo os resultados
	printf ("\nSoma = %d   -   Media = %.1f", sum, average);
}
