#include <stdio.h>
#include <math.h>

int main(void) {

    double M[3][3];
    int i;

    printf("Calculo da area de um triangulo usando matriz [x y 1]\n");
    for (i = 0; i < 3; i++) {
        printf("Digite x%d e y%d: ", i+1, i+1);
        scanf("%lf %lf", &M[i][0], &M[i][1]);
        M[i][2] = 1.0; 
    }


    double det =
        M[0][0] * (M[1][1]*M[2][2] - M[1][2]*M[2][1]) +
        M[0][1] * (M[1][0]*M[2][2] - M[1][2]*M[2][0]) + 
        M[0][2] * (M[1][0]*M[2][1] - M[1][1]*M[2][0]);


    double area = fabs(det) / 2.0;

    printf("Area = %.6f\n", area);
    return 0;
}