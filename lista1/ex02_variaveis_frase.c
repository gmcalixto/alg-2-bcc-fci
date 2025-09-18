#include <stdio.h>

int main(void) {
    int evento = 5;
    char corrida = 'C';
    float tempo = 27.25f;

    printf("O tempo vitorioso na eliminatória %c da competição %d foi %.2f\n",
           corrida, evento, tempo);
    return 0;
}
