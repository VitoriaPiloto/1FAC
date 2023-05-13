/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 02/12/2021
	
	Lista de Exerc�cios X (Fun��es)

	QUEST�O 03:
	Fazer uma fun��o 'leituraDados' que permane�a lendo valores reais at� que o n�mero 
	0 seja digitado. Ao final, a fun��o deve determinar a quantidade de elementos 
	fornecidos (excluindo o 0) e o maior dentre eles.
*/

//importa��o de bibliotecas
#include <stdio.h>

//fun��o leituraDados
void LeituraDados (int *quantidade, float *maior)
{
	//declara��o de vari�veis
    float numero = 1;
    
    //inicializando os par�metros de sa�da
    *quantidade = 0;
    *maior = -99999;

    while (numero != 0)
    {
        printf ("Entre com um numero real: ");
        scanf ("%f", &numero);

		//verificando se o n�mero � v�lido; ou seja, n�o � o zero que representar� o valor de sa�da
        if (numero != 0)
        {
        	//incrementando a quantidade de valores lidos
            (*quantidade)++;
        
        	//verificando se o valor lido � o maior at� o momento
	        if (numero > *maior)
	        {
	            *maior = numero;
	        }
	    }
    }    
}

//main
void main ()
{
	//declara��o de vari�veis
    int quant;
    float maiorNum;
    
    //chamando a fun��o
    LeituraDados (&quant, &maiorNum);

	//exibindo os resultados
    printf ("A quantidade de numeros digitados foram de: %d ... O maior numero entre estes e: %.1f", quant, maiorNum);
}
