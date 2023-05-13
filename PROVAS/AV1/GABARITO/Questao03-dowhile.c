/*****************************************************************************************************************

	FAETERJ-Rio
	FAC - 2021/2 - Turmas A e B
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - aplicada em 11/11/2021
	
	Questão 03 [2,5 pontos]:
	Implementar um programa em C que, dado um número inteiro n, exiba todos os números 
	no intervalo de 1 a 1000, substituindo os múltiplos de n pela palavra PIM, simulando 
	uma antiga brincadeira.

	Exemplo:
		n = 3
		Serão exibidos: 1  2  PIM  4  5  PIM  7  8  PIM ...

	Nota: esta questão deverá ser implementada em três versões, uma para cada estrutura 
	de repetição estudada (for, while, do..while).
	
	Versão 3: estrutura 'do while'

*****************************************************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i;
	
	//lendo o valor de n
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	//variando os valores de 1 a 1000
	i=1;
	do
	{
		if (i % n == 0)
		{
			printf ("PIM ");
		}
		else
		{
			printf ("%d ", i);
		}
		
		i++;
	}
	while (i<=1000);
}
