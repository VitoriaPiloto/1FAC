/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 17/12/2021
	
	Lista de Exerc�cios XI (Vetores)

	QUEST�O 07:
	Desenvolver uma fun��o que remova determinado elemento (todas as suas ocorr�ncias) 
	de um vetor de float. Ao final, retornar o n�mero de remo��es realizadas.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define CAP 10

//declara��o dos prot�tipos das fun��es
int remover (float vetor[], int *quantidade, float numero);

void exibir (float v[], int quantidade);
void preencherAleatorio (float v[], int quantidade);

//main
void main ()
{
	//declara��o de vari�veis
	float vetor[CAP];
	float numero;
	int contador, quant;
		
	//preenchendo o vetor com valores aleat�rios
	preencherAleatorio (vetor, CAP);
	quant = CAP;
	
	//exibindo o vetor
	exibir (vetor, quant);	
	
	//lendo o valor a ser removido
	printf ("Qual numero deseja remover? ");
	scanf ("%f", &numero);
	
	//chamando a fun��o de remo��o
	contador = remover (vetor, &quant, numero);
	
	//exibindo a quantidade de remo��es realizadas
	printf ("\n\nForam feitas %d remocoes do valor %.1f no vetor.\n", contador, numero);

	//exibindo o vetor ap�s a remo��o
	exibir (vetor, quant);
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

void preencherAleatorio (float v[], int quantidade)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	for (i=0;i<quantidade;i++)
	{
		v[i] = 1 + rand()%10;  //gerando n�meros aleat�rios no intervalo de 1 a 100
	}
}

int remover (float vetor[], int *quantidade, float numero)
{
	//declara��o de vari�veis
	int i, cont = 0;
	
	//percorrendo o vetor
	//for (i=0;i<(*quantidade);)
	i=0;
	while (i<(*quantidade))
	{
		//verificando se o elemento vetor[i] � igual ao 'numero'
		if (vetor[i] == numero)
		{
			//removendo o valor - deslocando o �ltimo elemento para a posi��o do elemento sendo removido
			vetor[i] = vetor[(*quantidade)-1];
			
			//contando o n�mero de remo��es
			cont++;
			
			//atualizando a quantidade de elementos no vetor
			(*quantidade)--;		
		}
		else
		{
			i++;
		}
	}
	
	//retornando a quantidade de remo��es realizadas
	return cont;
}
