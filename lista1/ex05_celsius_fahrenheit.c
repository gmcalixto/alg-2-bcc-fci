#include <stdio.h>

int main(void) {
    double c;
    printf("Digite a temperatura em graus Celsius: ");
    if (scanf("%lf", &c) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }
    double f = (c * 9.0/5.0) + 32.0;
    printf("A Temperatura em graus Fahrenheit é %.2f\n", f);
    return 0;
}
