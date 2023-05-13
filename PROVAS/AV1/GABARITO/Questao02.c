/*****************************************************************************************************************

	FAETERJ-Rio
	FAC - 2021/2 - Turmas A e B
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - aplicada em 11/11/2021
	
	Questão 02 [2,5 pontos]:
	Fazer um programa em C que leia um número inteiro no intervalo de 100 a 999 e o 
	exiba por extenso.

	Exemplo:

		123		cento e vinte e três
		450		quatrocentos e cinquenta
		265		duzentos e sessenta e cinco	

	Nota: caso o valor fornecido não esteja nesta faixa, uma mensagem de erro deve 
	ser apresentada e a execução do programa encerrada.

*****************************************************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int numero, centenas, dezenas, unidades, resto, controle = 0;
	
	//lendo o valor de entrada
	printf ("Entre com um numero (no intervalo de 100 a 999): ");
	scanf ("%d", &numero);
	
	//verificando se o número está fora do intervalo definido
	if ((numero < 100) || (numero > 999))
	{
		printf ("\n\nValor invalido, pois deveria estar no intervalo de 100 a 999. Programa encerrado!");
	}
	else
	{
		//decompor o número em centenas, dezenas e unidades
		centenas = numero / 100;
		resto = numero % 100;
		dezenas = resto / 10;
		unidades = resto % 10;
		
		//escrevendo o número por extenso
		
		//iniciando pelas centenas
		switch (centenas)
		{
			case 1: if ((dezenas == 0) && (unidades == 0))
					//ou    if (numero == 100)
					{
						printf ("cem");
					}
					else
					{
						printf ("cento");
					}
					break;
					
			case 2: printf ("duzentos");
			        break;
			case 3: printf ("trezentos");
			        break;
			case 4: printf ("quatrocentos");
			        break;
			case 5: printf ("quinhentos");
			        break;
			case 6: printf ("seiscentos");
			        break;
			case 7: printf ("setecentos");
			        break;
			case 8: printf ("oitocentos");
			        break;
			case 9: printf ("novecentos");
			        break;
		}
		
		//seguindo para as dezenas
		switch (dezenas)
		{
			case 1: controle = 1;
			        switch (unidades)
			        {
			        	case 0: printf (" e dez");
			        	        break;
			        	case 1: printf (" e onze");
			        	        break;
			        	case 2: printf (" e doze");
			        	        break;
			        	case 3: printf (" e treze");
			        	        break;
			        	case 4: printf (" e quatorze");
			        	        break;
			        	case 5: printf (" e quinze");
			        	        break;
			        	case 6: printf (" e dezesseis");
			        	        break;
			        	case 7: printf (" e dezessete");
			        	        break;
			        	case 8: printf (" e dezoito");
			        	        break;
			        	case 9: printf (" e dezenove");
			        	        break;			        	        
					}
					break;
			
			case 2: printf (" e vinte");
			        break;
			case 3: printf (" e trinta");
			        break;			        
			case 4: printf (" e quarenta");
			        break;
			case 5: printf (" e cinquenta");
			        break;			        
			case 6: printf (" e sessenta");
			        break;			        
			case 7: printf (" e setenta");
			        break;		        
			case 8: printf (" e oitenta");
			        break;			        
			case 9: printf (" e noventa");
			        break;			        
		}
		
		//seguindo para as unidades
		if (controle == 0)
		{
			switch (unidades)
			{
				case 1: printf (" e um");
				        break;
				case 2: printf (" e dois");
				        break;
				case 3: printf (" e tres");
				        break;
				case 4: printf (" e quatro");
				        break;
				case 5: printf (" e cinco");
				        break;
				case 6: printf (" e seis");
				        break;
				case 7: printf (" e sete");
				        break;
				case 8: printf (" e oito");
				        break;
				case 9: printf (" e nove");
				        break;
			}
		}
	}
}
