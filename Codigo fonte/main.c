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

void conversar(){
    int pessoa;

    system("cls");
    
    printf("\n========================================\n"); 
    printf("        CONVERSAR COM O SUSPEITO\n");
    printf("========================================\n");
    printf("\nEscolha uma pessoa para investigar: \n");
    printf("\n[1]. CARLOS OLIVEIRA");
    printf("\n[2]. MARIANA OLIVEIRA");
    printf("\n[3]. RICARDO MENDES");
    printf("\n[4]. ANA SOUZA");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &pessoa);

    switch (pessoa) {
        case 1:
            printf("\nVoce iniciou uma conversa com Carlos Oliveira.");
            printf("Carlos parece nervoso durante o interrogatorio.\n\n");
            printf("\nCarlos Oliverira: ");

            printf("- Eu estava na sala assistindo televisao.\n");
            printf("Por volta das 23h30, ouvi um barulho vindo do\nescritorio, mas nao fui verificar.\n");
            printf("Eu e Henrique tinhamos problemas financeiros,\nmas eu jamais faria algo assim.\n");
            break;
        case 2:
            printf("\nVoce iniciou uma conversa com Mariana Oliveira.");
            printf("Mariana demonstra preocupacao durante a conversa.\n\n");
            printf("\nMariana Oliveira: ");

            printf("- Eu estava na cozinha preparando uma bebida.\n");
            printf("Nao ouvi nenhuma discussao.\n");
            printf("Henrique e eu tivemos problemas recentemente,\nmas eu nao queria que ele morresse.\n");
            break;
        case 3:
            printf("\nVoce iniciou uma conversa com Ricardo Mendes.");    
            printf("Ricardo tenta manter a calma durante o interrogatorio.\n\n");
            printf("\nRicardo Mendes: ");

            printf("- Eu estava no jardim fazendo uma ligacao.\n");
            printf("Fiquei la durante boa parte da noite.\n");            
            printf("Nao entrei no escritorio e nao vi Henrique depois\nque ele foi para la.\n");
            break;
        case 4:
            printf("\nVoce iniciou uma conversa com Ana Souza.");
            printf("Ana parece bastante nervosa.\n\n");
            printf("\nAna Souza: ");

            printf("\"Eu estava organizando algumas coisas na sala.\n");
            printf("Conheco bem a rotina da casa, mas nao vi quem\nentrou no escritorio naquela noite.\n");
            printf("Depois ouvi uma movimentacao, mas fiquei onde estava.\"\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
    }
    getchar();
    printf("\n\nPressione Enter para continuar...");
    getchar();
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

void acusacao (){
    int suspeito;

    system("cls");

    printf("\n========================================\n");
    printf("              ACUSACAO\n");
    printf("========================================\n");

    printf("\nQuem voce acredita ser o responsavel?\n");
    printf("\n[1]. Carlos Oliveira");
    printf("\n[2]. Mariana Oliveira");
    printf("\n[3]. Ricardo Mendes");
    printf("\n[4]. Ana Souza");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &suspeito);
    
    switch (suspeito){
        case 1:
            printf("\nVoce acusou Carlos Oliveira.");

            printf("\nA acusacao nao foi suficiente.\n");
            printf("Carlos tinha motivos para discutir com Henrique,\n");
            printf("mas as pistas encontradas nao o colocam na cena do crime.\n");

            printf("\nCASO NAO RESOLVIDO.\n");
            break;
        case 2:
            printf("\nVoce acusou Mariana Oliveira.");
            printf("\nA taca encontrada na cozinha parecia incrimina-la,\n");
            printf("mas a evidencia nao prova que Mariana matou Henrique.\n");

            printf("\nCASO NAO RESOLVIDO.\n");
            break;
        case 3:
            printf("\nVoce acusou Ricardo Mendes.");
            
            printf("\nAs pistas comecam a formar uma sequencia.\n\n");

            printf("[1] O relogio de Henrique parou as 23h32.\n");
            printf("[2] Henrique estava investigando movimentacoes financeiras.\n");
            printf("[3] O nome de Ricardo aparece nos documentos.\n");
            printf("[4] Um botao compativel com a camisa de Ricardo foi encontrado\nno escritorio.\n");
            printf("[5] Ricardo disse estar no jardim, mas sua ligacao comecou\napenas as 23h36.\n");
            printf("[6] Henrique escreveu \"R.M.\" em uma anotacao sobre\nas transferencias.\n");

            printf("\nTodas as evidencias apontam para Ricardo Mendes.\n");

            printf("\nCASO RESOLVIDO!!!!\n");
            break;
        case 4:
            printf("\nVoce acusou Ana Souza.");
            printf("\nAna conhecia a rotina da mansao, mas as evidencias\n");
            printf("nao comprovam que ela participou do assassinato.\n");

            printf("\nCASO NAO RESOLVIDO.\n");
            break;
        default:
            printf("\nSuspeito invalido!\n");
            break;
    }
    getchar();
    printf("\n\nPressione Enter para continuar...");
    getchar();
}

void sair() {
    printf("\nCaso encerrado...\n");
    exit(0);
}

int main() {
    menu_principal();
    return 0;
}
