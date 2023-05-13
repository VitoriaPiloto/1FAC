/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 26/11/2021
	
	Lista de Exercícios X (Funções)
	
	QUESTÃO 01:
	Desenvolver uma função que, dado um número inteiro n, exiba todos os números 
	existentes no intervalo definido por a e b (a < b), exceto aqueles que forem 
	múltiplos de n.
	
		Exemplo:
				n = 3
				a = 10 e b = 20
				
				10 11 13 14 16 17 19 20
*/

//importação de bibliotecas
#include <stdio.h>

//função sequencia
void sequencia (int n, int a, int b)
{
	//declaração de variáveis
    int i;
    
    //variando todos os valores do intervalo de 'a' a 'b'
    for (i = a; i <= b; i++)
    {
    	//verificando se o valor de 'i' não é múltiplo de 'n'
        if (i % n != 0)
        {
            printf ("%d ", i);
        }
    }
}

//main
void main ()
{  
	//declaração de variáveis
    int num, numInf, numSup;

	//leitura do valor
    printf ("Entre com um numero inteiro: ");
    scanf ("%d", &num);
    
    //leitura do intervalo
    printf ("Entre com um numero inferior: ");
    scanf ("%d", &numInf);
    printf ("Entre com um numero superior: ");
    scanf ("%d", &numSup);

	//chamando a função
    sequencia (num, numInf, numSup);
}
