/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 17/12/2021
	
	Lista de Exercícios XI (Vetores)

	QUESTÃO 07:
	Desenvolver uma função que remova determinado elemento (todas as suas ocorrências) 
	de um vetor de float. Ao final, retornar o número de remoções realizadas.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define CAP 10

//declaração dos protótipos das funções
int remover (float vetor[], int *quantidade, float numero);

void exibir (float v[], int quantidade);
void preencherAleatorio (float v[], int quantidade);

//main
void main ()
{
	//declaração de variáveis
	float vetor[CAP];
	float numero;
	int contador, quant;
		
	//preenchendo o vetor com valores aleatórios
	preencherAleatorio (vetor, CAP);
	quant = CAP;
	
	//exibindo o vetor
	exibir (vetor, quant);	
	
	//lendo o valor a ser removido
	printf ("Qual numero deseja remover? ");
	scanf ("%f", &numero);
	
	//chamando a função de remoção
	contador = remover (vetor, &quant, numero);
	
	//exibindo a quantidade de remoções realizadas
	printf ("\n\nForam feitas %d remocoes do valor %.1f no vetor.\n", contador, numero);

	//exibindo o vetor após a remoção
	exibir (vetor, quant);
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

void preencherAleatorio (float v[], int quantidade)
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	for (i=0;i<quantidade;i++)
	{
		v[i] = 1 + rand()%10;  //gerando números aleatórios no intervalo de 1 a 100
	}
}

int remover (float vetor[], int *quantidade, float numero)
{
	//declaração de variáveis
	int i, pos, cont = 0;
	
	//percorrendo o vetor
	//for (i=0;i<(*quantidade);)
	i=0;
	while (i<(*quantidade))
	{
		//verificando se o elemento vetor[i] é igual ao 'numero'
		if (vetor[i] == numero)
		{
			//removendo o valor - deslocando os elementos à direta de numero uma posição para a esquerda
			for (pos=i+1;pos<*quantidade;pos++)
			{
				vetor[pos-1] = vetor[pos];
			}
			
			//contando o número de remoções
			cont++;
			
			//atualizando a quantidade de elementos no vetor
			(*quantidade)--;		
		}
		else
		{
			i++;
		}
	}
	
	//retornando a quantidade de remoções realizadas
	return cont;
}
