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
        case 2 :
            sair();
    }
}

void iniciar_jogo(){
    char nome[30];
    int opcao;

    system("cls");

    // Tela inicial

    printf("Disclaimer: JOGO NAO FUNCIONAL, pois nao funciona sem laco de repeticao");
    printf("\n\nDigite o nome do detetive: ");
    scanf("%s", nome);

    printf("\nBoa sorte, detetive %s.\n\n", nome);

    // Introdução

    printf("============================================================\n");
    printf("                    CASO 01 - O ASSASSINATO               \n");
    printf("                         DA MANSAO OLIVEIRA                 \n");
    printf("============================================================\n\n");

    printf("        |        __________           \n");
    printf("      |         /__________\\           \n");
    printf("     __||_______|    __    |___________\n");
    printf("    /  ||       |  [|__|]  |           \\\n");
    printf("   /____________|__________|____________\\\n");
    printf("   |     __     |    __    |     __     |\n");
    printf("   |   [|__|]   |  [|__|]  |   [|__|]   |\n");
    printf("   |     __     |    __    |     __     |\n");
    printf("   |   [|__|]   | ()|  |() |   [|__|]   |\n");
    printf("___|____________|___|__|___|____________|___\n");

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

     // Suspeitos

    printf("============================================================\n");
    printf("                  SUSPEITOS DA INVESTIGACAO                 \n");
    printf("============================================================\n\n");

    printf("+----------------------------------------------------------+\n");
    printf("| 1. CARLOS OLIVEIRA                                     |\n");
    printf("|    Irmao da vitima.                                    |\n");
    printf("|    Diz que estava na sala assistindo televisao.        |\n");
    printf("+----------------------------------------------------------+\n");

    printf("| 2. MARIANA OLIVEIRA                                   |\n");
    printf("|    Esposa da vitima.                                  |\n");
    printf("|    Afirma que estava na cozinha preparando uma bebida.|\n");
    printf("+----------------------------------------------------------+\n");

    printf("| 3. RICARDO MENDES                                     |\n");
    printf("|    Socio da vitima.                                   |\n");
    printf("|    Afirma que estava no jardim fazendo uma ligacao.   |\n");
    printf("+----------------------------------------------------------+\n");

    printf("| 4. ANA SOUZA                                          |\n");
    printf("|    Funcionaria da mansao.                             |\n");
    printf("|    Afirma que estava organizando objetos na sala.     |\n");
    printf("+----------------------------------------------------------+\n\n");

    printf("============================================================\n");
    printf("                    MENU DO CASO                            \n");
    printf("============================================================\n\n");
    printf("[1]. Explorar os comodos da mansao\n");
    printf("[2]. Interrogar um suspeito\n");
    printf("[3]. Acusar um suspeito (encerrar o caso)\n");
    printf("[4]. Sair sem resolver\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            investigar();
            break;
        case 2:
            conversar();
            break;
        case 3:
            acusacao();
            break;
        case 4:
            sair();
            break;  
        default:
            printf("Opcao invalida!"); 
            break;
    }
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

void investigar(){
    int comodo;

    printf("\nPLANTA PRIMEIRO ANDAR!\n");
    printf("+-----------------+-----------------+----------------+ \n");
    printf("|     . . . escada|                 |   BIBLIOTECA   |-----------]\n");
    printf("|    +------------|                 |                |           ]\n");
    printf("|                 |  SALA DE ESTAR  |                |  JARDIM   ]\n");
    printf("|                 |                 |                |           ]\n");
    printf("|    COZINHA                        |                            ]\n");
    printf("|                                                    +--<     >--]\n");
    printf("|                                                    |\n");
    printf("+-----------------+-----<    >------+----------------+\n");

    printf("\nPLANTA SEGUNDO ANDAR!\n");
    printf("\n+-----------------+-----------------+----------------+ \n");
    printf("|escada . . .                                        |\n");
    printf("|-----------------+                                  |\n");
    printf("|                                                    |\n");
    printf("|                                  QUARTO            |\n");
    printf("|                                                    |\n");
    printf("|   ESCRITORIO    +                                  |\n");
    printf("|                 |                                  |\n");
    printf("+-----------------+-----------------+----------------+\n");

    printf("\n========================================\n"); 
    printf("              INVESTIGACAO\n");
    printf("========================================\n");
    printf("\nEscolha um comodo para investigar: \n");
    printf("\n[1]. Sala de Estar");
    printf("\n[2]. Cozinha");
    printf("\n[3]. Quarto");
    printf("\n[4]. Escritorio (Cena do crime)");
    printf("\n[5]. Jardim");
    printf("\n[6]. Biblioteca");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &comodo);

    switch (comodo){
        case 1:
            printf("\n+-----------------------+\n");
            printf("|_|    _ _______ _    |_|\n");
            printf("|   ()|_|_______|_|()   |\n");
            printf("|    _              _   |\n");
            printf("|   |_|            |_|  |\n");
            printf("                        |\n");
            printf("                         \n");
            printf("      SALA DE ESTAR      \n");
            printf("+--------<    >---------+\n");
        
            printf("\nVoce investigou a sala.");
            printf("\nITEM ENCONTRADO: RELOGIO DE PULSO\n");
            printf("O relogio esta quebrado e pertence a Henrique Oliveira.\n");
            printf("Os ponteiros estao parados exatamente em 23h32.\n");
            
            break;
        case 2:
            printf("\n|      +-----------------|\n");
            printf("|         |______________|\n");
            printf("|__                      |\n");
            printf("|  |      COZINHA        |\n");
            printf("|__|       ______        |\n");
            printf("| |    [] |      | []     \n");
            printf("| |    [] |______| []     \n");
            printf("| |                       \n");
            printf("+------------------------+\n");

            printf("\nVoce investigou a cozinha.");
            printf("\nITEM ENCONTRADO: TACA QUEBRADA\n");
            printf("A taca possui uma pequena mancha de sangue.\n");

            printf("\nA taca estava sendo usada por Mariana naquela noite.\n");
            break;
        case 3:
            printf("\n-------------+-----------------+ \n");
            printf("          |____________________|\n");
            printf("-+                             |\n");
            printf("            QUARTO             |\n");
            printf("           _________           |\n");
            printf("          |         |          |\n");
            printf(" +    __  |  _____  |  __      |\n");
            printf(" |   |  | | |  |  | | |  |     |\n");
            printf("-+-------------+---------------+\n");

            printf("\nVoce investigou o quarto principal.\n");

            printf("\nITEM ENCONTRADO: DOCUMENTO FINANCEIRO\n");

            printf("O documento mostra varias transferencias realizadas\n");
            printf("pela empresa de Henrique.\n");

            printf("\nAlgumas movimentacoes chamam sua atencao.\n");

            printf("O nome de Ricardo Mendes aparece relacionado\n");
            printf("a algumas dessas transacoes.\n");

            printf("\nPISTA:\n");
            printf("Henrique aparentemente estava investigando\n");
            printf("alguma irregularidade financeira.\n");
            
            break;
        case 4:
            printf("\n|-----------------+    \n");
            printf("|__    ESCRITORIO      \n");
            printf("|  |                   \n");
            printf("|  |    ________       \n");
            printf("|  |   |________|   + \n");
            printf("|  |      [__]      | \n");
            printf("+-------------------+-\n");
            
            printf("\nVoce investigou o escritorio.");
            printf("\nITEM ENCONTRADO: BOTAO DE CAMISA\n");

            printf("Um pequeno botao foi encontrado proximo a mesa.\n");

            printf("O botao parece ter sido arrancado durante uma luta.\n");

            printf("\nAo observar os suspeitos, voce percebe que\n");
            printf("Ricardo possui uma camisa com um botao faltando.\n");

            printf("\nITEM ENCONTRADO: DOCUMENTO RASGADO\n");

            printf("Parte do documento apresenta informacoes sobre\n");
            printf("transferencias financeiras suspeitas.\n");

            printf("\nPISTA:\n");
            printf("Henrique provavelmente confrontou alguem\n");
            printf("sobre essas movimentacoes antes de morrer.\n");
            break;
        case 5:
            printf("\n|------------------]\n");
            printf("|   JARDIM      _  ]\n");
            printf("|              (_) ]\n");
            printf("|     _        _|_ ]\n");
            printf("|    (_)       \\_/ ]\n");
            printf("     _|_           ]\n");
            printf("     \\_/           ]\n");
            printf("+------<     >-----]\n");
            printf("\nVoce investigou o jardim.");
            printf("\nITEM ENCONTRADO: CELULAR\n");

            printf("O celular foi encontrado proximo ao banco do jardim.\n");

            printf("O aparelho possui um registro de chamada.\n");

            printf("\nA chamada comecou as 23h36.\n");

            printf("Ricardo afirmou que estava no jardim fazendo\n");
            printf("uma ligacao durante boa parte da noite.\n");

            printf("\nPISTA:\n");
            printf("O relogio encontrado na sala indica 23h32 como\n");
            printf("o horario aproximado do ataque.\n");

            printf("A ligacao de Ricardo comecou somente as 23h36.\n");

            printf("\nExiste uma contradicao no depoimento.\n");
            break;
        case 6:    
            printf("\n+-----------------------+\n");
            printf("|__|_|_|_|_|_|_|_|_|_|_||\n");
            printf("|__|                    |\n");
            printf("|__|    BIBLIOTECA      |\n");
            printf("|__|                    |\n");
            printf("|__|     __     __      |\n");
            printf("|__|    [__]   [__]      \n");
            printf("|__|                     \n");
            printf("          _______       +\n");
            printf("         [_______]      |\n");
            printf("+-----------------------+\n"); 
            
            printf("\nVoce investigou a biblioteca.");
            printf("\nITEM ENCONTRADO: ANOTACAO DE HENRIQUE\n");

            printf("Entre varios documentos, voce encontra uma\n");
            printf("anotacao escrita pela propria vitima.\n");

            printf("\nA anotacao diz:\n");
            printf("\"Investigar novamente as transferencias realizadas por R.M.\"\n");

            printf("\nPISTA:\n");
            printf("As iniciais R.M. correspondem a Ricardo Mendes.\n");

            printf("Henrique estava investigando Ricardo antes de morrer.\n");
            break;
        default:
            printf("\nComodo invalido!");    
            break;
    }
    getchar();
    printf("\n\nPressione Enter para continuar...");
    getchar();
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
