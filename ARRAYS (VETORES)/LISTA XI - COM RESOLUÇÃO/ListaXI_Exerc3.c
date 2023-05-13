/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 09/12/2021
	
	Lista de Exercícios XI (Vetores)

	QUESTÃO 03:
	Pede-se a implementação de uma função que, dado um vetor contendo números reais, 
	determine se o mesmo encontra-se ordenado de forma crescente.
	
	Exemplos:
	
				vetor1: 	0  3  4  5  6  6  7  8  9  9	
							
							Resposta: está ordenado crescentemente


				vetor2: 	0  3  4  5  6  6  8  7  9  9	
						                      i  j
							Resposta: não está ordenado crescentemente

						
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM1 10
#define TAM2 100

//função verificaOrdenacao
/*
	A função retornará 1 se o vetor estiver ordenado crescentemente ou 0, caso contrário.
*/
int verificaOrdenacao (float vetor[], int tamanho)
{
	//declaração de variáveis
	int i, j;
	
	//percorrendo o vetor
	for (i=0,j=1;j<tamanho;i++,j++)
	{
		//verificando se os dois elementos não estão ordenados
		if (vetor[i] > vetor[j])
		{
			return 0;
		}
		/*else    Erro: pois, assim, a função terminaria prematuramente.
		{
			return 1;
		}*/
	}
	
	//se a execução chegou neste ponto, podemos garantir que o vetor está ordenado crescentemente
	return 1;	
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
	float vetor1[TAM1] = {0,1,3,4,4,5,6,7,8,9}, 
	      vetor2[TAM2];
	int resposta;
	
	//preenchendo o vetor 2 com números aleatórios
	preencherAleatorio (vetor2, TAM2);
	
	//exibindo os elementos dos vetores
	exibir (vetor1, TAM1);
	exibir (vetor2, TAM2);

	//chamando a função para o vetor 1
	resposta = verificaOrdenacao (vetor1, TAM1);
	if (resposta == 1)
	{
		printf ("\nvetor 1 esta ordenado!\n");
	}
	else
	{
		printf ("\nvetor 1 nao esta ordenado!\n");
	}
	
	//chamando a função para o vetor 2
	resposta = verificaOrdenacao (vetor2, TAM2);
	if (resposta == 1)
	{
		printf ("\nvetor 2 esta ordenado!\n");
	}
	else
	{
		printf ("\nvetor 2 nao esta ordenado!\n");
	}
}
