/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 07/10/2021
	
	Lista de Exercícios II
	
	QUESTÃO 02: Escrever um algoritmo que obtenha o peso de uma pessoa na Terra e o número de um 
	planeta. Ao final, com auxílio da tabela abaixo, calcular o peso desta pessoa no planeta 
	escolhido.

					Número	Planeta		Gravidade Relativa g
					1		Mercúrio	0,37
					2		Vênus		0,88
					3		Marte		0,38
					4		Júpiter		2,64
					5		Saturno		1,15
					6		Urano		1,17

	Para calcular o peso no planeta escolhido, utilize a seguinte fórmula:

	pesoPlaneta = (pesoTerra/10) * gravidadePlaneta
	
	versão 2: com uso da estrutura switch
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	float pesoTerra, gravidadePlaneta, pesoPlaneta;
	int numPlaneta;
	
	//corpo do programa
	
	//lendo o peso da pessoa na Terra
	printf ("Entre com o seu peso na Terra: ");
	scanf ("%f", &pesoTerra);
	
	//exibindo um menu com os números dos planetas
	printf ("\n\nNumero\tPlaneta\n");
	printf ("1\tMercurio\n");
	printf ("2\tVenus\n");
	printf ("3\tMarte\n");
	printf ("4\tJupiter\n");
	printf ("5\tSaturno\n");
	printf ("6\tUrano\n");
	
	//lendo o planeta desejado
	printf ("\nEntre com o planeta desejado [1..6]: ");
	scanf ("%d", &numPlaneta);		
	
	//determinando a gravidade do planeta escolhido
	switch (numPlaneta)
	{
		case 1: gravidadePlaneta = 0.37;
		        break;
		
		case 2: gravidadePlaneta = 0.88;
		        break;
		
		case 3: gravidadePlaneta = 0.38;
		        break;
		
		case 4: gravidadePlaneta = 2.64;
		        break;
		
		case 5: gravidadePlaneta = 1.15;
		        break;
		
		case 6: gravidadePlaneta = 1.17;
		        break;
	}
	
	//calculando o valor do pesoa da pessoa no planeta escolhido
	pesoPlaneta = (pesoTerra/10) * gravidadePlaneta;
	
	//exibindo o valor do peso no planeta escolhido
	printf ("\nPeso no planeta %d: %.1f", numPlaneta, pesoPlaneta);
}
