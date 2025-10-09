#include <stdio.h>

void selection_sort(int v[], int n) {
    int i, j, min_idx, tmp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (v[j] < v[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            tmp = v[i];
            v[i] = v[min_idx];
            v[min_idx] = tmp;
        }
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

    selection_sort(v, n);

    printf("Vetor ordenado (Selection Sort): ");
    imprime(v, n);

    return 0;
}
