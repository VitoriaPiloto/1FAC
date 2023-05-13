/*
	Fundamentos de Algoritmos de Computação - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exercícios IV
	
	QUESTÃO 08: Em uma empresa deseja-se fazer um levantamento sobre algumas informações 
	dos seus 250 funcionários. Cada funcionário deverá responder um questionário ao qual 
	informará os seguintes dados: matrícula, gênero, idade, salário e tempo (em anos) de 
	trabalho na empresa. A execução do programa deve exibir os seguintes itens:

	a)	Quantidade de funcionários que ingressaram na empresa com menos de 21 anos;
	b)	Quantidade de funcionários do gênero feminino;
	c)	Média salarial dos homens;
	d)	Matrícula dos funcionários mais antigo e mais novo.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define QUANT 250

void main ()
{
	//declaração de variáveis
	int i, matricula, idade, tempoServico, contMenor21 = 0, contF = 0, contM = 0,
	    maiorTempoServico = 0, menorTempoServico = 100, matriculaMaiorTempoServico, 
		matriculaMenorTempoServico;
	char genero;
	float salario, somaSalHomens = 0, mediaSalHomens;
	
	//leitura dos dados de todos os funcionários da empresa
	for (i=1;i<=QUANT;i++)
	{
		printf ("\nMatricula: ");
		scanf ("%d", &matricula);
		
		fflush (stdin);
		printf ("Genero: ");
		scanf ("%c", &genero);
		
		printf ("Idade: ");
		scanf ("%d", &idade);
		
		printf ("Salario: ");
		scanf ("%f", &salario);

		printf ("Tempo (em anos) de servico: ");
		scanf ("%d", &tempoServico);
		
		//Quantidade de funcionários que ingressaram na empresa com menos de 21 anos
		if (idade - tempoServico < 21) //calculando a idade do funcionário ao ingressar na empresa
		{
			contMenor21++;
		}
		
		//Quantidade de funcionários do gênero feminino
		if (toupper(genero) == 'F')
		{
			contF++;	//atualizando a quantidade de mulheres na empresa
		}
		else
		{
			//Média salarial dos homens
			somaSalHomens = somaSalHomens + salario;
			contM++;
			//mediaSalHomens = somaSalHomens/contM;  NÃO DEVE SER FEITA AQUI ESTA DIVISÃO!!!
		}
		
		//Determinando a matrícula do funcionário mais antigo
		if (tempoServico > maiorTempoServico)
		{
			maiorTempoServico = tempoServico;
			matriculaMaiorTempoServico = matricula;
		}
		
		//Determinando a matrícula do funcionário mais novo
		if (tempoServico < menorTempoServico)
		{
			menorTempoServico = tempoServico;
			matriculaMenorTempoServico = matricula;
		}
	}
	
	//Calculando a média salarial dos homens
	mediaSalHomens = somaSalHomens/contM;
	
	//exibindo os resultados
	printf ("\n\nQuantidade de funcionarios que ingressaram na empresa com menos de 21 anos: %d\n", contMenor21);
	printf ("Quantidade de funcionarios do genero feminino: %d\n", contF);
	printf ("Media salarial dos homens: R$ %.2f\n", mediaSalHomens);
	printf ("Matricula do funcionario mais antigo: %d\n", matriculaMaiorTempoServico);
	printf ("Matricula do funcionario mais novo: %d\n", matriculaMenorTempoServico);
}
