#include<stdio.h>
#include "interface.h"

void exibirLogo(void) {
    printf("#########################################################################\n");
    printf("##                                                                     ##\n");
    printf("##  #######  ###   ## ##  ######  ###   ###  #####           ######    ##\n");
    printf("##  ##       ####  ## ## ##       #### #### ##   ##        ##         ##\n");
    printf("##  #####    ## ## ## ## ##  ###  ## #### ## #######  ##### ##         ##\n");
    printf("##  ##       ##  #### ## ##   ##  ##  ##  ## ##   ##        ##         ##\n");
    printf("##  #######  ##   ### ##  ######  ##      ## ##   ##        ######     ##\n");
    printf("##                                                                     ##\n");
    printf("##            SISTEMA DE CRIPTOGRAFIA DE ARQUIVOS EM C                  ##\n");
    printf("##                    DESENVOLVIDO EM LINGUAGEM C                      ##\n");
    printf("##                                                                     ##\n");
    printf("#########################################################################\n");
}



void exibirMenu(void) {
    printf("\n[1] Criptografar XOR\n");
    printf("[2] Descriptografar XOR\n");
    printf("[0] sair\n\n");
    printf("_________________________________________________________________________\n");
}

void opcaoInvalida(void) {
    printf("Opção inválida\n\n");
}
