/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 17/12/2021
	
	Lista de Exerc�cios XI (Vetores)

	QUEST�O 08:
	Dados um vetor de reais (cujos elementos est�o ordenados crescentemente) e um n�mero 
	x, retornar a posi��o da primeira ocorr�ncia de x (caso encontre-se no vetor) ou a 
	posi��o na qual deveria estar (caso contr�rio).
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define CAP 10

//declara��o dos prot�tipos das fun��es
int buscar (float v[], int quantidade, float numero);

void exibir (float v[], int quantidade);

//main
void main ()
{
	//declara��o de vari�veis
	float vetor[CAP] = {1,2,2,4,7,7,7,8,9,12};
	float numero;
	int posicao, quant = CAP;
		
	//exibindo o vetor
	exibir (vetor, quant);	
	
	//lendo o valor a ser buscado
	printf ("Qual numero deseja buscar? ");
	scanf ("%f", &numero);
	
	//chamando a fun��o de busca
	posicao = buscar (vetor, quant, numero);

	//exibindo o resultado
	printf ("\n\nPosicao retornada: %d", posicao);
}

//implementa��o das fun��es

//fun��o exibir
void exibir (float v[], int quantidade)
{
	//declara��o de vari�veis
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
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	/*for (i=0;i<quantidade;i++)
	{
		//verificar se o elemento foi encontrado na posi��o 'i' do vetor
		if (v[i] == numero)
		{
			return i;
		}
		else
		{
			//verificando se foi encontrado um valor maior do que aquele sendo buscado
			if (v[i] > numero)		//ou seja, o 'numero' n�o encontra-se no vetor
			{
				return i;
			}
		}
	}*/
	
	for (i=0;i<quantidade;i++)
	{
		//verificar se o elemento foi encontrado na posi��o 'i' do vetor
		//ou se foi encontrado um valor maior do que 'numero'
		if (v[i] >= numero)
		{
			return i;
		}
	}
}
