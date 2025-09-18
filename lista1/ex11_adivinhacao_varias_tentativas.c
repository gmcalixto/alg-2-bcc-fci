#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    int sorteado = (rand() % 100) + 1; // 1..100
    int palpite, tentativas = 0;

    while (1) {
        printf("Digite seu palpite (1 a 100): ");
        if (scanf("%d", &palpite) != 1) {
            printf("Entrada inválida.\n");
            return 1;
        }
        if (palpite < 1 || palpite > 100) {
            printf("Valor fora do intervalo. Tente novamente.\n");
            continue;
        }
        tentativas++;
        if (palpite == sorteado) {
            printf("Parabéns!!! Você acertou em %d tentativa(s)!\n", tentativas);
            break;
        } else if (palpite < sorteado) {
            printf("Você chutou muito baixo!\n");
        } else {
            printf("Você chutou muito alto!\n");
        }
    }
    return 0;
}
