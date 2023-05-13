/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 16/12/2021
	
	Lista de Exercícios XI (Vetores)

	QUESTÃO 06:
	Faça uma função que, dado um vetor de reais, altere todas as ocorrências do número 
	A pelo número B.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 100

//declaração dos protótipos das funções
int alterar (float vetor[], int tamanho, float A, float B);

void exibir (float v[], int tamanho);
void preencherAleatorio (float v[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	float vetor[TAM];
	float num1, num2;
	int contador;
		
	//preenchendo o vetor com valores aleatórios
	preencherAleatorio (vetor, TAM);
	
	//exibindo o vetor
	exibir (vetor, TAM);	
	
	//lendo os valores a serem trocados
	printf ("Qual numero sera trocado? ");
	scanf ("%f", &num1);
	
	printf ("Por qual valor sera alterado? ");
	scanf ("%f", &num2);
	
	//chamando a função de alteração
	contador = alterar (vetor, TAM, num1, num2);	
	
	//testando o retorno
	if (contador == 0)
	{
		printf ("\n\nNenhuma alteracao foi realizada! O valor %.1f não esta no vetor.", num1);
	}
	else
	{
		printf ("\n\nAlteracao realizada!\n");
		
		//exibindo o vetor após a alteração
		exibir (vetor, TAM);
	}
}

//implementação das funções

//função exibir
void exibir (float v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%.1f ", v[i]);
	}
	printf ("\n\n");
}

void preencherAleatorio (float v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	for (i=0;i<tamanho;i++)
	{
		v[i] = 1 + rand()%100;  //gerando números aleatórios no intervalo de 1 a 100
	}
}

int alterar (float vetor[], int tamanho, float A, float B)
{
	//declaração de variáveis
	int i, cont = 0;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento da posição 'i' é o número 'A'
		if (vetor[i] == A)
		{
			vetor[i] = B;	//procedendo com a alteração de 'A' por 'B'
			cont++;			//contando o números de alterações
		}
	}
	
	//retornando a quantidade de alterações realizadas
	return cont;
}
