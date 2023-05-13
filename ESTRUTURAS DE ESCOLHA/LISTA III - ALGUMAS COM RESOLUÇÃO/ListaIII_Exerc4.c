/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 21/10/2021

	Lista de Exercícios III
	
	QUESTÃO 04: 
	Implementar um programa que leia um valor inteiro n1. Se este não estiver no intervalo 
	de 100 a 999, uma mensagem deve ser exibida ao usuário informando que o número é 
	inválido e, em seguida, a execução do programa terminará.
	Caso o valor esteja no intervalo definido, o programa deverá criar um novo valor n2 
	(e exibi-lo ao final) contendo os mesmos algarismos de n1, porém em ordem crescente.

	Exemplos:

				n1		514
				n2		145

				n1		929
				n2		299

				n1		124
				n2		124
	
	Nota:
	Como definido no enunciado, n1 consiste em um número inteiro positivo, com 3 algarismos. 
	n2 também será um único número!
*/

//importação de bibliotecas
#include <stdio.h>

void main()
{
	//declaração de variáveis
	int n1, 				//valor fornecido pelo usuário
	    n2,					//resultado do programa
	    al1, al2, al3,		//os 3 algarismos de n1, após decomposição
		menor, meio, maior,	//guardarão, respectivamente, o menor, o do meio e o maior elementos dentre os três algarismos de n1		
		resto;
	
	//leitura do valor de entrada
	printf ("Entre com um numero de 3 algarismos: ");
	scanf ("%d", &n1);
	
	//verificando se o valor é inválido
	if ((n1 < 100) || (n1 > 999))
	//ou       if !((n1 >= 100) && (n1 <= 999))
	{
		printf ("\n%d não possui 3 algarismos e, portanto, e' invalido!", n1);
	}
	else
	{
		//se chegou aqui, é pq o valor n1 é válido
		
		//Decompor 'n1' em seus três algarismos 'al1', 'al2', 'al3'
		al1 = n1 / 100;
		resto = n1 % 100;
		
		al2 = resto/10;
		al3 = resto%10;
		
		//Armazenar nas variáveis 'maior', 'menor' e 'meio', o maior, o menor e o elemento do meior, dentre os 3 algarismos
		
		//verificando se 'al1' é o maior algarismo
		if ((al1 >= al2) && (al1 >= al3))
		{
			maior = al1;
			
			//determinando o elemento do meio e o menor
			if (al2 >= al3)
			{
				meio = al2;
				menor = al3;
			}
			else
			{
				meio = al3;
				menor = al2;
			}
		}
		else
		{
			//verificando se 'al2' é o maior algarismo
			if (al2 >= al3)
			{
				maior = al2;
				
				//determinando o elemento do meio e o menor
				if (al1 >= al3)
				{
					meio = al1;
					menor = al3;
				}
				else
				{
					meio = al3;
					menor = al1;
				}							
			}
			else
			{
				//'al3' é o maior algarismo
				maior = al3;
				
				//determinando o elemento do meio e o menor
				if (al1 >= al2)
				{
					meio = al1;
					menor = al2;
				}
				else
				{
					meio = al2;
					menor = al1;
				}				
			}
		}
		
		//criar o número n2
		n2 = menor*100+meio*10+maior;
		
		//exibindo o resultado
		printf ("\n\nValor original: %d\nNovo valor: %d", n1, n2);
	}		
}

/*
	Exemplo:
				n1: 513		==>  al1: 5   al2: 1  al3: 3
				
						513  |100
						 13    5	
						 
						13   |10
						 3     1
						 
				Organizando os algarismos nas variáveis maior, menor e meio:
				
				- maior: 5
				- menor: 1
				- meio:  3
				
				Então, n2 deve ser 135

*/
