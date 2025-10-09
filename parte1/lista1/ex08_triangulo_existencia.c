#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite os lados do triângulo (a b c): ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Entrada inválida.\n");
        return 1;
    }
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Lados devem ser positivos.\n");
        return 0;
    }
    if (a < b + c && b < a + c && c < a + b) {
        printf("Existe um triângulo com esses lados.\n");
    } else {
        printf("Não existe triângulo com esses lados.\n");
    }
    return 0;
}
