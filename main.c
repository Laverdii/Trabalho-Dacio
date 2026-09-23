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

void iniciar_jogo(){
    char nome[30];
    int opcao;

    // Tela inicial

    printf("Disclaimer: JOGO NAO FUNCIONAL, pois nao funciona sem laco de repeticao");
    printf("\n\nDigite o nome do detetive: ");
    scanf("%s", nome);

    printf("\n");
    printf("Boa sorte, detetive %s.\n", nome);
    printf("\n");

    // Introdução

    printf("============================================================\n");
    printf("                    CASO 01 - O ASSASSINATO               \n");
    printf("                         DA MANSAO OLIVEIRA                 \n");
    printf("============================================================\n\n");

    // ASCII CASA

    printf("Sao 23h47 de uma sexta-feira.\n\n");

    printf("A policia recebeu uma ligacao informando que um homem\n");
    printf("havia sido encontrado morto dentro da propria residencia.\n\n");

    printf("A vitima e Henrique Oliveira, empresario de 52 anos\n");
    printf("e proprietario da Mansao Oliveira.\n\n");

    printf("Quando a policia chegou ao local, encontrou a casa\n");
    printf("trancada e quatro pessoas dentro da propriedade.\n\n");

    printf("Nao havia sinais claros de arrombamento.\n");
    printf("O assassino provavelmente era alguem que a vitima conhecia.\n\n");

    printf("Voce foi chamado para assumir a investigacao.\n\n");

    printf("Existem quatro suspeitos.\n");
    printf("Todos afirmam que nao tiveram envolvimento com o crime.\n\n");

    printf("Mas alguma coisa nao esta certa.\n\n");

    printf("Sua missao e investigar a mansao, encontrar as pistas\n");
    printf("e descobrir quem matou Henrique Oliveira.\n\n");

    printf("============================================================\n");
    printf("                  A INVESTIGACAO VAI COMECAR               \n");
    printf("============================================================\n\n");


// void conversar(){}

// void investigar(){}

// void acusacao(){}

// void sair(){}

int main() {
    menu_principal();
    return 0;
}
