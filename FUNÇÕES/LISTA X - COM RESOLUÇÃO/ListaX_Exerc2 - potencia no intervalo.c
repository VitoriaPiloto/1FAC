/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 09/12/2021
	
	Lista de Exercícios X (Funções)

	QUESTÃO 02:
	Dados dois números inteiros A e B, fazer uma função que determine o número de 
	potências de 2 existentes no intervalo definido pelos dois valores, assim como a 
	maior delas.
	
	Exemplos:
	
		A: 10
		B: 100	
		
		Potências de 2: 16 32 64
					retornar: 3 (número de potências no intervalo) e 64 (maior potência 
					no intervalo).
*/

//importação de bibliotecas
#include <stdio.h>

//função potencias2
void potencias2 (int A, int B, int *numPotencias, int *maiorPotencia)
{
	//declaração de variáveis
	int pot = 1, cont = 0;
	
	//calculando todas as potências menores ou iguais a 'B'
	while (pot <= B)
	{
		//porém, só contando aquelas que forem superiores ou iguais a 'A'
		if (pot >= A)
		{
			cont++;
			
			//armazenando a potência do intervalo no parâmetro 'maiorPotencia'
			*maiorPotencia = pot;
		}
		
		//atualizando para a próxima potência de 2
		pot *= 2;  //pot = pot * 2;
	}
	
	//atribuindo a quantidade de potências do intervalo ao parâmetro 'numPotencias'
	*numPotencias = cont;	
}

void main ()
{
	//declaração de varáveis
	int numero1, numero2, quant, maior;
	
	//lendo os valores que representam o intervalo
	printf ("Entre com os valores que representam o intervalo: ");
	scanf ("%d %d", &numero1, &numero2);
	
	//chamando a função
	potencias2 (numero1, numero2, &quant, &maior);
	
	//exibindo os resultados
	printf ("\n\nNumero de potencias: %d\n", quant);
	printf ("Maior potencia do intervalo: %d", maior);
}
