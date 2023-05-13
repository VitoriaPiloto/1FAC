/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 14/10/2021

	Lista de Exercícios III
	
	QUESTÃO 03: 
	Construir um programa que permita ao usuário calcular a área de uma figura geométrica. Para isto, o usuário 
	deverá escolher a figura desejada ([C]írculo, [R]etângulo, [Q]uadrado ou [T]riângulo) e fornecer as 
	informações necessárias para que a área desta figura possa ser calculada.

	Notas:
		1.	Fórmulas para o cálculo das áreas:
			a.	Acírculo = PI.raio2, onde PI = 3.14159;  
			b.	Aretângulo = base.altura;
			c.	Aquadrado = lado2; 
			d.	Atriângulo = (base.altura)/2.

		2.	Caso o usuário escolha uma opção inválida, uma mensagem de erro deve ser exibida e a execução do 
		    programa terminada.
*/

//importação de bibliotecas
#include <stdio.h>

void main()
{
	//declaração de variáveis
    char escolha;
    float lados, base, altura, raio, area;
    
    //exibindo as opções e lendo a escolha do usuário
    printf("Escolha a figura desejada para fazer a área (Utilize C para círculo, R para retângulo, Q para quadrado ou T para triângulo: ");
    scanf("%c", &escolha);
    
    switch (escolha)
	{
		//Círculo
        case 'C': 
        case 'c': 
            printf("Insira o raio do círculo: ");
            scanf("%f", &raio);
            area=3.14159*raio*raio;
            printf("\nA área é igual a %.2f", area);
            break;
        
        //Retângulo
        case 'R': 
        case 'r': 
            printf("\nInsira a base: ");
            scanf("%f", &base);
            printf("\nInsira a altura: ");
            scanf("%f", &altura);
            area=base*altura;
            printf("\nA área é igual a %.2f", area);
            break;
        
		//Quadrado
		case 'Q': 
		case 'q': 
            printf("\nInsira o valor dos lados: ");
            scanf("%f", &lados);
            area= lados*lados;
            printf("\nA área é igual a %.2f", area);
            break;
        
		//Triângulo
		case 'T':
		case 't':
            printf("\nInsira o valor da base do do triângulo: ");
            scanf("%f", &base);
            printf("\nInsira o valor da altura do do triângulo: ");
            scanf("%f", &altura);
            area=(base*altura)/2;
            printf("\nA área é igual a %.2f", area);
            break;
        
        //Se não for nenhuma das opções anteriores
		default: 
            printf("Opção escolhida inválida, programa encerrado.");
            break;
    }
}

