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
*/
#include <stdio.h>
int main(){
    //Declaração de variáveis:
    float numero, guarda_maior, media, soma;
    int i, positivos;
    positivos=0; guarda_maior=0; //Zerando as variáveis para usar
    //Início:
    for (i=0;i<50;){ //Definindo um loop para o usuário digitar o valor e simultaneamente ir calculando a média, definindo o maior número dentre os 25 primeiros e calculando a quantidade de positivos adiante.
        printf("Insira um número: ");
        scanf("%f",&numero);
        soma=soma+numero;
        media=soma/i;
        if(i<25 && numero>guarda_maior){ //Guardando o maior valor inteiro
            guarda_maior=numero;
        }else{
          if(i>=26 && numero>0){
            positivos=positivos+1; //Calculando a quantidade de positivos digitados
        }  
        }
        i++;
    }
    printf("A média dos elementos fornecidos é: %f\n", media);
    printf("O maior número dentre os primeiros 25 digitados é: %f\n", guarda_maior);
    printf("A quantidade de números positivos inseridos da 26ª posição até a 50ª é no total: %d", positivos);

}
    