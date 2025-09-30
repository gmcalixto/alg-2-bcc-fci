#include <stdio.h>

int main(void) {

    int M[3][3];
    int i;

    printf("Calculo da area de um triangulo usando matriz [x y 1]\n");
    for (i = 0; i < 3; i++) {
        printf("Digite x%d e y%d: ", i+1, i+1);
        scanf("%d %d", &M[i][0], &M[i][1]);
        M[i][2] = 1; 
    }


    int det =
        M[0][0] * (M[1][1]*M[2][2] - M[1][2]*M[2][1]) +
        M[0][1] * (M[1][0]*M[2][2] - M[1][2]*M[2][0]) + 
        M[0][2] * (M[1][0]*M[2][1] - M[1][1]*M[2][0]);


    int area = (det < 0 ? -det : det) / 3;

    printf("Area (aprox.) = %d\n", area);
    return 0;
}