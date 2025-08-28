#include <stdio.h>

int main(){


    int a;

    for(a=0;a<10;a++){

        if(a == 3){
            printf("Bora para o próximo...\n");
            continue; //parada abrupta da iteração e vai para a próxima iteração
        }
        
        
        printf("Valor de A: %d\n",a);

        if(a == 8){
            printf("Parei por aqui...");
            break; //parada abrupta do laço
        }

    }


    return 0;
}