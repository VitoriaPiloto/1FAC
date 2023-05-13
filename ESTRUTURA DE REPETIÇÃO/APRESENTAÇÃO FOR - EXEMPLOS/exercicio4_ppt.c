/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 21/10/2021

	Estruturas de Repeti��o

	Desenvolver um programa que calcule o valor de S.
	
				S = 1/n - 2/(n-1) + 3/(n-2) - 4/(n-3) + ... n/1
*/

//importa��o de bibliotecas
#include <stdio.h>

void main()
{
	//declara��o de vari�veis
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
		//variando o numerador 'i' de 1 at� 'n'
		//e o denominador 'j' de 'n' at� 1
		for (i=1,j=n;(i<=n)/* && (j>=1)*/;i++,j--) 
		{
			//verificando se o numerador 'i' � par
			if (i%2==0)  //ou seja, se o resto da divis�o de 'i' por 2 � igual  0
			{
				s = s - (float)i/j;       //casting   
			}
			else
			{
				//numerador �mpar
				s = s + (float)i/j;       //casting   
			}
		}
		
		//exibindo o resultado
		printf ("\nsoma = %.2f", s);
	}
}

/*Exemplo:

	n = 3
	
	s = 1/3 - 2/2 + 3/1 = 0,33 - 1 + 3 = 2,33
	
*/
