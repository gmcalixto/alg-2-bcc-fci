#include <stdio.h>

#define N 10

void copiar_vetor(int destino[], int origem[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        destino[i] = origem[i];
    }
}

void imprimir_vetor(char titulo[], int v[], int n) {
    int i;
    printf("%s", titulo);
    for (i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", v[i]);
    }
    printf("\n");
}


void bubble_sort_desc(int v[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            /* PONTO-CHAVE: troca se o elemento da esquerda for MENOR */
            if (v[j] < v[j + 1]) {   // para crescente seria '>'
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}


void selection_sort_desc(int v[], int n) {
    int i, j, indiceMaior, temp;
    for (i = 0; i < n - 1; i++) {
        indiceMaior = i; // em decrescente, buscamos o MAIOR
        for (j = i + 1; j < n; j++) {
            /* PONTO-CHAVE: manter o índice do MAIOR elemento */
            if (v[j] > v[indiceMaior]) {  // para crescente seria '<'
                indiceMaior = j;
            }
        }
        if (indiceMaior != i) {
            temp = v[i];
            v[i] = v[indiceMaior];
            v[indiceMaior] = temp;
        }
    }
}


int main(void) {
    int base[N] = {5, -2, 9, 0, 13, 7, 7, 1, 4, -5};
    int b1[N], b2[N];

    copiar_vetor(b1, base, N);
    copiar_vetor(b2, base, N);

    bubble_sort_desc(b1, N);
    selection_sort_desc(b2, N);

    imprimir_vetor("Vetor original:     ", base, N);
    imprimir_vetor("Bubble decrescente: ", b1, N);
    imprimir_vetor("Selection decresc.: ", b2, N);

    return 0;
}
