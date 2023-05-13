/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 26/11/2021
	
	Lista de Exerc�cios IX (Fun��es)
	
	QUEST�O 08:
	Desenvolver uma fun��o que exiba todos os n�meros primos inferiores a determinado 
	valor inteiro N.
*/

//importa��o de bibliotecas
#include <stdio.h>

//fun��o exibirPrimos
void exibirPrimos (int n)
{
	//declara��o de vari�veis
	int i, j, cont;
	
	//percorrendo todos os valores inferiores a 'n'
	for (i=2;i<n;i++)		//excluindo o 1, pois ele n�o � primo (ou seja, n�o possui 2 divisores)
	{
		cont = 0;
		
		//verificando se o n�mero 'i' possui divisores no intervalo de 2 a i-1
		for (j=2;(j<i)&&(cont==0);j++)		//a repeti��o 
		{
			//verificando se 'j' � divisor de 'i'
			if (i%j==0)
			{
				cont++;
			}
		}
		
		//verificando se � primo
		if (cont == 0)
		{
			printf ("%d ", i);
		}
	}
}

//main
void main ()
{
	//declara��o de vari�veis
	int numero;
	
	//lendo o valor
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	exibirPrimos (numero);
}
