#include <stdio.h>

int main(void) {
    int n, i;
    int primo = 1;

    printf("Digite um inteiro: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }      
    }

    if (primo) {
        printf("%d e primo.\n", n);
    } else {
        printf("%d nao e primo.\n", n);
    }

    return 0;
}