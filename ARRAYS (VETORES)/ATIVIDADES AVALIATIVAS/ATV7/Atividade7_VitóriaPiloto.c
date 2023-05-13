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
*/ //Atividade 07

#include <stdio.h>
#define TAM 9999

int main(){
    int numero, quantDiv, vetorD[TAM];
    printf("Insira um numero para calcular seus divisores: ");
    scanf("%d",&numero);
    calculaDivisores (numero, vetorD, &quantDiv);
    printf("\nOs divisores do numero %d sao: \n", numero);
    exibir(vetorD, quantDiv);
}

void calculaDivisores(int n, int vetDiv[], int *contDiv){
    int i, j;
    for (i=1, j=0;i<=n;i++){
    if (n % i == 0){
        vetDiv[j]=i;
        j++;
    }
}
*contDiv=j;
}

void exibir(int vet[], int tamanho){
    int i;
    for (i=0;i<tamanho;i++){
            printf("%d ", vet[i]);
    }
}
