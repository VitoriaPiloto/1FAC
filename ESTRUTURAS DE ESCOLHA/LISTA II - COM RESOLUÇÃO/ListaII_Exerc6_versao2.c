/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 14/10/2021
	
	Lista de Exerc�cios II
	
	QUEST�O 06: Escrever um algoritmo que, dados um n�mero inteiro i e tr�s valores a, b e c, apresente os 
	3 n�meros na ordem definida por i, como descrito abaixo:

		a)	i = 1: os tr�s valores em ordem crescente;
		b)	i = 2: os tr�s valores em ordem decrescente;
		c)	i = 3: o maior valor deve ser apresentado no meio dos outros.
		
	vers�o2: usando switch para testar o valor de i
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main()
{
	//declara��o de vari�veis
	int i, a, b, c, maior, menor, meio;
	
	//leitura dos dados
	printf ("Entre com o primeiro valor: ");
	scanf ("%d", &a);
	
	printf ("Entre com o segundo valor: ");
	scanf ("%d", &b);
	
	printf ("Entre com o terceiro valor: ");
	scanf ("%d", &c);
	
	/*
	OU:
	printf ("Entre com os tr�s valores: ");
	scanf ("%d %d %d", &a, &b, &c);
	*/
	
	printf ("Entre com o tipo de ordenacao: 1. Crescente, 2. Descrescente, 3. O maior no meio dos demais: ");
	scanf ("%d", &i);
	
	//determinando o maior, o menor e o elemento do meio
	if ((a>b)&&(a>c))	//a � o maior de todos
	{
		maior = a;
		
		//verificando, ent�o, quem � o do meio e quem � o menor
		if (b > c)
		{
			meio = b;
			menor = c;
		}
		else
		{
			meio = c;
			menor = b;
		}
	}
	else
	{
		if (/*(b>a)&&*/(b>c))  //b � o maior de todos
		{
			maior = b;
			
			//verificando, ent�o, quem � o do meio e quem � o menor
			if (a > c)
			{
				meio = a;
				menor = c;
			}
			else
			{
				meio = c;
				menor = a;
			}			
		}
		else
		{			
			maior = c;
			
			//verificando, ent�o, quem � o do meio e quem � o menor
			if (a > b)
			{
				meio = a;
				menor = b;
			}
			else
			{
				meio = b;
				menor = a;
			}			
		}
	}

	//Exibindo os valores de acordo com 'i'	
	switch (i)
	{
		case 1: //exibindo em ordem crescente
			    printf ("\nOrdem crescente: %d, %d, %d\n", menor, meio, maior);
			    break;
			
		case 2: //exibindo em ordem decrescente
			    printf ("\nOrdem decrescente: %d, %d, %d\n", maior, meio, menor);
			    break;
			
		case 3: //exibindo o maior elemento no meio
			    printf ("\nMaior elemento no meio: %d, %d, %d\n", meio, maior, menor);
				//OU: printf ("\nMaior elemento no meio: %d, %d, %d\n", menor, maior, meio);
				break;
	}	
}
