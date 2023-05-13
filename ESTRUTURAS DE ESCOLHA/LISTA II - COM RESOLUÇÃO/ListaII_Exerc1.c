/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 07/10/2021
	
	Lista de Exerc�cios II
	
	QUEST�O 01: 
	O IMC (�ndice de Massa Corporal) � um crit�rio da Organiza��o Mundial de Sa�de para dar uma indica��o 
	sobre a condi��o de peso de uma pessoa adulta. A f�rmula �:

										IMC = peso / altura^2

	Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a sua condi��o de acordo com 
	a tabela abaixo:

									IMC em adultos			Condi��o
									IMC < 18,5				Abaixo do peso
									18,5 <= IMC < 25,0		Peso ideal
									25,0 <= IMC < 30,0		Sobrepeso
									30,0 <= IMC < 35,0		Obesidade grau I
									35,0 <= IMC < 40,0		Obesidade grau II
									IMC >= 40,0				Obesidade grau III
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
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
	
	//determinando a condi��o do usu�rio, a partir de seu IMC
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
