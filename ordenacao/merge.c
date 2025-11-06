#include <stdio.h>

// Função para mesclar dois sub-arrays de arr[]
// O primeiro sub-array é arr[l..m]
// O segundo sub-array é arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Cria arrays temporários para armazenar as metades
    int L[n1], R[n2];

    // Copia os dados para os arrays temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Mescla os arrays temporários de volta em arr[0..r-1]
    i = 0; // Índice inicial do primeiro sub-array
    j = 0; // Índice inicial do segundo sub-array
    k = l; // Índice inicial do array mesclado
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função principal que implementa MergeSort
// l é o índice inicial e r é o índice final
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Encontra o meio do array
        int m = l + (r - l) / 2;

        // Ordena a primeira e a segunda metade
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Mescla as duas metades
        merge(arr, l, m, r);
    }
}

/* Função para imprimir um array */
void printArray(int A[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Código principal para testar as funções acima
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7, 55, 22,43,8};
    int arr_size = 10;

    printf("Array original:\n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nArray ordenado:\n");
    printArray(arr, arr_size);
    return 0;
}
