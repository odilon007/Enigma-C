#include <stdio.h>
#include "interface.h"

// Cores ANSI
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

void exibirLogo(void) {
    printf(GREEN);
    printf("        .--------.\n");
    printf("       / .------. \\\n");
    printf("      / /        \\ \\\n");
    printf("      | |        | |\n");
    printf("     _| |________| |_\n");
    printf("   .' |_|        |_| '.\n");
    printf("   '._____      _____.'   " "  XOR CRYPTO SYSTEM  "  "\n");
    printf("   |     |______|     |   " "Protecao de Arquivos "  "\n");
    printf("   |     |  __  |     |   " "   em Linguagem C    "  "\n");
    printf("   |     | |  | |     |\n");
    printf("   |     | |__| |     |\n");
    printf("   |     |______|     |\n");
    printf("   '------------------'\n");
    printf(RESET);
    printf("\n");
}



void exibirMenu(void) {
    printf("  [MENU PRINCIPAL]  " "\n");
    printf("  "  "[1]"  " Criptografar Arquivo (XOR)\n");
    printf("  "  "[2]"  " Descriptografar Arquivo (XOR)\n");
    printf("  "  "[0]"  " Sair do Sistema\n");
    printf( "________________________________________________________" "\n");
    printf("Escolha uma opcao: ");
}



void opcaoInvalida(void) {
    printf("\n" "[!] Opcao invalida. Tente novamente.\n\n");
}

