/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 07/10/2021
	
	Lista de Exercícios II
	
	QUESTÃO 03: As vendas parceladas se tornaram uma ótima opção para os lojistas que, a cada dia, 
	criam novas promoções para tentar conquistar novos clientes. Faça um algoritmo que permita ao 
	lojista informar o preço do produto e receber as seguintes informações:

	a)	O valor com 10% de desconto para pagamento à vista;
	b)	O valor da prestação para parcelamento sem juros, em 5x;
	c)	O valor da prestação para parcelamento com juros, em 10x, com 20% de acréscimo no valor do 
	produto.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	float preco, aVista, parc5x, parc10x;
	
	//corpo do programa
	
	//lendo o preço do produto
	printf ("Entre com o preco do produto: ");
	scanf ("%f", &preco);
	
	//calculando o valor à vista
	aVista = preco*0.9;
	//aVista = preco - preco*0.1;
	
	//calculando o valor da parcela em 5x sem juros
	parc5x = preco/5;
	
	//calculando o valor da parcela em 10x com juros
	parc10x = (preco*1.2)/10;
	
	//exibindo os resultados
	printf ("\n\nValor a vista: R$ %f", aVista);
	printf ("\nParcelamento sem juros: 5 x R$ %.2f", parc5x);
	printf ("\nParcelamento com juros: 10 x R$ %.2f", parc10x);	
}
