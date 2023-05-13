/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 21/10/2021

	Estruturas de Repeti��o

	Desenvolver um programa que calcule o valor de S.
	
				S = 1+2+3+�+(n-1)+n 
*/

//importa��o de bibliotecas
#include <stdio.h>

void main()
{
	//declara��o de vari�veis
	int i, n, s = 0;
	
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
		//variando os valores de 1 at� 'n'
		for (i=1;i<=n;i++)
		{
			s = s + i;		//somando todos os valores de 'i' e acumulando o resultado em 's'	
		}		
		
		//exibindo o resultado
		printf ("\nsoma = %d", s);
	}
}

// s = 1 + 2 + 3 + 4 + ... + n
