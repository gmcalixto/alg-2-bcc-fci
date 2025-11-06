#include <stdio.h>

int soma_digitos(int n) {
    if (n < 10) return n;
    return (n % 10) + soma_digitos(n / 10);
}

int main(void) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Valor invalido\n");
        return 0;
    }

    int resultado = soma_digitos(n);
    printf("Soma dos digitos: %d\n", resultado);
    return 0;
}