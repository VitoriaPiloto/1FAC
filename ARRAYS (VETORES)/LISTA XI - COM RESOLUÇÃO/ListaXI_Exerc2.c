/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 09/12/2021
	
	Lista de Exercícios XI (Vetores)

	QUESTÃO 02:
	Implementar uma função que, dado um vetor de reais, troque o 1º e o 2º elementos, em 
	seguida o 3º e o 4º elementos e assim sucessivamente, até se chegar ao final do vetor.
	
	Exemplo 1:
	
				Inicialmente:     
					vetor: 5 4 6 8 1 2 4 7 8 5
						                       i j
						   	
				Ao final:
					vetor: 4 5 8 6 2 1 7 4 5 8


	Exemplo 2:
	
				Inicialmente:     
					vetor: 4 6 8 1 2 4 7 8 5
					       0 1 2 3 4 5 6 7 8
					                       i j
					       
				Ao final:
					vetor: 6 4 1 8 4 2 8 7 5
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 10

//função trocarElementos
void trocarElementos (float vetor[], int tamanho)
{
	//declaração de variáveis
	int i, j;
	float aux;
	
	//procedendo com a troca dois a dois
	for (i=0,j=1;j<tamanho;i=i+2,j=j+2)
	{
		//trocando os elementos vetor[i] e vetor[j]
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}
}

//função preencherAleatorio
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

//main
void main ()
{
	//declaração de variáveis
	float vetor1[TAM];
	
	//preenchendo o vetor com números aleatórios
	preencherAleatorio (vetor1, TAM);
	
	//exibindo os elementos do vetor
	exibir (vetor1, TAM);

	//chamando a função para a troca dos elementos
	trocarElementos (vetor1, TAM);
	
	//exibindo os elementos do vetor após a troca
	exibir (vetor1, TAM);
}
