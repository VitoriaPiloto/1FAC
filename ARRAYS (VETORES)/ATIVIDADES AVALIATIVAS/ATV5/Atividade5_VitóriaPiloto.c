/*
_.` `._.` `._.` `._.` `._.` `._.` `._.` `._.` `._.` `._.` `.

─▄▀─▄▀
──▀──▀
█▀▀▀▀▀█▄
█░░░░░█─█
▀▄▄▄▄▄▀▀

                            𝙵𝙰𝙲
                    𝙿𝚛𝚘𝚏𝚎𝚜𝚜𝚘𝚛: 𝙻𝚎𝚘𝚗𝚊𝚛𝚍𝚘 𝚅𝚒𝚊𝚗𝚗𝚊
                    𝙰𝚕𝚞𝚗𝚊: 𝚅𝚒𝚝𝚘𝚛𝚒𝚊 𝙿𝚒𝚕𝚘𝚝𝚘

_.` `._.` `._.` `._.` `._.` `._.` `._.` `._.` `._.` `._.` `.
*/ //Atividade 05

#include <stdio.h>
#define TAM 7

int main(){
int vetor[TAM], i, quantidadeIguais, quantidadeDistintos=0;
preencherAleatorio(vetor, TAM);
printf ("Elementos do vetor: ");
for (i=0;i<TAM;i++){
    printf ("%d ", vetor[i]);
}
quantidadeIguais=contValoresIguais(vetor,TAM);
quantidadeDistintos=TAM-quantidadeIguais;
printf("\n\nQuantidade de valores distintos: %d", quantidadeDistintos);
}


void preencherAleatorio (int vetorA[], int tamanho){
	int i;
	srand (time(NULL));
	for (i=0;i<tamanho;i++){
		vetorA[i] = 1 + rand()%10;
	}
}

int contValoresIguais(int vetorB[], int tamanho){
int i, j, contValoresIguais=0;
for (i=0; i<tamanho;i++) {
    for (j=i+1;j<tamanho;j++) {
        if (vetorB[i] == vetorB[j]) {
            contValoresIguais++;
        }
    }
}
return contValoresIguais;
}


