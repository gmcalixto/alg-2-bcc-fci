#include <stdio.h>

//letras do alfabeto
char letras[26] = {
    'A','B','C','D','E','F','G','H','I','J','K','L','M',
    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
};

//codigo morse correspondente
char morse[26][5] = {
    ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
    "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
    "..-","...-",".--","-..-","-.--","--.."
};


//devolve o tamanho da string
int tamanho(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

//compara duas strings
int iguais(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return 0;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}


//verificar se o texto começa com prefixo
int comecaCom(char texto[], char prefixo[]) {
    int i = 0;
    while (prefixo[i] != '\0') {
        if (texto[i] == '\0') return 0;
        if (texto[i] != prefixo[i]) return 0;
        i++;
    }
    return 1;
}

//procura código Morse exato e retorna índice
int indiceLetra(char codigo[]) {
    int i;
    for (i = 0; i < 26; i++) {
        if (iguais(morse[i], codigo)) return i;
    }
    return -1;
}

//gera lista de possíveis letras para prefixo
void candidatos(char prefixo[], char saida[]) {
    int i, pos = 0;
    saida[pos++] = '[';
    for (i = 0; i < 26; i++) {
        if (comecaCom(morse[i], prefixo)) {
            saida[pos++] = letras[i];
        }
    }
    saida[pos] = ']';
    pos++;

    saida[pos] = '\0';
}

//traduz um único código Morse
void traduzToken(char token[], char saida[]) {
    int n = tamanho(token);

    if (token[n-1] == '*') {
       //caso o código esteja corrompido
        char prefixo[10];
        int i;
        for (i = 0; i < n-1; i++) prefixo[i] = token[i];
        prefixo[i] = '\0';
        candidatos(prefixo, saida);
    } else {
        int idx = indiceLetra(token);
        if (idx >= 0) {
            saida[0] = letras[idx];
            saida[1] = '\0';
        } else {
            saida[0] = '?';
            saida[1] = '\0';
        }
    }
}

//traduz uma frase inteira em Morse
void traduzLinha(char linha[], char saida[]) {
    int i = 0, j = 0, k = 0;
    char token[10], buffer[30];
    int espacos = 0;
    saida[0] = '\0';

    while (1) {
        char c = linha[i];

        if (c == ' ' || c == '\0') {
            //finaliza token
            if (k > 0) {
                token[k] = '\0';
                traduzToken(token, buffer);

                //copia tradução
                int m = 0;
                while (buffer[m] != '\0') {
                    saida[j++] = buffer[m++];
                }
                k = 0;
                espacos = 0;
            }
            //espaço entre palavras
            if (c == ' ') {
                espacos++;
                if (espacos == 2) {
                    saida[j++] = ' '; 
                    espacos = 0;
                }
            } else {
                //linha finalizada
                break;
            }
        } else {
            token[k] = c;
            k++;
            espacos = 0;
        }

        i++;
    }
    saida[j] = '\0';
}


int main(int argc, char *argv[]) {
    char resultado[400];

    if (argc < 2) {
        printf("Uso: %s \"frase_em_morse\"\n", argv[0]);
        return 1;
    }

    traduzLinha(argv[1], resultado);
    printf("%s\n", resultado);

    return 0;
}

