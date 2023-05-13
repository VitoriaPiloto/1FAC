/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 07/10/2021
	
	Lista de Exercícios II
	
	QUESTÃO 04: Desenvolva um algoritmo que calcule o consumo de combustível de um automóvel em 
	determinada viagem. Para isso, devem ser obtidos: 
		i) o percurso (em quilômetros) da viagem; 
		ii) o número de quilômetros que o carro percorre com um litro de combustível (km/l); e 
		iii) o preço do litro do combustível. 

	Ao final, o algoritmo deve determinar:
	- A quantidade de combustível, em litros, consumida durante a viagem;
	- O custo total de combustível.
	
	Exemplos:
		percurso: 200 km
		consumo:  10km/l
		preço:	  R$ 7.00
		
		quantidade de combustível??   200/10 = 20 litros	
		custo total de combustível??  20*7 = R$ 140.00		
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main()
{
	//declaração de variáveis
	float percurso, litroCons;
	float precoComb, custoTotal, consumo;
	
	//corpo do programa
	
	//lendo o percurso
	printf("Insira o tamanho em km da viagem: ");
	scanf("%f", &percurso);

	//lendo o consumo
	printf("Insira o consumo do carro, ou seja, a quantidade de km rodados com 1L: ");
	scanf("%f", &consumo);
	
	//lendo o preço do combustivel
	printf("Insira o valor atual do combustível: ");
	scanf("%f", &precoComb);

	//calculando e exibindo a quantidade de litros
	litroCons=percurso/consumo;
	printf("A quantidade de combustível consumido foi: %.1f litros\n", litroCons);
	
	//calculando e exibindo o custo da viagem
	custoTotal=precoComb*litroCons;
	printf("O custo total foi: %.2f reais\n", custoTotal);
}
