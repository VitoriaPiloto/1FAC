/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 07/10/2021
	
	Lista de Exercícios II
	
	QUESTÃO 01: 
	O IMC (Índice de Massa Corporal) é um critério da Organização Mundial de Saúde para dar uma indicação 
	sobre a condição de peso de uma pessoa adulta. A fórmula é:

										IMC = peso / altura^2

	Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a sua condição de acordo com 
	a tabela abaixo:

									IMC em adultos			Condição
									IMC < 18,5				Abaixo do peso
									18,5 <= IMC < 25,0		Peso ideal
									25,0 <= IMC < 30,0		Sobrepeso
									30,0 <= IMC < 35,0		Obesidade grau I
									35,0 <= IMC < 40,0		Obesidade grau II
									IMC >= 40,0				Obesidade grau III
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	float altura, 		//altura da pessoa
	      peso, 		//peso da pessoa
		  imc;			//imc da pessoa
	
	//corpo do programa
	
	//lendo a altura
	printf ("Entre com a altura: ");
	scanf ("%f", &altura);
	
	//lendo o peso
	printf ("Entre com o peso: ");
	scanf ("%f", &peso);
	
	//calculando o IMC
	imc = peso / (altura*altura);    //pow (altura, 2);      math.h
	
	//exibindo o IMC
	printf ("\nIMC = %.2f\n", imc);
	
	//determinando a condição do usuário, a partir de seu IMC
	if (imc < 18.5)
	{
		printf ("Abaixo do peso");	
	}
	else
	{
		//if ((imc >= 18.5) && (imc < 25))
		if (imc < 25)
		{
			printf ("Peso ideal");
		}
		else
		{
			if (imc < 30)
			{
				printf ("Sobrepeso");
			}
			else
			{
				if (imc < 35)
				{
					printf ("Obesidade grau I");
				}
				else
				{
					if (imc < 40) 
					{
						printf ("Obesidade grau II");
					}
					else
					{
						//if (imc >= 40)
						//{
							printf ("Obesidade grau III");
						//}
					}
				}
			}
		}
	}	
}
