#include <stdio.h>

int main(void) {
    const double PI = 3.141592;
    double r;
    printf("Digite o raio da esfera: ");
    if (scanf("%lf", &r) != 1 || r < 0) {
        printf("Entrada inválida.\n");
        return 1;
    }
    double area = 4.0 * PI * r * r;
    printf("Área da superfície da esfera: %.6f\n", area);
    return 0;
}
