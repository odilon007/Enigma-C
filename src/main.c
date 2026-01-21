#include<stdio.h>
#include<stdlib.h>
#include "../include/interface.h"

int main() {
    printf("\033[0;32m");
    exibirLogo();
    int op;
    do {
        exibirMenu();
        scanf("%d", &op);
    } while (op != 0);
    printf("\nTchau...\n");
    return 0;
}
