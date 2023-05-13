/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 05/11/2021 (aula extra)

	Lista de Exerc�cios V
	
	QUEST�O 08:
	Fazer um programa que auxilie o org�o regulador no c�lculo do total de recursos 
	arrecadados com a aplica��o de multas de tr�nsito. 
	O programa deve ler as seguintes informa��es para cada motorista: 
 	- O n�mero da carteira de motorista;
 	- N�mero de multas;
 	- Valor de cada uma das multas. 
	Deve ser exibido o valor da d�vida de cada motorista e ao final da leitura o total de 
	recursos arrecadados (somat�rio de todas as multas). 
	O programa tamb�m dever� apresentar o n�mero da carteira do motorista que obteve o 
	maior n�mero de multas. 
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
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
				
				//calculando a d�vida deste motorista
				divida += valorMulta;
			}		
			
			//exibindo a d�vida deste motorista
			printf ("Sua divida e' de R$ %.2f\n\n\n", divida);
			
			//calculando o total arrecadado pelo �rg�o com as multas
			totalArrecadado += divida;
			
			//verificando se � o motorista com maior n�mero de multas
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
