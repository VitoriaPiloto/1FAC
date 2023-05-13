/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 16/12/2021
	
	Lista de Exercícios XI (Vetores)

	QUESTÃO 05:
	Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os 
	em 2 vetores conforme forem pares ou ímpares.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 300

//declaração dos protótipos das funções
void decomporVetor (int vetor[], int quantidade, int pares[], int *quantP, int impares[], int *quantI);

void exibir (int v[], int tamanho);
void preencherAleatorio (int v[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int vet[TAM], vetP[TAM], vetI[TAM];
	int contP, contI;
	
	//preenchendo o vetor original com valores aleatórios
	preencherAleatorio (vet, TAM);
	
	//chamando a função para separar os valores pares e ímpares nos respectivos vetores
	decomporVetor (vet, TAM, vetP, &contP, vetI, &contI);
	
	//exibindo os vetores
	printf ("Vetor original:\n");
	exibir (vet, TAM);	//vetor original
	
	printf ("Vetor de pares:\n");
	exibir (vetP, contP);
	
	printf ("Vetor de impares:\n");
	exibir (vetI, contI);
	
}

//implementação das funções

//função exibir
void exibir (int v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//exibindo os elementos do vetor
	//printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", v[i]);
	}
	printf ("\n\n");
}

void preencherAleatorio (int v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	for (i=0;i<tamanho;i++)
	{
		v[i] = 1 + rand()%100;  //gerando números aleatórios no intervalo de 1 a 100
	}
}

void decomporVetor (int vetor[], int quantidade, int pares[], int *quantP, int impares[], int *quantI)
{
	//declaração de variáveis
	int i, j, k;
	
	//percorrendo o vetor original
	for (i=0, j=0, k=0;i<quantidade;i++)
	{
		//verificando se cada elemento do vetor é par ou ímpar
		if (vetor[i] % 2 == 0)
		{
			//armazenar o elemento vetor[i] no vetor de pares
			pares[j] = vetor[i];	//'j' está indexando o vetor de pares
			j++;
		}
		else
		{
			//armazenar o elemento vetor[i] no vetor de ímpares
			impares[k] = vetor[i];	//'k' está indexando o vetor de impares
			k++;
		}
	}
	
	//armazenando nos parâmetros 'quantP' e 'quantI' o total de pares e de ímpares
	*quantP = j;
	*quantI = k;
}
