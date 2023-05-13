/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 17/12/2021
	
	Lista de Exercícios XI (Vetores)

	QUESTÃO 08:
	Dados um vetor de reais (cujos elementos estão ordenados crescentemente) e um número 
	x, retornar a posição da primeira ocorrência de x (caso encontre-se no vetor) ou a 
	posição na qual deveria estar (caso contrário).
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define CAP 10

//declaração dos protótipos das funções
int buscar (float v[], int quantidade, float numero);

void exibir (float v[], int quantidade);

//main
void main ()
{
	//declaração de variáveis
	float vetor[CAP] = {1,2,2,4,7,7,7,8,9,12};
	float numero;
	int posicao, quant = CAP;
		
	//exibindo o vetor
	exibir (vetor, quant);	
	
	//lendo o valor a ser buscado
	printf ("Qual numero deseja buscar? ");
	scanf ("%f", &numero);
	
	//chamando a função de busca
	posicao = buscar (vetor, quant, numero);

	//exibindo o resultado
	printf ("\n\nPosicao retornada: %d", posicao);
}

//implementação das funções

//função exibir
void exibir (float v[], int quantidade)
{
	//declaração de variáveis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\nElementos do vetor: ");
	for (i=0;i<quantidade;i++)
	{
		printf ("%.1f ", v[i]);
	}
	printf ("\n\n");
}

int buscar (float v[], int quantidade, float numero)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	/*for (i=0;i<quantidade;i++)
	{
		//verificar se o elemento foi encontrado na posição 'i' do vetor
		if (v[i] == numero)
		{
			return i;
		}
		else
		{
			//verificando se foi encontrado um valor maior do que aquele sendo buscado
			if (v[i] > numero)		//ou seja, o 'numero' não encontra-se no vetor
			{
				return i;
			}
		}
	}*/
	
	for (i=0;i<quantidade;i++)
	{
		//verificar se o elemento foi encontrado na posição 'i' do vetor
		//ou se foi encontrado um valor maior do que 'numero'
		if (v[i] >= numero)
		{
			return i;
		}
	}
}
