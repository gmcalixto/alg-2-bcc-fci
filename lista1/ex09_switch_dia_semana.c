#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um número (0 a 6): ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }
    switch (n) {
        case 0: printf("domingo\n"); break;
        case 1: printf("segunda-feira\n"); break;
        case 2: printf("terça-feira\n"); break;
        case 3: printf("quarta-feira\n"); break;
        case 4: printf("quinta-feira\n"); break;
        case 5: printf("sexta-feira\n"); break;
        case 6: printf("sábado\n"); break;
        default: printf("Dia da semana inexistente!\n");
    }
    return 0;
}
