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
    int num1, num2, i;
    //Início:
    printf("Digite o primeiro numero, para iniciar a contagem de impares: "); //Aqui o usuário irá inserir o número que deseja iniciar a exibição de ímpares
    scanf("%d", &num1);
    printf("Digite o segundo numero, ele definira ate onde ira a contagem: "); //Aqui o usuário irá inserir até onde irá a contagem.
    scanf("%d", &num2);
    for (i=0;i<num2 && num1<num2;i++) { //Criação de um loop para automatizar o processo de contagem e verificação
       if (num1%2==0) { //Verificando se o resto da divisão do número 1 por 2 é igual a 0, ou seja, se é par.
          num1++;
       }
        else {
            printf("%d\n",num1); //Aqui é caso seja ímpar.
            num1++;
        }
                
        }
    }