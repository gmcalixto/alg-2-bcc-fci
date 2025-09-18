#include <stdio.h>

int main(void) {
    double media;
    int freq;
    printf("Digite a média (0.0 a 10.0): ");
    if (scanf("%lf", &media) != 1) { printf("Entrada inválida.\n"); return 1; }
    printf("Digite a frequência em %% (0 a 100): ");
    if (scanf("%d", &freq) != 1) { printf("Entrada inválida.\n"); return 1; }

    if (freq < 75) {
        printf("REPROVADO\n");
    } else if (media >= 6.0) {
        printf("APROVADO\n");
    } else {
        printf("DE EXAME\n");
    }
    return 0;
}
