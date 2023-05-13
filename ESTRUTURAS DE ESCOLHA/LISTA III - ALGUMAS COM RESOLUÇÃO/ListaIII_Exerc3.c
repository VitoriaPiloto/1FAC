/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 14/10/2021

	Lista de Exerc�cios III
	
	QUEST�O 03: 
	Construir um programa que permita ao usu�rio calcular a �rea de uma figura geom�trica. Para isto, o usu�rio 
	dever� escolher a figura desejada ([C]�rculo, [R]et�ngulo, [Q]uadrado ou [T]ri�ngulo) e fornecer as 
	informa��es necess�rias para que a �rea desta figura possa ser calculada.

	Notas:
		1.	F�rmulas para o c�lculo das �reas:
			a.	Ac�rculo = PI.raio2, onde PI = 3.14159;  
			b.	Aret�ngulo = base.altura;
			c.	Aquadrado = lado2; 
			d.	Atri�ngulo = (base.altura)/2.

		2.	Caso o usu�rio escolha uma op��o inv�lida, uma mensagem de erro deve ser exibida e a execu��o do 
		    programa terminada.
*/

//importa��o de bibliotecas
#include <stdio.h>

void main()
{
	//declara��o de vari�veis
    char escolha;
    float lados, base, altura, raio, area;
    
    //exibindo as op��es e lendo a escolha do usu�rio
    printf("Escolha a figura desejada para fazer a �rea (Utilize C para c�rculo, R para ret�ngulo, Q para quadrado ou T para tri�ngulo: ");
    scanf("%c", &escolha);
    
    switch (escolha)
	{
		//C�rculo
        case 'C': 
        case 'c': 
            printf("Insira o raio do c�rculo: ");
            scanf("%f", &raio);
            area=3.14159*raio*raio;
            printf("\nA �rea � igual a %.2f", area);
            break;
        
        //Ret�ngulo
        case 'R': 
        case 'r': 
            printf("\nInsira a base: ");
            scanf("%f", &base);
            printf("\nInsira a altura: ");
            scanf("%f", &altura);
            area=base*altura;
            printf("\nA �rea � igual a %.2f", area);
            break;
        
		//Quadrado
		case 'Q': 
		case 'q': 
            printf("\nInsira o valor dos lados: ");
            scanf("%f", &lados);
            area= lados*lados;
            printf("\nA �rea � igual a %.2f", area);
            break;
        
		//Tri�ngulo
		case 'T':
		case 't':
            printf("\nInsira o valor da base do do tri�ngulo: ");
            scanf("%f", &base);
            printf("\nInsira o valor da altura do do tri�ngulo: ");
            scanf("%f", &altura);
            area=(base*altura)/2;
            printf("\nA �rea � igual a %.2f", area);
            break;
        
        //Se n�o for nenhuma das op��es anteriores
		default: 
            printf("Op��o escolhida inv�lida, programa encerrado.");
            break;
    }
}

