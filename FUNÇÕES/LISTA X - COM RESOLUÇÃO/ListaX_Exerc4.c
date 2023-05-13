/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 26/11/2021
	
	Lista de Exercícios X (Funções)

	QUESTÃO 04:
	A função logarítmica é complementar à potenciação. Ou seja, uma vez que 3^4 = 81, 
	podemos então afirmar que log 3 81 = 4.

	Generalizando, temos que:

	base^expoente = pot   <==>    log base pot = expoente

	Com base nessa descrição, pede-se o desenvolvimento de uma função que, dados a e b, 
	calcule o valor de log a b.

	Nota: a sua solução deverá apresentar um valor inteiro que, na verdade, será a 
	solução aproximada do logaritmo.
	
	Exemplo:
	
			log 2 16 = ???  4
					2^0 = 1	
					2^1 = 2
					2^2 = 4
					2^3 = 8
					2^4 = 16
					
			log 3 100
					3^0 = 1
					3^1 = 3
					3^2 = 9
					3^3 = 27
					3^4 = 81
					3^5 = 243
		
*/

//importação de bibliotecas
#include <stdio.h>

//função logaritmo
int logaritmo (int base, int logaritmando)
{
	//declaração de variáveis
	int potencia = 1,    //começando com 1, pois é a primeir potência de base (base^0 = 1)
	    expoente = 0;
	    
	while (potencia < logaritmando)
	{
		//potencia = potencia*base;
		potencia *= base;
		
		//atualizando o expoente
		expoente++;
	}
	
	//retornando o resultado
	return expoente;
}

//main
void main ()
{
	//declaração de variáveis
	int a, b, resposta;
	
	//lendo os dados de entrada
	printf ("Entre com a base: ");
	scanf ("%d", &a);
	
	printf ("Entre com o logaritmando: ");
	scanf ("%d", &b);
	
	//chamando a função
	resposta = logaritmo (a, b);
	
	//exibindo o resultado
	printf ("\nlog de %d na base %d = %d", b, a, resposta);
}
