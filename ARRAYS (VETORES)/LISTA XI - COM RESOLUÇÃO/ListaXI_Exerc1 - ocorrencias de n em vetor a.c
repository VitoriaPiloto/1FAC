/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 09/12/2021
	
	Lista de Exercícios XI (Vetores)

	QUESTÃO 01:
	Desenvolver uma função que determine o número de ocorrências de um número inteiro x 
	em um vetor A.
	
	Exemplo:
	
			vetor A: 1  9  4  3  1  5  6  7  1  5  4  8 
			x: 1
			
				retornará 3	
*/

//importação de bibliotecas
#include <stdio.h>

//função numOcorrencias
int numOcorrencias (int x, int A[], int tamanho)
{
	//declaração de variáveis
	int i, cont = 0;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento da posição 'i' é o valor sendo buscado
		if (A[i] == x)
		{
			cont++;
		}
	}
	
	//retornando a quantidade de ocorrências
	return cont;
}

//main
void main ()
{
	//declaração de variáveis
	int vetor1[10] = {5,1,2,6,4,7,1,2,6,5};	//declarando dois vetores e inicializando-os com valores quaisquer
	int vetor2[5] = {5,2,2,3,2};
	int valor = 2, quant;
	
	//chamando a função para o vetor1
	quant = numOcorrencias (valor, vetor1, 10);
	
	//exibindo o resultado
	printf ("\nO numero %d foi encontrado %d vezes no vetor 1", valor, quant);
	
	//chamando a função para o vetor2
	quant = numOcorrencias (valor, vetor2, 5);
	
	//exibindo o resultado
	printf ("\n\nO numero %d foi encontrado %d vezes no vetor 2", valor, quant);	
}
