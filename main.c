#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "interface.h"
#include "file_manager.h"

int main() {
    exibirLogo();
    int op=1;
    while (op != 0) {
        exibirMenu();
        if(scanf("%d", &op) == 0){
            opcaoInvalida();
            break;
        }
        if (!op) break;
        switch (op) {
            case 1:
                printf("Dados criptografia:\n\n");
                dadosCrypto();
                break;
            case 2:
                printf("Dados descriptografia:\n\n");
                dadosCrypto();
                break;
            default:
                opcaoInvalida();
                break;
        }
    }
    printf("\nTchau...\n");
    return 0;
}
