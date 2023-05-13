/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exerc�cios V
	
	QUEST�O 06:
	Criar um programa que exiba os N primeiros termos da seguinte s�rie: 

								1,2,8,64,1024,...
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	int n, i, num=1, res=1;
	
	printf("Informe numero: ");
	scanf("%d", &n);				//n: 5
	
	printf("%d ", num);
	
	for(i=1;i<n;i++) 				//i: 1 2 3 4 5
	{	
		num = num * 2;				//num: 1*2=2*2=4*2=8*2=16
				
		res = res * num;			//res: 1*2=2*4=8*8=64*16=1024
			
		printf("%d ", res);
	}
}

//exibindo: 1 2 8 64 1024
