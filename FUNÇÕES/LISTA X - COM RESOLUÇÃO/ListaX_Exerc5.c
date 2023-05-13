/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 26/11/2021
	
	Lista de Exerc�cios X (Fun��es)

	QUEST�O 05:
	Fazer uma fun��o que exiba a tabuada de pot�ncias de um n�mero n, no intervalo de 
	1 a 9. Se o n�mero n�o estiver neste intervalo, o c�digo 0 deve ser retornado; 
	caso contr�rio, retorna-se 1.
	
	Para ilustrar, abaixo � apresentada como a tabuada de pot�ncias de 2 deveria 
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

//importa��o de bibliotecas
#include <stdio.h>

//fun��o exibeTabuadaPotencias
int exibeTabuadaPotencias (int n)
{
	//declara��o de vari�veis
	int potencia, expoente;
	
	//verificando se 'n' � inv�lido
	if ((n < 1) || (n > 9))
	{
		return 0;
	}
	else
	{
		//se chegou aqui, o 'n' � v�lido
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
	//declara��o de vari�veis
	int retorno, numero;
	
	//lendo o valor
	printf ("Entre com o numero para que a tabuada de potencias seja exibida: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	retorno = exibeTabuadaPotencias (numero);
	
	//testando o retorno
	if (retorno == 0)
	{
		printf ("\n\nNumero invalido! Deve estar no intervalo de 1 a 9");
	}
}
