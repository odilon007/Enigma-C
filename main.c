#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "interface.h"
#include "file_manager.h"

void menuCriptografia() {
    exibirMenuCrypto();
    int op;
    scanf("%d", &op);
    if (!op) return;
    switch (op) {
        case 1:
            exibirMenuXOR();
            dadosCrypto();
            break;
        case 2:
            printf("Desenvokvendo\n");
            break;
        default:
            opcaoInvalida();
    }
}


void menuDescriptografia() {
    exibirMenuDescrypto();
    int op;
    scanf("%d", &op);
    if (!op) return;
    switch (op) {
        case 1:
            exibirMenuXOR();
            break;
        case 2:
            printf("Desenvolvendo\n");
            break;
            default:
            opcaoInvalida();
            break;
    }
}




int main() {
    printf("\033[0;32m");
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
                menuCriptografia();
                break;
            case 2:
                menuDescriptografia();
                break;
            default:
                opcaoInvalida();
                break;
        }
    }
    printf("\nTchau...\n");
    return 0;
}
