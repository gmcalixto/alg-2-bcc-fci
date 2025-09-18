#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois inteiros separados por espaço: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada inválida.\n");
        return 1;
    }
    int soma = a + b;
    double media = (a + b) / 2.0; // média com ponto flutuante
    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);
    return 0;
}
