#include <stdio.h>

int main(void) {
    int vetor[] = {1, 3, 5, 7, 8, 9, 12, 15}; // Vetor ORDENADO
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int chave;
    int inicio = 0, fim = tamanho - 1, meio;
    int encontrado = 0;

    printf("=== Busca Binaria Didatica ===\n");
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nDigite o numero que deseja buscar: ");
    scanf("%d", &chave);

    // Busca binária
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        printf("\nIntervalo atual: inicio=%d, fim=%d -> meio=%d (valor=%d)\n",
               inicio, fim, meio, vetor[meio]);

        if (vetor[meio] == chave) {
            printf(">>> Elemento encontrado na posicao %d!\n", meio);
            encontrado = 1;
            break;
        } 
        else if (chave < vetor[meio]) {
            printf("Chave (%d) menor que vetor[%d]=%d. Procurando na metade ESQUERDA.\n",
                   chave, meio, vetor[meio]);
            fim = meio - 1; // ajusta limite direito
        } 
        else {
            printf("Chave (%d) maior que vetor[%d]=%d. Procurando na metade DIREITA.\n",
                   chave, meio, vetor[meio]);
            inicio = meio + 1; // ajusta limite esquerdo
        }
    }

    if (!encontrado) {
        printf("\n>>> Elemento NAO encontrado no vetor.\n");
    }

    return 0;
}
