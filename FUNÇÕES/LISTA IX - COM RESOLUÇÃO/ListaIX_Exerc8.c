/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 26/11/2021
	
	Lista de Exercícios IX (Funções)
	
	QUESTÃO 08:
	Desenvolver uma função que exiba todos os números primos inferiores a determinado 
	valor inteiro N.
*/

//importação de bibliotecas
#include <stdio.h>

//função exibirPrimos
void exibirPrimos (int n)
{
	//declaração de variáveis
	int i, j, cont;
	
	//percorrendo todos os valores inferiores a 'n'
	for (i=2;i<n;i++)		//excluindo o 1, pois ele não é primo (ou seja, não possui 2 divisores)
	{
		cont = 0;
		
		//verificando quantos divisores cada valor de 'i' possui
		for (j=1;j<=i;j++)	
		{
			//verificando se 'j' é divisor de 'i'
			if (i%j==0)
			{
				cont++;
			}
		}
		
		//verificando se é primo
		if (cont == 2)
		{
			printf ("%d ", i);
		}
	}
}

//main
void main ()
{
	//declaração de variáveis
	int numero;
	
	//lendo o valor
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	//chamando a função
	exibirPrimos (numero);
}
