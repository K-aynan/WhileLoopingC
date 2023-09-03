#include <stdio.h>

int main() {
    const int Altura = 5;
    int menor = 1000;

	int i;
    for (i = 0; i < Altura; ++i) {
    	
        int altura;
        printf("Digite a altura %i [cm]: ", i+1);
        scanf("%i", &altura);

        if (altura < menor) {
            menor = altura;
        }
    }

    printf("A menor altura e: %i\n", menor);

    return 0;
}

