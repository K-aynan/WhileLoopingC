#include <stdio.h>

int main() {
    const int Peso = 5;
    int maisPesado;

	int i;
    for (i = 0; i < Peso; ++i) {
        int peso;

        printf("Digite o numero %d [kg]: ", i+1);
        scanf("%d", &peso);

        if (peso > maisPesado) {
            maisPesado = peso;
        }
    }

    printf("O mais pesado pesa: %d\n", maisPesado);

    return 0;
}

