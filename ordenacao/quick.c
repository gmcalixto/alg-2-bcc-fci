#include <stdio.h>

// Função para trocar dois elementos
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

/* Esta função pega o último elemento como pivô, coloca
   o elemento pivô na sua posição correta no array ordenado,
   e coloca todos os menores (menores que o pivô) à esquerda do pivô
   e todos os maiores elementos à direita do pivô */
int partition(int arr[], int low, int high) {
    int pivot = arr[high];    // pivô
    int i = (low - 1);  // Índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        // Se o elemento atual for menor que o pivô
        if (arr[j] < pivot) {
            i++;    // incrementa o índice do menor elemento
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* A função principal que implementa QuickSort
          arr[] --> Array a ser ordenado,
          low --> Índice inicial,
          high --> Índice final
*/
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi é o índice de partição, arr[p] está agora no lugar certo
        int pi = partition(arr, low, high);

        // Ordena separadamente os elementos antes e depois da partição
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Função para imprimir um array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Código principal para testar
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5, 100, 2, 44, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Array ordenado é: \n");
    printArray(arr, n);
    return 0;
}
