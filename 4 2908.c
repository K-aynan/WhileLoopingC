#include <stdio.h>
#include <stdlib.h>

void main() {
	int x=0, opcao=0;
	float produto=0, ctotal=0, acres=0;
	
	while(x<8){
		
		printf("Qual o valor do produto? ");
		scanf("%f", &produto);
		ctotal += produto;
		x++;
	}
	
	printf("Voce pode decider se quer: ");
	printf("\nDesconto 10%% a vista(1): ");
	printf("\nAcrescimo 15%%(2): ");
	scanf("%i", &opcao);
	
	switch(opcao){
		case 1:
			ctotal -= (ctotal * 0.10);
			printf("valor total e: %.2f", ctotal);
			break;
		case 2:
			acres += (ctotal * 0.15);
			printf("\nvalor com acrescimo e: %.2f", acres);
			break;
		default:
			printf("Opcao invalida. Taxa considerada: R$ 0,00\n");
			ctotal = 0.0;
	}
	getchar();
}


