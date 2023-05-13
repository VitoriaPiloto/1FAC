
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
*/ //Atividade 03
#include <stdio.h>
int main (){
// Declaaração de variáveis
int idade, contPessoas=0, contMaiores=0, contIdosos=0;
float peso, altura, mediaIdosos=0, somaIdosos=0, maiorAltura=0;
// Início
while (idade>0){
    printf("Insira sua idade [Aperte -1 para sair do programa]: ");
    scanf("%d", &idade);
    if (idade == -1){
        break;
    }
    else{
        printf("Insira seu peso: ");
        scanf("%f", &peso);
        printf("Insira sua altura: ");
        scanf("%f", &altura);
        contPessoas++;
    }

    if (peso >= 80 && maiorAltura > altura){
        maiorAltura=altura;
    }
    if (idade >= 18){
        contMaiores++;
    }

    if (idade > 65){
            contIdosos++;
            somaIdosos=somaIdosos+altura;
            mediaIdosos=(somaIdosos/contIdosos);
    }


}

printf("A quantidade de pessoas que forneceram os dados no programa foram: %d\n", contPessoas);
printf("A quantidade de pessoas maiores de idade (+18): %d\n", contMaiores);
printf("A media de altura das pessoas com mais de 65 anos: %.2f\n", mediaIdosos);
printf("A maior altura das pessoas com 80 kg ou mais: %.2f", maiorAltura);
}

