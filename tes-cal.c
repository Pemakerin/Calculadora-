#include <stdio.h> 
#include <stdlib.h>


int main () {
	int num1, num2, v;
	printf("\nBem-Vindo a Calculadora V1.0\n\n"); 	
	printf("Digite o Primeiro valor: \n"); 
	scanf("%i", &num1); 

	printf("Digite o Segundo valor: \n"); 
	scanf("%i", &num2); 
	
	printf("Escolha a operação:\n\n");
	printf("1) *\n");
	printf("2) -\n");
	printf("3) /\n");
	printf("4) +\n");
	printf("5) Sair\n");
	scanf("%i", &v);
	
	if (v==1)
	{
		int s;
		s = num1 * num2; 
		printf("A multiplicação é: %i\n", s);
	}else{
		if (v==2)
		{
			int sub; 
			sub = num1 - num2;
			printf("A subtração é: %i\n", sub);
		}else{
			if (v == 3)
			{		
				int div; 
				div = num1 / num2; 
				printf("A divisão é: %i\n", div);
			}else{
				if ( v == 4)
				{
					int som; 
					som = num1 + num2;
					printf("A soma é: %i\n", som); 
				
				}else{
					if ( v == 5)
					{
						printf("Fechando Programa\n"); 
					
					}
				}
			}
		}	
	}
}
