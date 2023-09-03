#include <stdio.h>
#include <stdlib.h>

void main() {
	int x=0, opcao=0;
	float cedula=0, ctotal=0, dolar=0, valor=0;
	
	for(x=0;x<8;x++){
		printf("Qual o valor das cedulas?");
		scanf("%f", &cedula);
		fflush(stdin);
		
		ctotal = ctotal + cedula;
	}
	printf("Seu dinheiro em dolar somam: %.2f\n", ctotal);
	system("pause");
	
	system("cls");
	
	printf("Qual a cotacao do dolar hoje: ");
	scanf("%f", &dolar);
	valor = (ctotal) / dolar;
	
	printf("Seu saldo em dinheiro hoje e: %.2f", valor);

	getchar();
}


