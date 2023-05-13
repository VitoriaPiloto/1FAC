/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 26/11/2021
	
	Lista de Exerc�cios IX (Fun��es)
	
	QUEST�O 06:
	Implementar uma fun��o que, dado um n�mero inteiro N, exiba uma sequ�ncia de n�meros 
	como as ilustradas nos exemplos a seguir:

	Exemplo 1:  N = 3
 		(1 2) (1 3) (2 1) (2 3) (3 1) (3 2)

	Exemplo 2:  N = 5
 		(1 2) (1 3) (1 4) (1 5) (2 1) (2 3) (2 4) (2 5) (3 1) (3 2) (3 4) (3 5)
		(4 1) (4 2) (4 3) (4 5) (5 1) (5 2) (5 3) (5 4)	
		
		
	Exemplo 3: N = 4
		(1 2) (1 3) (1 4) (2 1) (2 3) (2 4) (3 1) (3 2) (3 4) (4 1) (4 2) (4 3)	
*/

//importa��o de bibliotecas
#include <stdio.h>

//fun��o exibir
void exibir (int n)
{
	//declara��o de vari�veis
	int i, j;
	
	//variando o primeiro valor de cada par a ser apresentado
	for (i=1; i<=n; i++)
	{
		//variando o segundo valor de cada par a ser apresentado
		for (j=1; j<=n; j++)
		{
			//o par s� ser� exibido se os n�meros forem diferentes
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
	//declara��o de vari�veis
	int numero;
	
	//lendo um valor
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	exibir (numero);
}
