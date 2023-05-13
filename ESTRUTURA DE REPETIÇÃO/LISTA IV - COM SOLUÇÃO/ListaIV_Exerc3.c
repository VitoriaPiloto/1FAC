/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 28/10/2021

	Lista de Exercícios IV
	
	QUESTÃO 03: Joãozinho investiu Q reais em uma aplicação com rendimento fixo de R% ao 
	mês. Pede-se a implementação de um programa que calcule o valor (e exiba-o) disponível 
	na conta de Joãozinho após A anos de investimento.
	
	Exemplo:
	
			Q: 1000.00
			R: 1 %				[0%..100%]
			
			1º mês		2º mês			3º mês				...
			1000		1000+10=1010	1010+10,10=1020,10
*/

//importação de bibliotecas
#include <stdio.h>

void main()
{
	//declaração de variáveis
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

	//calculando o valor acumulado ao longo dos meses da aplicação
    for (i = 1; i <= meses ; i++)
    {
       acumulado += (acumulado*R) ;   //acumulado = acumulado + (acumulado*R);   
    }
    
    //exibindo o valor acumulado
    printf("\n\nNo final o valor sera: R$ %.2f\n", acumulado);
}
