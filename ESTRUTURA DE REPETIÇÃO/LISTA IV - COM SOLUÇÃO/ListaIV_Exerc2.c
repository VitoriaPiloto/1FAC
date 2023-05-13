/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 28/10/2021

	Lista de Exerc�cios IV
	
	QUEST�O 02: Fa�a um programa que exiba todos os elementos da seguinte s�rie, assim 
	como a soma destes elementos:

				1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1
*/

//importa��o de bibliotecas
#include <stdio.h>

void main()
{
	//declara��o de vari�veis
	int i, j, soma = 0;
	
	//ERRO!!!!
	/*for (i=1;i<=50;i++)
	{
		for (j=50;j>=1;j--)
		{
			printf ("%d %d ", i, j);   //executado 50x50 vezes = 2.500 vezes!!!
		}
	}*/
	
	//ERRO!!!!
	//n�o intercala as sequ�ncias
	/*for (i=1;i<=50;i++)
	{
		printf ("%d ", i); 		
	}
	
	for (j=50;j>=1;j--)
	{
		printf ("%d ", j);   
	}*/
	
	for (i=1,j=50;/*(i<=50)&&*/(j>=1);i++,j--) 
	{
		//exibindo os elementos da sequ�ncia
		printf ("%d %d ", i, j); 
		
		//acumulando os valores de i e j na soma
		soma = soma + i + j;				
	}
	
	//exibindo o valor final da soma
	printf ("\n\nSoma = %d\n", soma);	
}
