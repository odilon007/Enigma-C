void  exibirLogo() {
    printf("#########################################################################\n");
    printf("##                                                                     ##\n");
    printf("##  ███████╗███╗   ██╗██╗ ██████╗ ███╗   ███╗ █████╗           ██████╗ ##\n");
    printf("##  ██╔════╝████╗  ██║██║██╔════╝ ████╗ ████║██╔══██╗        ██╔════╝  ##\n");
    printf("##  █████╗  ██╔██╗ ██║██║██║  ███╗██╔████╔██║███████║ █████║██║        ##\n");
    printf("##  ██╔══╝  ██║╚██╗██║██║██║   ██║██║╚██╔╝██║██╔══██║        ██║       ##\n");
    printf("##  ███████╗██║ ╚████║██║╚██████╔╝██║ ╚═╝ ██║██║  ██║        ╚██████╗  ##\n");
    printf("##  ╚══════╝╚═╝  ╚═══╝╚═╝ ╚═════╝ ╚═╝     ╚═╝╚═╝  ╚═╝          ╚═════╝ ##\n");
    printf("##                                                                     ##\n");
    printf("##                    SISTEMA DE CRIPTOGRAFIA DE ARQUIVOS              ##\n");
    printf("##                            DESENVOLVIDO EM C                        ##\n");
    printf("##                                                                     ##\n");
    printf("#########################################################################\n");
    
}


void exibirMenu() {
    printf("\n[1] Criptografar Arquivo\n");
    printf("[2] Descriptografar Arquivo\n");
    printf("[0] sair\n\n");
    printf("_________________________________________________________________________\n");
}

void exibirMenuCrypto() {
    printf("\nCriptografia\n");
    printf("\n[1] XOR\n");
    printf("[2] outro\n");
    printf("[0] Voltar\n\n");
    printf("_________________________________________________________________________\n");
}

void exibirMenuDescrypto() {
    printf("\nDescriptografia\n");
    printf("\n[1] XOR\n");
    printf("[2] outro\n");
    printf("[0] voltar\n\n");
}

void exibirMenuXOR(){
    printf("\nCriptografia XOR\n\n");
}

void opcaoInvalida() {
    printf("Opção inválida\n\n");
}
