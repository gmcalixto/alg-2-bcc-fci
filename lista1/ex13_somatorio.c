#include <stdio.h>

int main(void) {
    long long n;
    printf("Digite n (limite superior do somatório): ");
    if (scanf("%lld", &n) != 1 || n < 1) {
        printf("Entrada inválida. Use n >= 1.\n");
        return 1;
    }
    long long soma = 0;
    for (long long i = 1; i <= n; i++) {
        soma += i*i + 5*i;
    }
    printf("Resultado do somatório: %lld\n", soma);
    return 0;
}
