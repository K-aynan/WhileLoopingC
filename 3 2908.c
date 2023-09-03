#include <stdio.h>
#include <stdlib.h>

void main() {
	int x=0;
	float conta=0, ctotal=0, acres=0;
	
	while(x<3){
		
		printf("Qual o valor da sua conta?");
		scanf("%f", &conta);
		ctotal += conta;
		x++;
	}
	
	acres += (ctotal * 0.15);
	printf("valor total e: %.2f", ctotal);
	printf("\nvalor com acrescimo e: %.2f", acres);
	getchar();
}


