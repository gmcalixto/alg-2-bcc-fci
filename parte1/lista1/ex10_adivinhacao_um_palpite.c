#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    int sorteado = (rand() % 100) + 1; // 1..100
    int palpite;

    // Ler até obter valor válido
    do {
        printf("Digite seu palpite (1 a 100): ");
        if (scanf("%d", &palpite) != 1) {
            printf("Entrada inválida.\n");
            return 1;
        }
    } while (palpite < 1 || palpite > 100);

    if (palpite == sorteado) {
        printf("Parabéns!!! Você acertou!\n");
    } else if (palpite < sorteado) {
        printf("Você chutou muito baixo! O valor correto é %d.\n", sorteado);
    } else {
        printf("Você chutou muito alto! O valor correto é %d.\n", sorteado);
    }
    return 0;
}
