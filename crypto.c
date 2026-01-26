#include<stdio.h>
#include<stdlib.h>
#include "crypto.h"

int crypto(char *nome1, char *senha, char *nome2) {
    FILE *file1, *file2;
    int c;
    int i=0;
    
    if (senha == NULL || *senha == '\0') {
        printf("\nErro: senha vazia ou invalida.\n");
        return 0;
    }

    file1 = fopen(nome1, "rb");
    if (file1 == NULL) {
        printf("\nErro: nao foi possivel abrir o arquivo de entrada (%s).\n", nome1);
        return 0;
    }

    file2 = fopen(nome2, "wb");
    if (file2 == NULL) {
        printf("\nErro: nao foi possivel criar o arquivo de saida (%s)\n", nome2);
        fclose(file1);
        return 0;
    }

    while ((c = fgetc(file1)) != EOF) {
        c ^= senha[i];
        fputc(c, file2);

        i++;
        if (senha[i] == '\0') {
            i = 0;
        }
    }
    fclose(file1);
    fclose(file2);
    printf("\nCrptografia realizada com sucesso\n");
    return 1;
}

        
