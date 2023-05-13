/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exercícios V
	
	QUESTÃO 07:
	Desenvolver um programa no qual o usuário entre com vários números inteiros e 
	positivos e imprima o produto dos números ímpares e a soma dos números pares. 
*/

//importação de bibliotecas
#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int numero, soma = 0, produto = 1;
	char opcao;
	
	do
	{
		//lendo um novo número
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//verificando se o número é par ou ímpar
		if (numero % 2 == 0)  //par
		{
			soma = soma + numero; //soma += numero;
		}
		else
		{
			produto = produto * numero;  //produto *= numero;
		}
		
		//verificando se o usuário continuará a fornecer valores
		printf ("Deseja continuar [S/N]? ");
		fflush (stdin);
		scanf ("%c", &opcao);
		opcao = toupper (opcao);
	}
	while (opcao == 'S');
	
	//exibindo os resultados
	printf ("\n\nSoma dos pares: %d\n", soma);
	printf ("Produto dos impares: %d\n", produto);
}
