#include<stdio.h>
#include "file_manager.h"
#include <string.h>
#include "crypto.h"

#define TAM 50
// getch()

void removeNovaLinha(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
}
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void dadosCrypto() {
    char nameArq1[TAM], senha[TAM], nomeArq2[TAM];

    limparBuffer();

    printf("Nome do Arquivo: ");
    fgets(nameArq1, sizeof(nameArq1), stdin);
    removeNovaLinha(nameArq1);

    printf("Senha: ");
    fgets(senha, sizeof(senha), stdin);
    removeNovaLinha(senha);

    printf("Nome do Arquivo Final: ");
    fgets(nomeArq2, sizeof(nomeArq2), stdin);
    removeNovaLinha(nomeArq2);

    crypto(nameArq1, senha, nomeArq2);
}
