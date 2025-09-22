#include <stdio.h>
#include <string.h>

#define MAX_PALAVRAS 10  // Número máximo de palavras esperadas

int main() {
    const char* texto = "This Love is Yours";
    char copia[100];  // Buffer para a cópia da string
    char* palavras[MAX_PALAVRAS];  // Array para armazenar ponteiros para as palavras
    int num_palavras = 0;
    int i;

    // Copia a string para não modificar a original
    strncpy(copia, texto, sizeof(copia) - 1);
    copia[sizeof(copia) - 1] = '\0';  // Garantir que a string está terminada

    // Divide a string em palavras
    char* token = strtok(copia, " ");
    while (token != NULL && num_palavras < MAX_PALAVRAS) {
        palavras[num_palavras++] = token;
        token = strtok(NULL, " ");
    }

    // Imprime as palavras
    for (i = 0; i < num_palavras; i++) {
        printf("Palavra %d: %s\n", i, palavras[i]);
    }

    return 0;
}

