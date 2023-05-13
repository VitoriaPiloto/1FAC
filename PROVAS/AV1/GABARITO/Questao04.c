/*****************************************************************************************************************

	FAETERJ-Rio
	FAC - 2021/2 - Turmas A e B
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - aplicada em 11/11/2021
	
	Quest�o 04 [2,5 pontos]:
	Desenvolver um programa em C que permane�a lendo valores at� que usu�rio digite o 
	n�mero -1. Ao final, dever�o ser exibidos:

	i.   O menor n�mero positivo digitado;
	ii.	 A quantidade de divisores de 100 informados;
	iii. A m�dia dos n�meros pares fornecidos.

*****************************************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int numero, menor = 99999, cont = 0, somaPares = 0, contPares = 0;
	float mediaPares;
	
	//lendo valores at� que o usu�rio digite o n�mero -1
	do
	{
		//lendo um novo valor
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//determinando o menor n� positivo digitado
		if (numero > 0)
		{
			//verificando se � o menor at� o momento
			if (numero < menor)
			{
				menor = numero;
			}
		}
		
		//verificando se � um divisor de 100
		if (numero != -1)
		{
			if (100 % numero == 0)
			{
				cont++;
			}
		}
		
		//verificando se � um n�mero par
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
	
	//calculando a m�dia dos pares
	mediaPares = (float)somaPares/contPares;
	printf ("\nMedia dos numeros pares: %.1f", mediaPares);
}
	
	

