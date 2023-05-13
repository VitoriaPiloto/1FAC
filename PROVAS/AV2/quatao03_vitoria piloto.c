#include <stdio.h>
#define TAM 100

void preencherAleatorio (int vetorA[], int tamanho){
	int i;
	srand (time(NULL));
	for (i=0;i<tamanho;i++){
		vetorA[i] = 1 + rand()%10;
	}
}


void calcula (int n, int *maior, int *quant, int vet[]){
	int i, maiorPar=0, quantPos=0;
	for (i=0;i<n;i++){
		if (i%2==0){
			if (vet[i]>maiorPar){
				maiorPar=vet[i];
			}
		} else {
			if (vet[i]>0){
				quantPos++;
			}
		}
	}
	*maior=maiorPar;
	*quant=quantPos;
}

int main(){
	int quant, maiorPar, quantImpares, vet[TAM];
	printf("Insira um valor para definir a quantidade de elementos do vetor [no max 100]: ");
	scanf("%d", &quant);
	preencherAleatorio (vet,quant);
	calcula (quant, &maiorPar, &quantImpares, vet);
}



