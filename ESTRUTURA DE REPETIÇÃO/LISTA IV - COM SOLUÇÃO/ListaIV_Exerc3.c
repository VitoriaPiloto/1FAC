/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 28/10/2021

	Lista de Exerc�cios IV
	
	QUEST�O 03: Jo�ozinho investiu Q reais em uma aplica��o com rendimento fixo de R% ao 
	m�s. Pede-se a implementa��o de um programa que calcule o valor (e exiba-o) dispon�vel 
	na conta de Jo�ozinho ap�s A anos de investimento.
	
	Exemplo:
	
			Q: 1000.00
			R: 1 %				[0%..100%]
			
			1� m�s		2� m�s			3� m�s				...
			1000		1000+10=1010	1010+10,10=1020,10
*/

//importa��o de bibliotecas
#include <stdio.h>

void main()
{
	//declara��o de vari�veis
	int A, meses, i;
	float Q, R, acumulado = 0;

	//leitura de dados de entrada
    printf("Digite o valor investido: ");
    scanf("%f", &Q);
    printf("Digite o valor do rendimento mensal em porcentagem [0..100]: ");
    scanf("%f", &R);
    printf("Digite os anos: ");
    scanf("%d", &A);

	//convertendo quantidade de anos para meses
    meses = A * 12;
    
    //inicializando o valor acumulado com o valor aplicado
    acumulado = Q;
    
    //transformando a taxa do intervalo de 0..100 para 0.0..1.0
    R = R/100;	

	//calculando o valor acumulado ao longo dos meses da aplica��o
    for (i = 1; i <= meses ; i++)
    {
       acumulado += (acumulado*R) ;   //acumulado = acumulado + (acumulado*R);   
    }
    
    //exibindo o valor acumulado
    printf("\n\nNo final o valor sera: R$ %.2f\n", acumulado);
}
