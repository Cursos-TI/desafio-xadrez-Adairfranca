#include <stdio.h>
#include <stdlib.h>

// Função para converter letras em colunas (a=1, b=2, ..., h=8)
int coluna_para_int(char c) {
    return c - 'a' + 1;
}

int main() {
    char torre_coluna_char, rei_coluna_char;
    int torre_linha, rei_linha;

    printf("Digite a posição da torre (ex: a1): ");
    scanf(" %c%d", &torre_coluna_char, &torre_linha);

    printf("Digite a posição do rei (ex: e4): ");
    scanf(" %c%d", &rei_coluna_char, &rei_linha);

    int torre_coluna = coluna_para_int(torre_coluna_char);
    int rei_coluna = coluna_para_int(rei_coluna_char);

    // Verifica se estão na mesma linha ou coluna
    if (torre_coluna == rei_coluna || torre_linha == rei_linha) {
        printf("XEQUE\n");
    } else {
        printf("SEGURO\n");
    }

    return 0;
}
