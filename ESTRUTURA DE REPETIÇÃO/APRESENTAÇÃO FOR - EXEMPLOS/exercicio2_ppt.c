/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 21/10/2021

	Estruturas de Repetição

	Desenvolver um programa que calcule o valor de S.
	
				S = 1+1/2+1/3+…+1/(n-1)+1/n 
*/

//importação de bibliotecas
#include <stdio.h>

void main()
{
	//declaração de variáveis
	int i, n;
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
		//variando os valores de 1 até 'n'
		for (i=1;i<=n;i++)
		{
			s = s + 1.0/i;		//somando todos os valores de 1/'i' e acumulando o resultado em 's'	
			
			//atenção: foi necessário tornar um dos operandos real para que o resultado final tivesse parte fracionária
		}		
		
		//exibindo o resultado
		printf ("\nsoma = %.2f", s);
	}
}

// 				S = 1/1+1/2+1/3+…+1/(n-1)+1/n 
