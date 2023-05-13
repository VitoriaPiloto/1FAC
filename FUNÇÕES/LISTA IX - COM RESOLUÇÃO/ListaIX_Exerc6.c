/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 26/11/2021
	
	Lista de Exercícios IX (Funções)
	
	QUESTÃO 06:
	Implementar uma função que, dado um número inteiro N, exiba uma sequência de números 
	como as ilustradas nos exemplos a seguir:

	Exemplo 1:  N = 3
 		(1 2) (1 3) (2 1) (2 3) (3 1) (3 2)

	Exemplo 2:  N = 5
 		(1 2) (1 3) (1 4) (1 5) (2 1) (2 3) (2 4) (2 5) (3 1) (3 2) (3 4) (3 5)
		(4 1) (4 2) (4 3) (4 5) (5 1) (5 2) (5 3) (5 4)	
		
		
	Exemplo 3: N = 4
		(1 2) (1 3) (1 4) (2 1) (2 3) (2 4) (3 1) (3 2) (3 4) (4 1) (4 2) (4 3)	
*/

//importação de bibliotecas
#include <stdio.h>

//função exibir
void exibir (int n)
{
	//declaração de variáveis
	int i, j;
	
	//variando o primeiro valor de cada par a ser apresentado
	for (i=1; i<=n; i++)
	{
		//variando o segundo valor de cada par a ser apresentado
		for (j=1; j<=n; j++)
		{
			//o par só será exibido se os números forem diferentes
			if (i != j)
			{
				printf ("(%d %d) ", i, j);
			}
		}
	}
}

//main
void main ()
{
	//declaração de variáveis
	int numero;
	
	//lendo um valor
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &numero);
	
	//chamando a função
	exibir (numero);
}
