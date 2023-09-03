#include <stdio.h>
#include <stdlib.h>

void main() {
	int x=0;
	float conta=0, conta2=0, conta3=0, ctotal=0, ctotal2=0, ctotal3=0, cmedia2=0, cmedia3=0, cmedia=0;
	
	while(x<5){
		
		printf("Qual o valor da sua conta?");
		scanf("%f", &conta);
		ctotal += conta;
		fflush(stdin);
		
		printf("Qual o valor da sua conta de agua?");
		scanf("%f", &conta2);
		ctotal2 += conta2;
		fflush(stdin);
		
		printf("Qual o valor da sua conta de telefone?");
		scanf("%f", &conta3);
		ctotal3 += conta3;
		fflush(stdin);
		
		x++;
	}
	
	cmedia = (ctotal + conta)/5; 
	cmedia2 = (ctotal2 + conta2)/5; 
	cmedia3 = (ctotal3 + conta3)/5; 
	
	printf("valor a pagar e %.2f", ctotal);
	printf("\nvalor a medio e %.2f", cmedia);
	printf("\nvalor a pagar e %.2f", ctotal2);
	printf("\nvalor a medio e %.2f", cmedia2);
	printf("\nvalor a pagar e %.2f", ctotal3);
	printf("\nvalor a medio e %.2f", cmedia3);
	getchar();
}

