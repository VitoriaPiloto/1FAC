/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 02/12/2021
	
	Lista de Exercícios X (Funções)

	QUESTÃO 03:
	Fazer uma função 'leituraDados' que permaneça lendo valores reais até que o número 
	0 seja digitado. Ao final, a função deve determinar a quantidade de elementos 
	fornecidos (excluindo o 0) e o maior dentre eles.
*/

//importação de bibliotecas
#include <stdio.h>

//função leituraDados
void LeituraDados (int *quantidade, float *maior)
{
	//declaração de variáveis
    float numero = 1;
    
    //inicializando os parâmetros de saída
    *quantidade = 0;
    *maior = -99999;

    while (numero != 0)
    {
        printf ("Entre com um numero real: ");
        scanf ("%f", &numero);

		//verificando se o número é válido; ou seja, não é o zero que representará o valor de saída
        if (numero != 0)
        {
        	//incrementando a quantidade de valores lidos
            (*quantidade)++;
        
        	//verificando se o valor lido é o maior até o momento
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
	//declaração de variáveis
    int quant;
    float maiorNum;
    
    //chamando a função
    LeituraDados (&quant, &maiorNum);

	//exibindo os resultados
    printf ("A quantidade de numeros digitados foram de: %d ... O maior numero entre estes e: %.1f", quant, maiorNum);
}
