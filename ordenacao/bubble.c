#include <stdio.h>

void bubble_sort(int v[], int n) {
    int i, j, tmp;
    for (i = 0; i < n - 1; i++) {
        int trocou = 0;
        for (j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
                trocou = 1;
            }
        }
        if (!trocou) break; 
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

    bubble_sort(v, n);

    printf("Vetor ordenado (Bubble Sort): ");
    imprime(v, n);

    return 0;
}
