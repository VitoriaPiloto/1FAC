/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exerc�cios V
	
	QUEST�O 07:
	Desenvolver um programa no qual o usu�rio entre com v�rios n�meros inteiros e 
	positivos e imprima o produto dos n�meros �mpares e a soma dos n�meros pares. 
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	int numero, soma = 0, produto = 1;
	char opcao;
	
	do
	{
		//lendo um novo n�mero
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//verificando se o n�mero � par ou �mpar
		if (numero % 2 == 0)  //par
		{
			soma = soma + numero; //soma += numero;
		}
		else
		{
			produto = produto * numero;  //produto *= numero;
		}
		
		//verificando se o usu�rio continuar� a fornecer valores
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
