#include <stdio.h>

int main(){
    
    int idade;

    printf("Digite a idade:");
    scanf("%d",&idade);

    if(idade > 0){

        //condicional simples
        if(idade >= 18){
            printf("Voce tem %d anos e pode votar!\n",idade);
        }
        else{
            printf("Voce tem %d anos e nao pode votar!\n",idade);
        }

        //forma reduzida de condicional
        //if(idade >= 18) printf("Voce tem %d anos e pode votar!\n",idade);
        //else printf("Voce tem %d anos e nao pode votar!\n",idade);

        //condicional encadeada
        if(idade >= 60){
            printf("Você é senior...\n");
        }
        else if(idade >= 18)
        {
            printf("Você é adulto!\n");
        }
        else{
            printf("Você é uma crianca!\n");
        }
    
    }
    else{
        printf("Valor inválido\n");
    }

    return 0;
}