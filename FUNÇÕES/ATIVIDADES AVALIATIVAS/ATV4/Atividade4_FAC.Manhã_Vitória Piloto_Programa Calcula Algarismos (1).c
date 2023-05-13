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
*/ //Atividade 04

#include <stdio.h>

int main(){
    int numero1, numero2, algarismos1=0, algarismos2=0, diferenca=0;
    printf("Insira o primeiro numero inteiro:   ");
    scanf("%d", &numero1);
    printf("\nInsira o segundo numero inteiro:  ");
    scanf("%d", &numero2);
    algarismos1 = calculaAlgarismos(numero1);
    algarismos2 = calculaAlgarismos(numero2);
    printf("\n\nA quantidade de algarismo do numero %d eh %d", numero1, algarismos1);
    printf("\n\nA quantidade de algarismo do numero %d eh %d", numero2, algarismos2);
    if (algarismos1>algarismos2){
        diferenca=algarismos1-algarismos2;
    }else{
        diferenca=algarismos2-algarismos1;
    }
    printf("\n\nA diferenca entre a quantidade de algarismos eh: %d", diferenca);
}

int calculaAlgarismos(int numero) {
    int cont=0;
    while (numero != 0){
        numero = numero / 10;
        cont++;
    }

return cont;
}
