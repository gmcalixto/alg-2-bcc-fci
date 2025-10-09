#include <stdio.h>

int main(void) {
    int numero = 10;
    int *ponteiro; // Declaração de ponteiro para inteiro

    // O ponteiro recebe o endereço da variável
    ponteiro = &numero;

    printf("Valor da variável numero: %d\n", numero);
    printf("Endereço de numero (&numero): %p\n", (void*)&numero);
    printf("Valor armazenado no ponteiro: %p\n", (void*)ponteiro);
    printf("Valor apontado pelo ponteiro (*ponteiro): %d\n", *ponteiro);

    // Alterando o valor da variável usando o ponteiro
    *ponteiro = 25;
    printf("\nApós alteração via ponteiro:\n");
    printf("Valor da variável numero: %d\n", numero);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
