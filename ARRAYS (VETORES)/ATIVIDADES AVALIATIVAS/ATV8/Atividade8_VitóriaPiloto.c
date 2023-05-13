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
*/ //Atividade 08

#include <stdio.h>
#define QUANT_A 10
#define QUANT_B 15

void somaVetor (int vet[], int quantidade, int *soma){
    int i, sum=0;
    float med;
    for (i=0;i<quantidade;i++){
        sum=sum+vet[i];
    }
    *soma=sum;
}

void calculaMedia (int soma, int quantidade, float *medA){
    *medA=((float)soma/quantidade);
}

void exibeOcorrenciasNumerosVetor_A (int vet[], int numero, int quantidade, int *vetGuardaOcorrencias[]){
    int i,j;
    for(i=0, j=0;i<quantidade;i++){
        if (vet[i]<=numero){
            vetGuardaOcorrencias[j]=vet[i];
            printf("%d  ", vetGuardaOcorrencias[j]);
            j++;
        }
    }
}
void exibeOcorrenciasMedia_A(float media, int vet[], int quantidade, int *vetGuardador){
    int i,j;
    for(i=0, j=0;i<quantidade;i++){
        if (vet[i]<=media){
            vetGuardador[j]=vet[i];
            printf("%d  ", vetGuardador[j]);
            j++;
        }
    }
}
int main(){
    int num, vetA[QUANT_A], vetB[QUANT_B], somaA, vetorOcorrencias[QUANT_A], vetorOcorrenciasMediaEmB[QUANT_B], i=0;
    float mediaA;
    while (i<QUANT_A){
        printf("[%d/10] \nInsira um valor para o primeiro vetor: ", i);
        scanf("%d", &vetA[i]);
        i++;
        somaVetor(vetA, QUANT_A, &somaA);
    }
    calculaMedia(somaA, QUANT_A, &mediaA);
    printf ("\nA media dos elementos do primeiro vetor eh: %.1f\n", mediaA);
    printf("\nInsira um numero para visualizar suas ocorrencias iguais ou inferiores no primeiro vetor: ");
    scanf("%d", &num);
    printf("\nAs ocorrencias de numeros menores ou iguais a %d no primeiro vetor foram: ",num);
    exibeOcorrenciasNumerosVetor_A(vetA, num, QUANT_A, &vetorOcorrencias);
    i=0;
    printf("\n");
    while (i<QUANT_B){
        printf("\n[%d/15] \nInsira um valor para o segundo vetor: ", i);
        scanf("%d", &vetB[i]);
        i++;
    }
    printf("\nAs ocorrencias de numeros menores ou iguais a media do primeiro vetor presentes no segundo vetor sao: ");
    exibeOcorrenciasMedia_A(mediaA, vetB, QUANT_B, &vetorOcorrenciasMediaEmB);
}
