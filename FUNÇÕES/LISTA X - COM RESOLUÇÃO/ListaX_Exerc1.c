/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 26/11/2021
	
	Lista de Exerc�cios X (Fun��es)
	
	QUEST�O 01:
	Desenvolver uma fun��o que, dado um n�mero inteiro n, exiba todos os n�meros 
	existentes no intervalo definido por a e b (a < b), exceto aqueles que forem 
	m�ltiplos de n.
	
		Exemplo:
				n = 3
				a = 10 e b = 20
				
				10 11 13 14 16 17 19 20
*/

//importa��o de bibliotecas
#include <stdio.h>

//fun��o sequencia
void sequencia (int n, int a, int b)
{
	//declara��o de vari�veis
    int i;
    
    //variando todos os valores do intervalo de 'a' a 'b'
    for (i = a; i <= b; i++)
    {
    	//verificando se o valor de 'i' n�o � m�ltiplo de 'n'
        if (i % n != 0)
        {
            printf ("%d ", i);
        }
    }
}

//main
void main ()
{  
	//declara��o de vari�veis
    int num, numInf, numSup;

	//leitura do valor
    printf ("Entre com um numero inteiro: ");
    scanf ("%d", &num);
    
    //leitura do intervalo
    printf ("Entre com um numero inferior: ");
    scanf ("%d", &numInf);
    printf ("Entre com um numero superior: ");
    scanf ("%d", &numSup);

	//chamando a fun��o
    sequencia (num, numInf, numSup);
}
