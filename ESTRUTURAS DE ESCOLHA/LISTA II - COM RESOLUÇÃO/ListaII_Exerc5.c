/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 07/10/2021
	
	Lista de Exerc�cios II
	
	QUEST�O 05: O card�pio de uma lanchonete � o seguinte: 

	Especifica��o		C�digo	Pre�o
	Cachorro quente		100		3,50
	Bauru simples		101		4,50
	Bauru com ovo		102		5,20
	Hamburger			103		3,00
	Cheeseburger		104		4,00
	Refrigerante		105		2,50

	Escrever um algoritmo que obtenha o c�digo do item pedido, a quantidade e calcule o valor a ser 
	pago. 
	Considere que, a cada execu��o do algoritmo, somente ser� calculado o valor relacionado a um 
	item.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main()
{
	//declara��o de vari�veis
	int codigo, quantidade;
	float preco, custoTotal;
	
	//corpo do programa
	
	//exibindo o menu ao usu�rio
	printf ("Menu:\n\n");
	printf ("Especificacao	Codigo	Preco\n");
	printf ("Cachorro quente	100	3,50\n");
	printf ("Bauru simples	101	4,50\n");
	printf ("Bauru com ovo	102	5,20\n");
	printf ("Hamburger	103	3,00\n");
	printf ("Cheeseburger	104	4,00\n");
	printf ("Refrigerante	105	2,50\n");	
	
	//lendo a op��o desejada
	printf ("\nEntre com o codigo do produto desejado: ");
	scanf ("%d", &codigo);
	
	//lendo a quantidade desejada
	printf ("\nEntre com a quantidade: ");
	scanf ("%d", &quantidade);
	
	//obtendo o valor do produto a partir do c�digo escolhido
	switch (codigo)
	{
		case 100: preco = 3.50;
		          break;
			
		case 101: preco = 4.50;
		          break;
				  			
		case 102: preco = 5.20;
		          break;
				  			
		case 103: preco = 3.00;
		          break;
				  			
		case 104: preco = 4.00;
		          break;
				  			
		case 105: preco = 2.50;	
		          break;		
	}
	
	//calculando o valor da conta
	custoTotal = preco*quantidade;
	
	//exibindo o resultado
	printf ("\nValor total: R$ %.2f", custoTotal);
}
