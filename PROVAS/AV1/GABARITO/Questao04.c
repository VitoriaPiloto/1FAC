/*****************************************************************************************************************

	FAETERJ-Rio
	FAC - 2021/2 - Turmas A e B
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - aplicada em 11/11/2021
	
	Questão 04 [2,5 pontos]:
	Desenvolver um programa em C que permaneça lendo valores até que usuário digite o 
	número -1. Ao final, deverão ser exibidos:

	i.   O menor número positivo digitado;
	ii.	 A quantidade de divisores de 100 informados;
	iii. A média dos números pares fornecidos.

*****************************************************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int numero, menor = 99999, cont = 0, somaPares = 0, contPares = 0;
	float mediaPares;
	
	//lendo valores até que o usuário digite o número -1
	do
	{
		//lendo um novo valor
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//determinando o menor nº positivo digitado
		if (numero > 0)
		{
			//verificando se é o menor até o momento
			if (numero < menor)
			{
				menor = numero;
			}
		}
		
		//verificando se é um divisor de 100
		if (numero != -1)
		{
			if (100 % numero == 0)
			{
				cont++;
			}
		}
		
		//verificando se é um número par
		if (numero % 2 == 0)
		{
			somaPares = somaPares + numero;  //ou  somaPares += numero;
			contPares++;
		}
	}
	while (numero != -1);
	
	//exibindo os resultados
	printf ("\n\nMenor numero positivo: %d", menor);
	printf ("\nQuantidade de divisores de 100: %d", cont);
	
	//calculando a média dos pares
	mediaPares = (float)somaPares/contPares;
	printf ("\nMedia dos numeros pares: %.1f", mediaPares);
}
	
	

