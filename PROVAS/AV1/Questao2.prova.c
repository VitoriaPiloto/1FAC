#include <stdio.h>
void main ()
{
	//declaração de variáveis
	int n, i=1, alg1, alg2,alg3;
	
	//obtendo o valor de N
	printf ("Entre com um numero (de 100 a 999): ");
	scanf ("%d", &n);
	printf("%d: ", n);
	
	//validando o valor de N
	if ((n < 100) || (n > 999))
	{
		printf ("Valor invalido! Tente novamente inserindo no intervalo correto.");
	}
	else
	{
		for (i=1;i<=n;i++)
		{
			alg1 = n/100;
			alg2 = (n%100)/10;
			alg3 = (n%10);
		}
			if (alg1==1)
			{
				printf ("cem");
			}
			else
			{
				if (alg1==2)
				{
					printf("duzentos");
				}
				else
				{
					if (alg1==3)
					{
						printf("trezentos");
					}
					else
					{
						if (alg1==4)
						{
							printf("quatrocentos");
						}
						else
						{
							if (alg1==5)
							{
							printf("quinhentos");
							}
							else {
								if (alg1==6)
								{
								printf("seicentos");
								}
								else{
									if (alg1==7){
										printf("setecentos");
									}
									else{
										if (alg1==8){
											printf("oitocentos");
										}
										else{
											printf("novecentos");
										}
									}
								}
							}
						}
						
				}
			}
		}

	if (alg2==2){
		printf(" e vinte");
	}else
	{
		if (alg2==3)
		{
		printf(" e trinta");
		}
		else
		{
			if (alg2==4){
				printf(" e quarenta");
			}
			else
			{
				
				if(alg2==5)
				{
					printf(" e cinquenta");
				}else
				{
					if(alg2==6)
					{
						printf(" e sessenta");
					}else
					{
						if(alg2==7)
						{
							printf(" e setenta");
						}
						else
						{
							if(alg2==8)
							{
								printf(" e oitenta");
							}else
							{
								if (alg2==9)
								{
								printf(" e noventa");
								}
							else
							{
								if (alg2==0)
								{
								printf(" ");
								}
						//	}
							else{
								if(alg2==1)
								{
								printf(" e dez");
								}
							}
							}
							}
						}
				}
			}
		}
	}
}

	if (alg3==1){
		printf(" e um");
	}else
	{
		if (alg3==2){
		printf(" e dois");
		}else{
			if (alg3==3){
				printf(" e três");
			}
			else{
				if(alg3==4){
					printf(" e quatro");
				}else{
					if(alg3==5){
						printf(" e cinco");
					}else{
						if(alg3==6){
							printf(" e seis");
						}else
						{
							if(alg3==7)
							{
								printf(" e sete");
							}else
							{
								if(alg3==8)
								{
								printf(" e oito");
							}else
							{
								if (alg3==9){
								printf(" e nove");
							}
							else{
								if(alg3==0){
									printf(" ");
								}
							}
						}
					}
				}
			}
		}
	}		
}
}

}
}


