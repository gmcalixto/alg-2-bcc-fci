#include <stdio.h>
#include <ctype.h>

#define MAX_LARGURA 1024
#define MAX_ALTURA  1024

int G_ERRO = 0;

/* Avança espaços e comentários '# ...\n' no arquivo e posiciona no próximo token. */
int preparar_proximo_token(FILE *fp) {
    int c;
    for (;;) {
        c = fgetc(fp);
        if (c == EOF) return EOF;
        if (isspace(c)) continue;
        if (c == '#') {                 /* descarta até o fim da linha */
            while (c != '\n' && c != EOF) c = fgetc(fp);
            if (c == EOF) return EOF;
            continue;
        }
        ungetc(c, fp);
        return c;
    }
}

/* Lê um inteiro (com sinal opcional) do arquivo; em caso de falha, seta G_ERRO. */
int ler_inteiro(FILE *fp) {
    int c = preparar_proximo_token(fp);
    if (c == EOF) { G_ERRO = 1; return 0; }

    int sinal = 1;
    c = fgetc(fp);
    if (c == '+' || c == '-') {
        if (c == '-') sinal = -1;
        c = fgetc(fp);
    }
    if (!isdigit(c)) { G_ERRO = 1; return 0; }

    long val = 0;
    while (isdigit(c)) {
        val = val * 10 + (c - '0');
        c = fgetc(fp);
    }
    if (c != EOF) ungetc(c, fp);
    return (int)(sinal * val);
}

/* Verifica se o próximo token literal é exatamente "P1" (sem quebrar entre 'P' e '1'). */
int ler_magic_P1(FILE *fp) {
    int c = preparar_proximo_token(fp);
    if (c == EOF) return 0;

    c = fgetc(fp);
    if (c != 'P') return 0;

    int d = fgetc(fp);
    if (d != '1') return 0;

    int e = fgetc(fp);
    if (e != EOF && !isspace(e) && e != '#') return 0;

    if (e == '#') {
        while (e != '\n' && e != EOF) e = fgetc(fp);
    } else if (e != EOF) {
        ungetc(e, fp);
    }
    return 1;
}

void imprimir_matriz(int m[][MAX_LARGURA], int h, int w) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%d", m[i][j]);
            if (j + 1 < w) printf(" ");
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Uso: %s caminho/arquivo.pbm\n", argv[0]);
        fprintf(stderr, "Formato suportado: PBM ASCII (P1)\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (!fp) {
        fprintf(stderr, "Erro: não foi possível abrir '%s'\n", argv[1]);
        return 1;
    }

    if (!ler_magic_P1(fp)) {
        fprintf(stderr, "Erro: formato não suportado. Esperado P1 (ASCII PBM).\n");
        fclose(fp);
        return 1;
    }

    int largura = ler_inteiro(fp);
    int altura  = ler_inteiro(fp);
    if (G_ERRO || largura <= 0 || altura <= 0) {
        fprintf(stderr, "Erro: largura/altura inválidas no cabeçalho.\n");
        fclose(fp);
        return 1;
    }

    if (largura > MAX_LARGURA || altura > MAX_ALTURA) {
        fprintf(stderr, "Erro: dimensões %dx%d excedem limites (%dx%d).\n",
                largura, altura, MAX_LARGURA, MAX_ALTURA);
        fclose(fp);
        return 1;
    }

    int matriz[MAX_ALTURA][MAX_LARGURA];

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            int v = ler_inteiro(fp);
            if (G_ERRO || (v != 0 && v != 1)) {
                fprintf(stderr, "Erro: valor inválido em (%d,%d). Esperado 0 ou 1.\n", i, j);
                fclose(fp);
                return 1;
            }
            matriz[i][j] = v;
        }
    }

    fclose(fp);

    printf("# Matriz %dx%d (0/1)\n", largura, altura);
    imprimir_matriz(matriz, altura, largura);
    return 0;
}
