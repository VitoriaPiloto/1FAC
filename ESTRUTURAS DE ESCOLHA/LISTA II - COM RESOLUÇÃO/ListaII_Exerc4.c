/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 07/10/2021
	
	Lista de Exerc�cios II
	
	QUEST�O 04: Desenvolva um algoritmo que calcule o consumo de combust�vel de um autom�vel em 
	determinada viagem. Para isso, devem ser obtidos: 
		i) o percurso (em quil�metros) da viagem; 
		ii) o n�mero de quil�metros que o carro percorre com um litro de combust�vel (km/l); e 
		iii) o pre�o do litro do combust�vel. 

	Ao final, o algoritmo deve determinar:
	- A quantidade de combust�vel, em litros, consumida durante a viagem;
	- O custo total de combust�vel.
	
	Exemplos:
		percurso: 200 km
		consumo:  10km/l
		pre�o:	  R$ 7.00
		
		quantidade de combust�vel??   200/10 = 20 litros	
		custo total de combust�vel??  20*7 = R$ 140.00		
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main()
{
	//declara��o de vari�veis
	float percurso, litroCons;
	float precoComb, custoTotal, consumo;
	
	//corpo do programa
	
	//lendo o percurso
	printf("Insira o tamanho em km da viagem: ");
	scanf("%f", &percurso);

	//lendo o consumo
	printf("Insira o consumo do carro, ou seja, a quantidade de km rodados com 1L: ");
	scanf("%f", &consumo);
	
	//lendo o pre�o do combustivel
	printf("Insira o valor atual do combust�vel: ");
	scanf("%f", &precoComb);

	//calculando e exibindo a quantidade de litros
	litroCons=percurso/consumo;
	printf("A quantidade de combust�vel consumido foi: %.1f litros\n", litroCons);
	
	//calculando e exibindo o custo da viagem
	custoTotal=precoComb*litroCons;
	printf("O custo total foi: %.2f reais\n", custoTotal);
}
