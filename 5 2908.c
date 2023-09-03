#include <stdio.h>
#include <stdlib.h>

void main() {
	int x=0, opcao=0;
	float produto=0, produto2=0, ctotal=0, ctotal2=0, acumulados=0;
	
	while(x<5){
		
		printf("Qual o valor do produto? ");
		scanf("%f", &produto);
		ctotal += produto;
		x++;
	}
	
	system("cls");
	
	for(x=0;x<5;x++){
		printf("Qual o valor do produto2?");
		scanf("%f", &produto2);
		fflush(stdin);
		
		ctotal2 = ctotal2 + produto2;
	}
	
	acumulados = ctotal + ctotal2;
	printf("Total acumulado pelo while: %.1f", ctotal);
	printf("\nTotal acumulado pelo for: %.1f", ctotal2);
	printf("\nTotal acumulado pelo for: %.1f", acumulados);
	getchar();
}


