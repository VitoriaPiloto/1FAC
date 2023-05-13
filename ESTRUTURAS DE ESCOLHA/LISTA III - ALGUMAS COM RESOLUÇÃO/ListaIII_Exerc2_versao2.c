/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 14/10/2021
	
	Lista de Exercícios III
	
	QUESTÃO 02: 
	Faça um programa que, dadas duas datas (cada qual com dia, mês e ano) fornecidas pelo usuário, 
	determine qual delas é a maior. 
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main()
{
	//declaração de variáveis
	int dia1, mes1, ano1, dia2, mes2, ano2;
	
	//lendo a primeira data
	printf ("Entre com a primeira data (DD MM AAAA): ");
	scanf ("%d %d %d", &dia1, &mes1, &ano1);
	
	//lendo a segunda data
	printf ("Entre com a segunda data (DD MM AAAA): ");
	scanf ("%d %d %d", &dia2, &mes2, &ano2);
	
	//comparando os anos das datas
	
	//verificando se a primeira é a maior data
	if ((ano1 > ano2) || 										//ano1 é maior
	    ((ano1 == ano2) && (mes1 > mes2)) || 					//mesmo ano, mês1 é maior
		((ano1 == ano2) && (mes1 == mes2) && (dia1 > dia2)))	//mesmo ano, mesmo mês, dia1 é maior
    {
        printf("\n a primeira data e a mais atual %d/%d/%d", dia1, mes1, ano1);
    }
    else
    {
    	//verificando se as datas são iguais
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
