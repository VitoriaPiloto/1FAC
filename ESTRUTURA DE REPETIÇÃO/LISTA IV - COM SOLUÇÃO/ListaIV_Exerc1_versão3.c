/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 28/10/2021

	Lista de Exerc�cios IV
	
	QUEST�O 01: Fa�a um programa que leia um n�mero inteiro positivo N e exiba todos os 
	m�ltiplos de Y inferiores a N, onde N e Y s�o fornecidos pelo usu�rio.
	
	Exemplo:
			N	50
			Y	7
			
			Ser�o exibidos: 0  7  14  21  28  35  42  49			
*/

//importa��o de bibliotecas
#include <stdio.h>

void main()
{
	//declara��o de vari�veis
	int n, y, i, m;

	//Leitura dos dados de entrada	
	printf("Digite o N\n");
	scanf("%d", &n);
	
	printf("Digite o Y\n");
	scanf("%d", &y);
	
	for(i=0;i<n;i=i+y)				
	{								
		printf("%d ", i);
	}
}
