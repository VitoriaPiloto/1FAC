/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 14/10/2021
	
	Lista de Exerc�cios III
	
	QUEST�O 02: 
	Fa�a um programa que, dadas duas datas (cada qual com dia, m�s e ano) fornecidas pelo usu�rio, 
	determine qual delas � a maior. 
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main()
{
	//declara��o de vari�veis
	int dia1, mes1, ano1, dia2, mes2, ano2;
	
	//lendo a primeira data
	printf ("Entre com a primeira data (DD MM AAAA): ");
	scanf ("%d %d %d", &dia1, &mes1, &ano1);
	
	//lendo a segunda data
	printf ("Entre com a segunda data (DD MM AAAA): ");
	scanf ("%d %d %d", &dia2, &mes2, &ano2);
	
	//comparando os anos das datas
	
	//verificando se a primeira � a maior data
	if ((ano1 > ano2) || 										//ano1 � maior
	    ((ano1 == ano2) && (mes1 > mes2)) || 					//mesmo ano, m�s1 � maior
		((ano1 == ano2) && (mes1 == mes2) && (dia1 > dia2)))	//mesmo ano, mesmo m�s, dia1 � maior
    {
        printf("\n a primeira data e a mais atual %d/%d/%d", dia1, mes1, ano1);
    }
    else
    {
    	//verificando se as datas s�o iguais
        if ((ano1 == ano2) && (mes1 == mes2) && (dia1 == dia2))
        {
            printf("\n As datas digitadas sao iguais");
        }
        else
        {
            printf("\n a Segunda data digitada e a mais atual %d/%d/%d", dia2, mes2, ano2);
        }
    }
}
