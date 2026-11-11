#include <stdio.h>
#include <stdlib.h>
#include "inventario.h"   // inventario do detetive
#include "historias.h"    // historias do detetive

int historia;   // qual caso esta sendo jogado (1, 2 ou 3)
int turnos;     // quantos turnos ainda restam

void menu_principal();
int escolher_historia();
int escolher_dificuldade();
void iniciar_jogo();
void investigar();
void conversar();
void acusacao();
void sair();

void menu_principal(){
    int opcao;

    printf("================================================================================\n");
    printf("              _  ____   _____  ____      _____  ______\n");
    printf("             | |/ __ \\ / ____|/ __ \\    |  __ \\|  ____|\n");
    printf("             | | |  | | |  __| |  | |   | |  | | |__\n");
    printf("         _   | | |  | | | |_ | |  | |   | |  | |  __|\n");
    printf("        | |__| | |__| | |__| | |__| |   | |__| | |____\n");
    printf("         \\____/ \\____/ \\_____|\\____/    |_____/|______|\n\n");
    printf("   _____  ______ _______ ______ _______ _______      ________    ___ \n");
    printf("  |  __ \\|  ____|__   __|  ____|__   __|_   _\\ \\    / /  ____|  /    \\\n");
    printf("  | |  | | |__     | |  | |__     | |    | |  \\ \\  / /| |__    | /    |\n");
    printf("  | |  | |  __|    | |  |  __|    | |    | |   \\ \\/ / |  __|    \\____/ \n");
    printf("  | |__| | |____   | |  | |____   | |   _| |_   \\  /  | |____       \\ \\\n");
    printf("  |_____/|______|  |_|  |______|  |_|  |_____|   \\/   |______|       \\_\\\n");
    printf("\n================================================================================\n\n");

    printf("[1]. Jogar\n");
    printf("[2]. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1 :
            iniciar_jogo();
            break;
        case 2 :
            sair();
            break;
        default:
            printf("Opcao invalida!");
            break;
    }
}

int escolher_historia(){
    int opcao = 0;

    while (opcao < 1 || opcao > 3){
        printf("\n============================================================\n");
        printf("                    ESCOLHA O CASO\n");
        printf("============================================================\n");
        printf("[1]. Caso 01 - O Assassinato da Mansao Oliveira\n");
        printf("[2]. Caso 02 - O Roubo do Museu Municipal\n");
        printf("[3]. Caso 03 - O Envenenamento no Trem Noturno\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 3){
            printf("\nOpcao invalida!\n");
        }
    }
    return opcao;
}

int escolher_dificuldade(){
    int opcao = 0;

    while (opcao < 1 || opcao > 3){
        printf("\n============================================================\n");
        printf("                  ESCOLHA A DIFICULDADE\n");
        printf("============================================================\n");
        printf("Cada investigacao ou interrogatorio gasta 1 turno.\n");
        printf("Quando os turnos acabarem, voce sera obrigado a acusar.\n\n");
        printf("[1]. Facil   - 12 turnos\n");
        printf("[2]. Medio   -  8 turnos\n");
        printf("[3]. Dificil -  5 turnos\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 3){
            printf("\nOpcao invalida!\n");
        }
    }

    switch (opcao){
        case 1:
            return 12;
        case 2:
            return 8;
        default:
            return 5;
    }
}

void iniciar_jogo(){
    char nome[30];
    int opcao;

    system("cls");

    // Tela inicial

    printf("\n\nDigite o nome do detetive: ");
    scanf("%s", nome);

    printf("\nBoa sorte, detetive %s.\n\n", nome);

    // Escolhas antes de comecar

    historia = escolher_historia();
    turnos = escolher_dificuldade();
    limpar_inventario();   // cada historia comeca com o inventario vazio

    system("cls");

    // Introducao da historia escolhida

    switch (historia){
        case 1:
            historia1_introducao();
            break;
        case 2:
            historia2_introducao();
            break;
        case 3:
            historia3_introducao();
            break;
    }
    pausar();

    // Laco de turnos: o jogo continua enquanto houver turnos

    while (turnos > 0){
        system("cls");

        printf("============================================================\n");
        printf("                    MENU DO CASO                            \n");
        printf("============================================================\n");
        printf("Detetive: %s  |  Turnos restantes: %d  |  Provas: %d\n\n", nome, turnos, total_itens);
        printf("[1]. Explorar os locais (gasta 1 turno)\n");
        printf("[2]. Interrogar um suspeito (gasta 1 turno)\n");
        printf("[3]. Ver inventario\n");
        printf("[4]. Acusar um suspeito (encerrar o caso)\n");
        printf("[5]. Sair sem resolver\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                turnos = turnos - investigar();
                break;
            case 2:
                turnos = turnos - conversar();
                break;
            case 3:
                mostrar_inventario();
                pausar();
                break;
            case 4:
                acusacao();
                return;
            case 5:
                sair();
                break;
            default:
                printf("Opcao invalida!");
                pausar();
                break;
        }
    }

    // Os turnos acabaram

    system("cls");
    printf("\n========================================\n");
    printf("          O TEMPO ACABOU!\n");
    printf("========================================\n");
    printf("\nA policia exige uma resposta agora.\n");
    printf("Voce precisa fazer sua acusacao com as provas que tem.\n");
    mostrar_inventario();
    printf("\n\nPressione Enter para continuar...");
    getchar();
    acusacao();
}

int investigar(){
    switch (historia){
        case 1:
            return historia1_investigar();
        case 2:
            return historia2_investigar();
        default:
            return historia3_investigar();
    }
}

int conversar(){
    switch (historia){
        case 1:
            return historia1_conversar();
        case 2:
            return historia2_conversar();
        default:
            return historia3_conversar();
    }
}
void acusacao(){
    switch (historia){
        case 1:
            historia1_acusacao();
            break;
        case 2:
            historia2_acusacao();
            break;
        default:
            historia3_acusacao();
            break;
    }
}

void sair() {
    printf("\nCaso encerrado...\n");
    exit(0);
}

int main() {
    menu_principal();
    return 0;
}
int main() {
    menu_principal();
    return 0;
}
