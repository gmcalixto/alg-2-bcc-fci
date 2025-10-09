#include <stdio.h>

int main(void) {
    int x, y;
    int *px, *py;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &x, &y);

    px = &x;
    py = &y;

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    int temp = *px;
    *px = *py;  
    *py = temp;  

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}