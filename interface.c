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
    printf("\n[1] Criptografar Arquivo\n");
    printf("[2] Descriptografar Arquivo\n");
    printf("[0] sair\n\n");
    printf("_________________________________________________________________________\n");
}

void exibirMenuCrypto(void) {
    printf("\nCriptografia\n");
    printf("\n[1] XOR\n");
    printf("[2] outro\n");
    printf("[0] Voltar\n\n");
    printf("_________________________________________________________________________\n");
}

void exibirMenuDescrypto(void) {
    printf("\nDescriptografia\n");
    printf("\n[1] XOR\n");
    printf("[2] outro\n");
    printf("[0] voltar\n\n");
}

void exibirMenuXOR(void){
    printf("\nCriptografia XOR\n\n");
}

void opcaoInvalida(void) {
    printf("Opção inválida\n\n");
}
