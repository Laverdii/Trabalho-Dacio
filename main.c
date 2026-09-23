#include <stdio.h>
#include <stdlib.h>

void menu_principal();
void iniciar_jogo();
void investigar();
void conversar();
void acusacao();
void sair();

void menu_principal(){
    int opcao;

    printf("================================================================================\n");
    printf("                 _  ____   _____  ____    _____  ______\n");
    printf("                | |/ __ \\ / ____|/ __ \\  |  __ \\|  ____|\n");
    printf("                | | |  | | |  __| |  | | | |  | | |__\n");
    printf("            _   | | |  | | | |_ | |  | | | |  | |  __|\n");
    printf("           | |__| | |__| | |__| | |__| | | |__| | |____\n");
    printf("            \\____/ \\____/ \\_____|\\____/  |_____/|______|\n\n");
    printf("   _____  ______ _______ ______ _______ _______      ________    ___ \n");
    printf("  |  __ \\|  ____|__   __|  ____|__   __|_   _\\ \\    / /  ____|  /    \\\n");
    printf("  | |  | | |__     | |  | |__     | |    | |  \\ \\  / /| |__    | /    |\n");
    printf("  | |  | |  __|    | |  |  __|    | |    | |   \\ \\/ / |  __|    \\____/ \n");
    printf("  | |__| | |____   | |  | |____   | |   _| |_   \\  /  | |____       \\ \\\n");
    printf("  |_____/|______|  |_|  |______|  |_|  |_____|   \\/   |______|       \\_\\\n");
    printf("\n================================================================================\n\n");

    printf("1. Jogar\n");
    printf("2. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1 :
            iniciar_jogo();
        case 2 :
            sair();
    }
}

// void iniciar_jogo(){}

// void conversar(){}

// void investigar(){}

// void acusacao(){}

// void sair(){}

int main() {
    menu_principal();
    return 0;
}
