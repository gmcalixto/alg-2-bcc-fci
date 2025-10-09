#include <stdio.h>

void insertion_sort(int v[], int n) {
    int i, j, chave;
    for (i = 1; i < n; i++) {
        chave = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = chave;
    }
}

void imprime(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(void) {
    int v[7] = {29, 10, 14, 37, 14, 3, 9};
    int n = 7;

    printf("Vetor original: ");
    imprime(v, n);

    insertion_sort(v, n);

    printf("Vetor ordenado (Insertion Sort): ");
    imprime(v, n);

    return 0;
}
