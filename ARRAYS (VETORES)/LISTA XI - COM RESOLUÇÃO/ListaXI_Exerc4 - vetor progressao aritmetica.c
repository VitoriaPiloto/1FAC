/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 09/12/2021
	
	Lista de Exercícios XI (Vetores)

	QUESTÃO 04:
	Fazer uma função que armazene em um vetor os 50 primeiros termos da seguinte 
	sequência:

				S = 1, 2, 4, 7, 11, 16, ...

	Nota: observem que a diferença entre o 1º e 2º elementos é igual a 1, entre o 2º e 
	3º é igual a 2, entre o 3º e o 4º é igual a 3, e assim sucessivamente.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 50

//declaração dos protótipos das funções
void sequencia (int v[], int tamanho);
void exibir (int v[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int vetor[TAM];
		
	//chamando a função para preencher o vetor conforme o enunciado
	sequencia (vetor, TAM);
	
	//exibindo os elementos do vetor
	exibir (vetor, TAM);	
}

//implementação das funções

//função exibir
void exibir (int v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", v[i]);
	}
	printf ("\n\n");
}

void sequencia (int v[], int tamanho)
{
	//declaração de variáveis
	int i, razao = 1;
	
	//inicializando o primeiro elemento da sequência
	v[0] = 1;
	
	//calculando e armazenando os demais elementos da sequência
	for (i=1;i<tamanho;i++)
	{
		v[i] = v[i-1] + razao;
		razao++;
	}
}
