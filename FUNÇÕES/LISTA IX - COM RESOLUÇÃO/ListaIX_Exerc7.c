/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 26/11/2021
	
	Lista de Exerc�cios IX (Fun��es)
	
	QUEST�O 07:
	Implementar uma fun��o que, dado um n�mero inteiro n, e o intervalo definido pelos 
	n�meros a e b, determine quantos valores do intervalo possuem divisores 
	(sendo estes diferentes de 1) que tamb�m sejam divisores de n.

	Exemplo:
		n = 6
		a = 10 e b = 20
		
						Divisores de 6?  1, 2, 3, 6
						
						N�meros no intervalo:
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

	Resposta = 7 (pois os n�meros 10, 12, 14, 15, 16, 18 e 20 possuem divisores em 
	              comum com o n�mero 6).	
*/

//importa��o de bibliotecas
#include <stdio.h>

//fun��o verificaDivisores
int verificaDivisores (int n, int a, int b)
{
	//declara��o de vari�veis
	int i, j, 
	    cont = 0, 				//guardar� a resposta da fun��o
		numDivisoresComuns;		//armazenar� o n�mero de divisores comuns entre cada n�mero do intervalo e o valor de 'n'
	
	//variando o intervalo definido por 'a' e 'b'
	for (i=a;i<=b;i++)
	{
		numDivisoresComuns = 0;	//zerando o contador de divisores para cada valor do intervalo
		
		//verificando os divisores de cada valor do intervalo
		for (j=2;j<=i;j++)
		{			
			//verificando se 'j' � divisor tanto de 'i' (n�mero do intervalo 'a' e 'b') quanto de 'n'
			if ((i%j==0) && (n%j==0))
			{
				numDivisoresComuns++;	//mais um divisor comum encontrado
			}
		}
		
		//Se o n�mero 'i' do intervalo possuir pelo menos um divisor comum com 'n' ...
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
	//declara��o de vari�veis
	int numero, inf, sup, resp;
	
	//lendo um valor inteiro
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &numero);
	
	//lendo o intervalo
	printf ("Entre com o limite inferior do intervalo: ");
	scanf ("%d", &inf);
	
	printf ("Entre com o limite superior do intervalo: ");
	scanf ("%d", &sup);
	
	//chamando a fun��o
	resp = verificaDivisores (numero, inf, sup);
	
	//exibindo o resultado
	printf ("\nForam encontrados %d valores do intervalo [%d,%d] que possuem divisores comuns a %d", resp, inf, sup, numero);
}
