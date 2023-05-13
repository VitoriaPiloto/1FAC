/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 21/10/2021

	Estruturas de Repetição

	Desenvolver um programa que calcule o valor de S.
	
				S = 1/n + 2/(n-1) + 3/(n-2) + ... + (n-1)/2 + n/1
*/

//importação de bibliotecas
#include <stdio.h>

void main()
{
	//declaração de variáveis
	int i, j, n;
	float s = 0;
	
	//lendo o valor de n
	printf ("Entre com um numero inteiro positivo: ");
	scanf ("%d", &n);
	
	//validando
	if (n <= 0)
	{
		printf ("\nO valor digitado nao e' valido. Fim do programa!");
	}
	else
	{
		//variando o numerador 'i' de 1 até 'n'
		//e o denominador 'j' de 'n' até 1
		for (i=1,j=n;(i<=n)/* && (j>=1)*/;i++,j--) 
		{
			s = s + (float)i/j;       //casting   
		}
		
		//exibindo o resultado
		printf ("\nsoma = %.2f", s);
	}
}

// 				S = 1/n + 2/(n-1) + 3/(n-2) + ... + (n-1)/2 + n/1

//S = 1/3 + 2/2 + 3/1 = 0,33 + 1 + 3 = 4,33
