/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exerc�cios V
	
	QUEST�O 05:
	Criar um programa que exiba os N primeiros termos da seguinte s�rie: 

								1,2,4,8,16,32,...
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//Declara��o de vari�veis
	int i, n, num=1;
	
	printf("Informe N: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) 
	{
		printf("%d ", num);
		
		num = num * 2;
	}
}
