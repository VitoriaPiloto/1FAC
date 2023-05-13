/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 07/10/2021
	
	Lista de Exerc�cios II
	
	QUEST�O 03: As vendas parceladas se tornaram uma �tima op��o para os lojistas que, a cada dia, 
	criam novas promo��es para tentar conquistar novos clientes. Fa�a um algoritmo que permita ao 
	lojista informar o pre�o do produto e receber as seguintes informa��es:

	a)	O valor com 10% de desconto para pagamento � vista;
	b)	O valor da presta��o para parcelamento sem juros, em 5x;
	c)	O valor da presta��o para parcelamento com juros, em 10x, com 20% de acr�scimo no valor do 
	produto.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	float preco, aVista, parc5x, parc10x;
	
	//corpo do programa
	
	//lendo o pre�o do produto
	printf ("Entre com o preco do produto: ");
	scanf ("%f", &preco);
	
	//calculando o valor � vista
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
