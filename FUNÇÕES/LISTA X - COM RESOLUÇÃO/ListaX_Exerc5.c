/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 26/11/2021
	
	Lista de Exercícios X (Funções)

	QUESTÃO 05:
	Fazer uma função que exiba a tabuada de potências de um número n, no intervalo de 
	1 a 9. Se o número não estiver neste intervalo, o código 0 deve ser retornado; 
	caso contrário, retorna-se 1.
	
	Para ilustrar, abaixo é apresentada como a tabuada de potências de 2 deveria 
	ser exibida:

									2^0 = 1
									2^1 = 2
									2^2 = 4
									2^3 = 8
									2^4 = 16
									2^5 = 32
									2^6 = 64
									2^7 = 128
									2^8 = 256
									2^9 = 512


*/

//importação de bibliotecas
#include <stdio.h>

//função exibeTabuadaPotencias
int exibeTabuadaPotencias (int n)
{
	//declaração de variáveis
	int potencia, expoente;
	
	//verificando se 'n' é inválido
	if ((n < 1) || (n > 9))
	{
		return 0;
	}
	else
	{
		//se chegou aqui, o 'n' é válido
		expoente = 0;
		potencia = 1;
		
		while (expoente < 10)
		{
			printf ("%d^%d = %d\n", n, expoente, potencia);
			
			expoente++;
			potencia *= n;  //ou   potencia = potencia * n;
		}
		
		return 1;
	}
}

//main
void main ()
{
	//declaração de variáveis
	int retorno, numero;
	
	//lendo o valor
	printf ("Entre com o numero para que a tabuada de potencias seja exibida: ");
	scanf ("%d", &numero);
	
	//chamando a função
	retorno = exibeTabuadaPotencias (numero);
	
	//testando o retorno
	if (retorno == 0)
	{
		printf ("\n\nNumero invalido! Deve estar no intervalo de 1 a 9");
	}
}
