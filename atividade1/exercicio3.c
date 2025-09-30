#include <stdio.h>

int main(void) {
    int v[100];
    int n, i;
    int soma = 0;
    int maior = 0;

    printf("Quantos elementos (1 a 100)? ");
    scanf("%d", &n);

    printf("Digite %d inteiros:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++) {
        soma += v[i];
        if (v[i] > maior) {
            maior = v[i];
        }
    }

   
    float media = soma / n;

    printf("Media = %.2f\n", media);
    printf("Maior = %d\n", maior);

    return 0;
}