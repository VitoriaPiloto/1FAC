#include <stdio.h>

int main (){
	int n, a, b;
	printf("Insira a quantidade de elementos que deseja saber os multiplos comus: ");
	scanf("%d",&n);
	printf("Insira um numero: ");
	scanf("%d",&a);
	printf("Insira o segundo numero: ");
	scanf("%d",&b);
	exibeCalculaMultiplos(n,a,b);
}


void exibeCalculaMultiplos (int quant, int a, int b){
	int vet[a], i, produto;
	produto = a*b;
    for (i=0;i<=produto;i++)
    {
        if ((i % a == 0) && (i % b == 0))
        {
            vet[i]=i;
            printf("%d  ", vet[i]);
        }
    }


}


