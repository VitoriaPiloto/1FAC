/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exercícios V
	
	QUESTÃO 08:
	Fazer um programa que auxilie o orgão regulador no cálculo do total de recursos 
	arrecadados com a aplicação de multas de trânsito. 
	O programa deve ler as seguintes informações para cada motorista: 
 	- O número da carteira de motorista;
 	- Número de multas;
 	- Valor de cada uma das multas. 
	Deve ser exibido o valor da dívida de cada motorista e ao final da leitura o total de 
	recursos arrecadados (somatório de todas as multas). 
	O programa também deverá apresentar o número da carteira do motorista que obteve o 
	maior número de multas. 
*/

//importação de bibliotecas
#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int cnh, numMultas, i, maiorMultas = 0, motoristaMaisMultas;
	float valorMulta, divida, totalArrecadado = 0;
	
	do
	{
		//lendo os dados do motorista
		printf ("CNH: ");
		scanf ("%d", &cnh);
		
		if (cnh != 0)
		{
			printf ("Numero de multas: ");
			scanf ("%d", &numMultas);
			
			divida = 0;
			for (i=1;i<=numMultas;i++)
			{
				printf ("Valor da %da. multa: ", i);
				scanf ("%f", &valorMulta);
				
				//calculando a dívida deste motorista
				divida += valorMulta;
			}		
			
			//exibindo a dívida deste motorista
			printf ("Sua divida e' de R$ %.2f\n\n\n", divida);
			
			//calculando o total arrecadado pelo órgão com as multas
			totalArrecadado += divida;
			
			//verificando se é o motorista com maior número de multas
			if (numMultas > maiorMultas)
			{
				maiorMultas = numMultas;
				motoristaMaisMultas = cnh;
			}
		}
	}
	while (cnh != 0);
	
	//exibindo os resultados
	printf ("\nTotal arrecadado com multas: R$ %.2f", totalArrecadado);
	printf ("\nMotorista com maior numero de multas: cnh %d  -  %d multas.", motoristaMaisMultas, maiorMultas);
}
