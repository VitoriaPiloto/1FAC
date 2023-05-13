/*****************************************************************************************************************

	FAETERJ-Rio
	FAC - 2021/2 - Turmas A e B
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - aplicada em 11/11/2021
	
	Quest�o 03 [2,5 pontos]:
	Implementar um programa em C que, dado um n�mero inteiro n, exiba todos os n�meros 
	no intervalo de 1 a 1000, substituindo os m�ltiplos de n pela palavra PIM, simulando 
	uma antiga brincadeira.

	Exemplo:
		n = 3
		Ser�o exibidos: 1  2  PIM  4  5  PIM  7  8  PIM ...

	Nota: esta quest�o dever� ser implementada em tr�s vers�es, uma para cada estrutura 
	de repeti��o estudada (for, while, do..while).
	
	Vers�o 1: estrutura 'for'

*****************************************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int n, i;
	
	//lendo o valor de n
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	//variando os valores de 1 a 1000
	for (i=1;i<=1000;i++)
	{
		if (i % n == 0)
		{
			printf ("PIM ");
		}
		else
		{
			printf ("%d ", i);
		}
	}
}
