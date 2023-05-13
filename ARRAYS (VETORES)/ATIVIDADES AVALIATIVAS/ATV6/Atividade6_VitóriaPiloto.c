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
*/ //Atividade 06

#include <stdio.h>
#define TAM 9

int main(){
int vetor[TAM], i, positionMaior, positionMenor;
preencherAleatorio(vetor, TAM);
printf ("Elementos do vetor: ");
for (i=0;i<TAM;i++){
    printf ("%d ", vetor[i]);
}
positionMaior=posicaoMaior(vetor, TAM);
positionMenor=posicaoMenor(vetor, TAM);
printf("\n\nA posicao do maior numero eh: %d", positionMaior);
printf("\n\nA posicao do menor numero eh: %d", positionMenor);
}


void preencherAleatorio (int vetorA[], int tamanho){
	int i;
	srand (time(NULL));
	for (i=0;i<tamanho;i++){
		vetorA[i] = 1 + rand()%10;
	}
}

int posicaoMaior(int vetorB[], int tamanho){
int i, contPositionMaior, maior=0;
for (i=0; i<tamanho;i++) {
    if (vetorB[i]>maior){
        maior=vetorB[i];
        contPositionMaior=i;
    }
}
return contPositionMaior;
}

int posicaoMenor(int vetorC[], int tamanho){
int i, contPositionMenor, menor=9999;
for (i=0; i<tamanho;i++) {
    if (vetorC[i]<menor){
        menor=vetorC[i];
        contPositionMenor=i;
    }
}
return contPositionMenor;
}
