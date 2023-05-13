#include <stdio.h>
int main(){
	int num, pim, i;
	printf("Insira um numero:  ");
	scanf("%d", &num);

//Versão do While
i=1;
do{
	pim=i;
		if (pim%num==0){
			printf("PIM  ");
		}
		else{
			printf("%d  ", pim);
		}
		i++;
}
while(i<=1000);
}
