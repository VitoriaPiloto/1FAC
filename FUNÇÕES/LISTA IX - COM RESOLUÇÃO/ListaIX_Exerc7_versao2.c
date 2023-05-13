/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 26/11/2021
	
	Lista de Exercícios IX (Funções)
	
	QUESTÃO 07:
	Implementar uma função que, dado um número inteiro n, e o intervalo definido pelos 
	números a e b, determine quantos valores do intervalo possuem divisores 
	(sendo estes diferentes de 1) que também sejam divisores de n.

	Exemplo:
		n = 6
		a = 10 e b = 20
		
						Divisores de 6?  1, 2, 3, 6
						
						Números no intervalo:
							10		1, 2, 5, 10 			*	1
							11		1, 11					
							12		1, 2, 3, 4, 6, 12 		*	3
							13		1, 13					
							14		1, 2, 7, 14				*	1
							15		1, 3, 5, 15				*	1
							16		1, 2, 4, 8, 16			*	1
							17		1, 17
							18		1, 2, 3, 6, 9, 18		*	3
							19		1, 19
							20		1, 2, 4, 5, 10 ,20		*	1

	Resposta = 7 (pois os números 10, 12, 14, 15, 16, 18 e 20 possuem divisores em 
	              comum com o número 6).	
*/

//importação de bibliotecas
#include <stdio.h>

//função verificaDivisores
int verificaDivisores (int n, int a, int b)
{
	//declaração de variáveis
	int i, j, 
	    cont = 0, 				//guardará a resposta da função
		numDivisoresComuns;		//armazenará o número de divisores comuns entre cada número do intervalo e o valor de 'n'
	
	//variando o intervalo definido por 'a' e 'b'
	for (i=a;i<=b;i++)
	{
		numDivisoresComuns = 0;	//zerando o contador de divisores para cada valor do intervalo
		
		//verificando os divisores de cada valor do intervalo
		for (j=2;(j<=i)&&(numDivisoresComuns==0);j++)		//versão 02: incluindo mais uma condição no FOR para que este pare quando o primeiro divisor comum for encontrado
		{			
			//verificando se 'j' é divisor tanto de 'i' (número do intervalo 'a' e 'b') quanto de 'n'
			if ((i%j==0) && (n%j==0))
			{
				numDivisoresComuns++;	//mais um divisor comum encontrado
			}
		}
		
		//Se o número 'i' do intervalo possuir pelo menos um divisor comum com 'n' ...
		if (numDivisoresComuns > 0)
		{
			cont++;
		}
	}
	
	//retornando resultado
	return cont;
}

//main
void main ()
{
	//declaração de variáveis
	int numero, inf, sup, resp;
	
	//lendo um valor inteiro
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &numero);
	
	//lendo o intervalo
	printf ("Entre com o limite inferior do intervalo: ");
	scanf ("%d", &inf);
	
	printf ("Entre com o limite superior do intervalo: ");
	scanf ("%d", &sup);
	
	//chamando a função
	resp = verificaDivisores (numero, inf, sup);
	
	//exibindo o resultado
	printf ("\nForam encontrados %d valores do intervalo [%d,%d] que possuem divisores comuns a %d", resp, inf, sup, numero);
}
