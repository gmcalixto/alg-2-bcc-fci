#include <stdio.h>

int potencia(int base, int exp) {
    if (exp == 0) return 1;
    return base * potencia(base, exp - 1);
}

int main(void) {
    int a, b;
    printf("Digite base e expoente: ");
    scanf("%d %d", &a, &b);

    if (b < 0) {
        printf("Expoente invalido\n");
        return 0;
    }

    int resultado = potencia(a, b);
    printf("%d^%d = %d\n", a, b, resultado);
    return 0;
}