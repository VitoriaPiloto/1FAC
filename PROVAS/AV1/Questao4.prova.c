#include <stdio.h>
int main(){
	int num, menorNumero=100000, quantDivisores, somaPares, contPares, mediaPares;
	while (num!=-1){
		printf ("Entre com um numero [Insira -1 para sair do programa]: ");
		scanf ("%d", &num);
		if (num==-1){
			mediaPares=somaPares/contPares;
			printf("\nO menor numero inserido foi: %d", menorNumero);
			printf("\nA quantidade de divisores de 100 informados foi: %d", quantDivisores);
			printf("\nA media dos pares foi igual a: %d", mediaPares);
		}
			else{
			if (num%2==0){
				contPares++;
				somaPares=somaPares+num;
			}
			
			if (num%100==0){
				quantDivisores++;
			
			}
			
			if (num<menorNumero){
				menorNumero=num;	
			}
	}
}
}
