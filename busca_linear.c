#include <stdio.h>

int main(void) {
    int vetor[] = {5, 8, 12, 7, 3, 9, 15, 1}; // Vetor de exemplo
    int tamanho = 8; // Calcula o tamanho do vetor
    int chave, encontrado = 0;

    printf("=== Busca Linear Didática ===\n");
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nDigite o número que deseja buscar: ");
    scanf("%d", &chave);

    // Busca linear
    for (int i = 0; i < tamanho; i++) {
        printf("Comparando chave (%d) com vetor[%d] = %d\n", chave, i, vetor[i]);
        if (vetor[i] == chave) {
            printf(">>> Elemento encontrado na posição %d!\n", i);
            encontrado = 1;
            break; // Para a busca quando encontra
        }
    }

    if (!encontrado) {
        printf(">>> Elemento NÃO encontrado no vetor.\n");
    }

    return 0;
}
