// ============================================================
//  historias.h - Biblioteca de historias do Jogo de Detetive
//
//  Cada historia possui 4 funcoes:
//    historiaX_introducao()  -> apresenta o caso e os suspeitos
//    historiaX_investigar()  -> explorar os locais (retorna 1 se gastou turno)
//    historiaX_conversar()   -> interrogar suspeitos (retorna 1 se gastou turno)
//    historiaX_acusacao()    -> acusar um suspeito
//
//  Precisa do inventario.h incluido antes deste arquivo.
// ============================================================

#include <stdio.h>
#include <stdlib.h>

void pausar(){
    getchar();
    printf("\n\nPressione Enter para continuar...");
    getchar();
}

// ============================================================
//            CASO 01 - O ASSASSINATO DA MANSAO OLIVEIRA
//            Culpado: Ricardo Mendes  |  Provas necessarias: 4
// ============================================================

void historia1_introducao(){
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
}

int historia1_conversar(){
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
            printf("\nOpcao invalida! (nenhum turno foi gasto)\n");
            pausar();
            return 0;
    }
    pausar();
    return 1;
}

int historia1_investigar(){
    int comodo;

    system("cls");

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
            adicionar_item("Relogio de pulso (23h32)");
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
            adicionar_item("Taca quebrada");
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
            adicionar_item("Documento financeiro");
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
            adicionar_item("Botao de camisa");

            printf("\nITEM ENCONTRADO: DOCUMENTO RASGADO\n");

            printf("Parte do documento apresenta informacoes sobre\n");
            printf("transferencias financeiras suspeitas.\n");

            printf("\nPISTA:\n");
            printf("Henrique provavelmente confrontou alguem\n");
            printf("sobre essas movimentacoes antes de morrer.\n");
            adicionar_item("Documento rasgado");
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
            adicionar_item("Celular (ligacao 23h36)");
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
            adicionar_item("Anotacao de Henrique (R.M.)");
            break;
        default:
            printf("\nComodo invalido! (nenhum turno foi gasto)");
            pausar();
            return 0;
    }
    pausar();
    return 1;
}

void historia1_acusacao(){
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

            // Precisa de provas suficientes no inventario
            if (total_itens < 4){
                printf("\nVoce acertou o suspeito, mas tem apenas %d prova(s).\n", total_itens);
                printf("O juiz precisava de pelo menos 4 provas.\n");
                printf("Ricardo foi liberado por falta de evidencias.\n");
                printf("\nCASO NAO RESOLVIDO.\n");
                break;
            }

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
    pausar();
}

// ============================================================
//            CASO 02 - O ROUBO DO MUSEU MUNICIPAL
//            Culpada: Beatriz Lima  |  Provas necessarias: 3
// ============================================================

void historia2_introducao(){
    printf("============================================================\n");
    printf("                    CASO 02 - O ROUBO                       \n");
    printf("                     DO MUSEU MUNICIPAL                     \n");
    printf("============================================================\n\n");

    printf("            ____________________________\n");
    printf("           /                            \\\n");
    printf("          /__________MUSEU_______________\\\n");
    printf("           |  ||  |  ||  |  ||  |  ||  |\n");
    printf("           |  ||  |  ||  |  ||  |  ||  |\n");
    printf("           |  ||  |  ||  |  ||  |  ||  |\n");
    printf("        ___|__||__|__||__|__||__|__||__|___\n\n");

    printf("Sao 07h00 de uma segunda-feira.\n\n");

    printf("Ao abrir o Museu Municipal, os funcionarios descobriram\n");
    printf("que o diamante \"Estrela do Sul\" desapareceu da vitrine.\n\n");

    printf("A vitrine nao foi quebrada. Ela foi aberta com uma chave.\n");
    printf("Cinco pessoas estiveram no museu durante a noite.\n\n");

    printf("Sua missao e descobrir quem roubou o diamante.\n\n");

    printf("============================================================\n");
    printf("                  SUSPEITOS DA INVESTIGACAO                 \n");
    printf("============================================================\n\n");

    printf("+----------------------------------------------------------+\n");
    printf("| 1. PAULO RAMOS                                           |\n");
    printf("|    Seguranca noturno.                                    |\n");
    printf("|    Diz que passou a noite na guarita.                    |\n");
    printf("+----------------------------------------------------------+\n");

    printf("| 2. BEATRIZ LIMA                                          |\n");
    printf("|    Curadora do museu.                                    |\n");
    printf("|    Afirma que foi embora as 22h.                         |\n");
    printf("+----------------------------------------------------------+\n");

    printf("| 3. JORGE TAVARES                                         |\n");
    printf("|    Zelador.                                              |\n");
    printf("|    Diz que estava limpando o segundo andar.              |\n");
    printf("+----------------------------------------------------------+\n");

    printf("| 4. FERNANDO COSTA                                        |\n");
    printf("|    Diretor do museu.                                     |\n");
    printf("|    Diz que passou na sala dele so para pegar papeis.     |\n");
    printf("+----------------------------------------------------------+\n");

    printf("| 5. CLARA NUNES                                           |\n");
    printf("|    Restauradora de obras de arte.                        |\n");
    printf("|    Afirma que trabalhou no atelie ate as 21h.            |\n");
    printf("+----------------------------------------------------------+\n\n");
}

int historia2_conversar(){
    int pessoa;

    system("cls");

    printf("\n========================================\n");
    printf("        CONVERSAR COM O SUSPEITO\n");
    printf("========================================\n");
    printf("\n[1]. PAULO RAMOS");
    printf("\n[2]. BEATRIZ LIMA");
    printf("\n[3]. JORGE TAVARES");
    printf("\n[4]. FERNANDO COSTA");
    printf("\n[5]. CLARA NUNES");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &pessoa);

    switch (pessoa){
        case 1:
            printf("\nPaulo parece envergonhado.\n");
            printf("\nPaulo Ramos: ");
            printf("- Tomei um cafe que deixaram na guarita e\n");
            printf("senti muito sono. Acordei so de manha.\n");
            printf("Nao sei quem deixou o cafe la.\n");
            break;
        case 2:
            printf("\nBeatriz responde rapido demais.\n");
            printf("Voce sente um forte perfume floral.\n");
            printf("\nBeatriz Lima: ");
            printf("- Sai as 22h, como sempre.\n");
            printf("Sou a unica com o codigo das cameras, mas\n");
            printf("eu jamais roubaria o museu.\n");
            break;
        case 3:
            printf("\nJorge fala com calma.\n");
            printf("\nJorge Tavares: ");
            printf("- Por volta das 2h vi uma luz acesa no\n");
            printf("escritorio da curadoria. Achei estranho,\n");
            printf("porque a doutora ja tinha ido embora.\n");
            break;
        case 4:
            printf("\nFernando parece irritado com as perguntas.\n");
            printf("\nFernando Costa: ");
            printf("- O museu esta cheio de dividas, e verdade.\n");
            printf("Mas passei a noite num jantar com patrocinadores.\n");
            printf("So vim aqui as 20h pegar uns papeis.\n");
            break;
        case 5:
            printf("\nClara fala baixo, com medo de se complicar.\n");
            printf("\nClara Nunes: ");
            printf("- Fui embora as 21h. Mas semana passada a\n");
            printf("doutora Beatriz pegou cera do meu atelie.\n");
            printf("Disse que era para fazer um molde.\n");
            break;
        default:
            printf("\nOpcao invalida! (nenhum turno foi gasto)\n");
            pausar();
            return 0;
    }
    pausar();
    return 1;
}

int historia2_investigar(){
    int local;

    system("cls");

    printf("\nPLANTA DO MUSEU!\n");
    printf("+----------------+----------------+----------------+\n");
    printf("|                |                |                |\n");
    printf("|    GUARITA     |    SALA DE     |   ESCRITORIO   |\n");
    printf("|                |   SEGURANCA    |   CURADORIA    |\n");
    printf("+------<  >------+------<  >------+------<  >------+\n");
    printf("|                                                  |\n");
    printf("|                 SALAO PRINCIPAL                  |\n");
    printf("|                   [ VITRINE ]                    |\n");
    printf("+------<  >------+----------------+------<  >------+\n");
    printf("|    SALA DO     |                |   ATELIE DE    |\n");
    printf("|    DIRETOR     |    ENTRADA     |  RESTAURACAO   |\n");
    printf("+----------------+-----<    >-----+----------------+\n");

    printf("\n========================================\n");
    printf("              INVESTIGACAO\n");
    printf("========================================\n");
    printf("\n[1]. Salao principal (Vitrine)");
    printf("\n[2]. Sala de seguranca");
    printf("\n[3]. Escritorio da curadoria");
    printf("\n[4]. Guarita");
    printf("\n[5]. Sala do diretor");
    printf("\n[6]. Atelie de restauracao");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &local);

    switch (local){
        case 1:
            printf("\n+---------------------------+\n");
            printf("|  [=]      [=]      [=]    |\n");
            printf("|                           |\n");
            printf("|        ___________        |\n");
            printf("|       |  VITRINE  |       |\n");
            printf("|       |  (vazia)  |       |\n");
            printf("|       |___________|       |\n");
            printf("|          |     |          |\n");
            printf("|      SALAO PRINCIPAL      |\n");
            printf("+----------<     >----------+\n");

            printf("\nVoce investigou o salao principal.\n");
            printf("\nITEM ENCONTRADO: LUVA BRANCA\n");
            printf("Uma luva caida atras da vitrine.\n");
            printf("Ela tem um forte cheiro de perfume floral.\n");
            adicionar_item("Luva branca perfumada");
            break;
        case 2:
            printf("\n+---------------------------+\n");
            printf("|  ______   ______   ______ |\n");
            printf("| |cam 1 | |cam 2 | |cam 3 ||\n");
            printf("| |______| |______| |______||\n");
            printf("|                           |\n");
            printf("|   ____________________    |\n");
            printf("|  |__PAINEL______[o]___|   |\n");
            printf("|                           |\n");
            printf("|     SALA DE SEGURANCA     |\n");
            printf("+----------<     >----------+\n");

            printf("\nVoce investigou a sala de seguranca.\n");
            printf("\nITEM ENCONTRADO: REGISTRO DAS CAMERAS\n");
            printf("As cameras foram desligadas as 02h10.\n");
            printf("Foi usado o codigo de acesso da curadoria.\n");
            adicionar_item("Registro das cameras");
            break;
        case 3:
            printf("\n+---------------------------+\n");
            printf("| |=|=|=|=|           ___   |\n");
            printf("| |=|=|=|=|          |   |  |\n");
            printf("|                    |___|  |\n");
            printf("|      ____________         |\n");
            printf("|     |____________|  []    |\n");
            printf("|       |        |          |\n");
            printf("|   ESCRITORIO CURADORIA    |\n");
            printf("+----------<     >----------+\n");

            printf("\nVoce investigou o escritorio da curadoria.\n");
            printf("\nITEM ENCONTRADO: PASSAGEM AEREA\n");
            printf("Uma passagem para Lisboa, saindo hoje a tarde,\n");
            printf("no nome de Beatriz Lima. Comprada ha dois dias.\n");
            adicionar_item("Passagem aerea");
            break;
        case 4:
            printf("\n+-------------------+\n");
            printf("|   ___________     |\n");
            printf("|  |  [ TV ]   |    |\n");
            printf("|  |___________|    |\n");
            printf("|                   |\n");
            printf("|    _____    (c)   |\n");
            printf("|   [_____]  cafe   |\n");
            printf("|      GUARITA      |\n");
            printf("+-------<   >-------+\n");

            printf("\nVoce investigou a guarita.\n");
            printf("\nITEM ENCONTRADO: COPO DE CAFE\n");
            printf("O copo tem restos de um remedio para dormir.\n");
            printf("Alguem queria o seguranca dormindo.\n");
            adicionar_item("Copo de cafe com remedio");
            break;
        case 5:
            printf("\n+---------------------------+\n");
            printf("|   _____________      _    |\n");
            printf("|  |   QUADRO    |    | |   |\n");
            printf("|  |_____________|    |_|   |\n");
            printf("|                           |\n");
            printf("|     ______________        |\n");
            printf("|    |______________|       |\n");
            printf("|      |          |         |\n");
            printf("|      SALA DO DIRETOR      |\n");
            printf("+----------<     >----------+\n");

            printf("\nVoce investigou a sala do diretor.\n");
            printf("\nITEM ENCONTRADO: RECIBO DE RESTAURANTE\n");
            printf("O recibo mostra que Fernando pagou a conta\n");
            printf("de um jantar as 03h15 da manha.\n");
            printf("\nPISTA:\n");
            printf("Fernando estava longe do museu na hora do roubo.\n");
            adicionar_item("Recibo de restaurante (03h15)");
            break;
        case 6:
            printf("\n+---------------------------+\n");
            printf("|      /\\                   |\n");
            printf("|     /  \\    ___________   |\n");
            printf("|    /____\\  |  QUADRO   |  |\n");
            printf("|     |  |   |___________|  |\n");
            printf("|     |  |                  |\n");
            printf("|  [tintas]  [pinceis] [cera]\n");
            printf("|   ATELIE DE RESTAURACAO   |\n");
            printf("+----------<     >----------+\n");

            printf("\nVoce investigou o atelie de restauracao.\n");
            printf("\nITEM ENCONTRADO: MOLDE DE CERA\n");
            printf("Um molde com o formato da chave da vitrine.\n");
            printf("Na caixa esta escrito: \"B.L.\"\n");
            printf("\nPISTA:\n");
            printf("Alguem fez uma copia da chave da vitrine.\n");
            adicionar_item("Molde de cera (B.L.)");
            break;
        default:
            printf("\nLocal invalido! (nenhum turno foi gasto)\n");
            pausar();
            return 0;
    }
    pausar();
    return 1;
}

void historia2_acusacao(){
    int suspeito;

    system("cls");

    printf("\n========================================\n");
    printf("              ACUSACAO\n");
    printf("========================================\n");
    printf("\n[1]. Paulo Ramos");
    printf("\n[2]. Beatriz Lima");
    printf("\n[3]. Jorge Tavares");
    printf("\n[4]. Fernando Costa");
    printf("\n[5]. Clara Nunes");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &suspeito);

    switch (suspeito){
        case 1:
            printf("\nVoce acusou Paulo Ramos.\n");
            printf("Paulo dormiu em servico, mas foi drogado.\n");
            printf("Ele nao tinha a chave da vitrine.\n");
            printf("\nCASO NAO RESOLVIDO.\n");
            break;
        case 2:
            printf("\nVoce acusou Beatriz Lima.\n");

            if (total_itens < 3){
                printf("\nVoce acertou a suspeita, mas tem apenas %d prova(s).\n", total_itens);
                printf("Eram necessarias pelo menos 3 provas.\n");
                printf("Beatriz embarcou para Lisboa com o diamante.\n");
                printf("\nCASO NAO RESOLVIDO.\n");
                break;
            }

            printf("\n[1] As cameras foram desligadas com o codigo da curadoria.\n");
            printf("[2] A luva perto da vitrine tem o perfume de Beatriz.\n");
            printf("[3] O molde da chave da vitrine tinha as iniciais B.L.\n");
            printf("[4] O cafe do seguranca tinha remedio para dormir.\n");
            printf("[5] Ela comprou uma passagem para fugir do pais.\n");
            printf("\nO diamante foi encontrado na bolsa de Beatriz.\n");
            printf("\nCASO RESOLVIDO!!!!\n");
            break;
        case 3:
            printf("\nVoce acusou Jorge Tavares.\n");
            printf("Jorge foi quem viu a luz no escritorio.\n");
            printf("Nenhuma prova o liga ao roubo.\n");
            printf("\nCASO NAO RESOLVIDO.\n");
            break;
        case 4:
            printf("\nVoce acusou Fernando Costa.\n");
            printf("O museu tinha dividas, mas o recibo mostra que\n");
            printf("Fernando estava num restaurante na hora do roubo.\n");
            printf("\nCASO NAO RESOLVIDO.\n");
            break;
        case 5:
            printf("\nVoce acusou Clara Nunes.\n");
            printf("A cera era do atelie de Clara, mas quem a usou\n");
            printf("para copiar a chave foi outra pessoa.\n");
            printf("\nCASO NAO RESOLVIDO.\n");
            break;
        default:
            printf("\nSuspeito invalido!\n");
            break;
    }
    pausar();
}

// ============================================================
//            CASO 03 - O ENVENENAMENTO NO TREM NOTURNO
//            Culpada: Lucia Prado  |  Provas necessarias: 3
// ============================================================

void historia3_introducao(){
    printf("============================================================\n");
    printf("                  CASO 03 - O ENVENENAMENTO                 \n");
    printf("                      NO TREM NOTURNO                       \n");
    printf("============================================================\n\n");

    printf("      ____      ________________   ________________\n");
    printf("     |    |____|  []  []  []    |_|  []  []  []    |\n");
    printf("     |  __     |                | |                |\n");
    printf("     |_|__|____|________________|_|________________|\n");
    printf("       (O)  (O)    (O)    (O)       (O)    (O)\n\n");

    printf("Sao 23h15. O trem noturno segue viagem para o sul.\n\n");

    printf("O medico Augusto Ferraz foi encontrado morto\n");
    printf("em sua cabine. Ao lado dele, uma xicara de cha.\n\n");

    printf("O trem so para na proxima estacao em algumas horas.\n");
    printf("O culpado ainda esta a bordo.\n\n");

    printf("============================================================\n");
    printf("                  SUSPEITOS DA INVESTIGACAO                 \n");
    printf("============================================================\n\n");

    printf("+----------------------------------------------------------+\n");
    printf("| 1. HELENA FERRAZ                                         |\n");
    printf("|    Filha da vitima.                                      |\n");
    printf("|    Diz que estava lendo no vagao restaurante.            |\n");
    printf("+----------------------------------------------------------+\n");

    printf("| 2. OTAVIO BRANDAO                                        |\n");
    printf("|    Garcom do trem.                                       |\n");
    printf("|    Preparou o cha da vitima.                             |\n");
    printf("+----------------------------------------------------------+\n");

    printf("| 3. LUCIA PRADO                                           |\n");
    printf("|    Enfermeira particular da vitima.                      |\n");
    printf("|    Afirma que nao saiu da propria cabine.                |\n");
    printf("+----------------------------------------------------------+\n");

    printf("| 4. ROGERIO ALVES                                         |\n");
    printf("|    Advogado da vitima.                                   |\n");
    printf("|    Diz que estava dormindo na cabine dele.               |\n");
    printf("+----------------------------------------------------------+\n");

    printf("| 5. MARTA SILVA                                           |\n");
    printf("|    Passageira da segunda classe.                         |\n");
    printf("|    Ja foi paciente do doutor Augusto.                    |\n");
    printf("+----------------------------------------------------------+\n\n");
}

int historia3_conversar(){
    int pessoa;

    system("cls");

    printf("\n========================================\n");
    printf("        CONVERSAR COM O SUSPEITO\n");
    printf("========================================\n");
    printf("\n[1]. HELENA FERRAZ");
    printf("\n[2]. OTAVIO BRANDAO");
    printf("\n[3]. LUCIA PRADO");
    printf("\n[4]. ROGERIO ALVES");
    printf("\n[5]. MARTA SILVA");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &pessoa);

    switch (pessoa){
        case 1:
            printf("\nHelena chora durante a conversa.\n");
            printf("\nHelena Ferraz: ");
            printf("- Discuti com meu pai hoje sobre o testamento.\n");
            printf("Ele mudou tudo recentemente, mas eu nunca\n");
            printf("faria mal a ele.\n");
            break;
        case 2:
            printf("\nOtavio parece assustado.\n");
            printf("\nOtavio Brandao: ");
            printf("- Eu preparei o cha as 22h, sim.\n");
            printf("Mas a enfermeira disse que ela mesma\n");
            printf("levaria a xicara para o doutor.\n");
            break;
        case 3:
            printf("\nLucia evita olhar nos seus olhos.\n");
            printf("\nLucia Prado: ");
            printf("- Fiquei na minha cabine a noite toda.\n");
            printf("Nem vi o doutor depois do jantar.\n");
            break;
        case 4:
            printf("\nRogerio ajeita a gravata antes de responder.\n");
            printf("\nRogerio Alves: ");
            printf("- No jantar, o doutor me disse que ia mudar\n");
            printf("o testamento de novo assim que chegasse.\n");
            printf("A enfermeira estava na mesa e ouviu tudo.\n");
            break;
        case 5:
            printf("\nMarta nao esconde a raiva.\n");
            printf("\nMarta Silva: ");
            printf("- Aquele medico errou na minha cirurgia.\n");
            printf("Eu odiava ele, nao vou mentir.\n");
            printf("Mas nao sai do meu vagao. O condutor\n");
            printf("trancou a porta entre os vagoes as 21h.\n");
            break;
        default:
            printf("\nOpcao invalida! (nenhum turno foi gasto)\n");
            pausar();
            return 0;
    }
    pausar();
    return 1;
}

int historia3_investigar(){
    int local;

    system("cls");

    printf("\nPLANTA DO TREM!\n");
    printf(" __________ ___________ _____________ __________ __________ __________\n");
    printf("|          |           |             |          |          |          |\n");
    printf("| BAGAGENS | 2a CLASSE | RESTAURANTE |  CABINE  |  CABINE  |  CABINE  |\n");
    printf("|  [] []   |  : : : :  |  o-o   o-o  |  DOUTOR  |  LUCIA   | ADVOGADO |\n");
    printf("|__________|___________|_____________|__________|__________|__________|\n");
    printf("   (O)  (O)   (O)  (O)    (O)   (O)    (O)  (O)   (O)  (O)   (O)  (O)\n");

    printf("\n========================================\n");
    printf("              INVESTIGACAO\n");
    printf("========================================\n");
    printf("\n[1]. Cabine da vitima (Cena do crime)");
    printf("\n[2]. Vagao restaurante");
    printf("\n[3]. Cabine de Lucia");
    printf("\n[4]. Vagao de bagagens");
    printf("\n[5]. Cabine do advogado");
    printf("\n[6]. Vagao da segunda classe");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &local);

    switch (local){
        case 1:
            printf("\n+---------------------------+\n");
            printf("|   ____         _______    |\n");
            printf("|  |    |       | () () |   |\n");
            printf("|  |____|       |_______|   |\n");
            printf("|  ______________________   |\n");
            printf("| |       CAMA           |  |\n");
            printf("| |______________________|  |\n");
            printf("|      CABINE DO DOUTOR  (u)|\n");
            printf("+----------<     >----------+\n");

            printf("\nVoce investigou a cabine da vitima.\n");
            printf("\nITEM ENCONTRADO: XICARA DE CHA\n");
            printf("O cha tem um cheiro amargo de amendoas.\n");
            printf("Sinal de veneno.\n");
            adicionar_item("Xicara de cha envenenada");
            break;
        case 2:
            printf("\n+---------------------------+\n");
            printf("|  [ ]  [ ]   |   [ ]  [ ]  |\n");
            printf("|   _______   |   _______   |\n");
            printf("|  |_______|  |  |_______|  |\n");
            printf("|   o     o   |   o     o   |\n");
            printf("|  ___________|___________  |\n");
            printf("| |___BALCAO____[cha]_____| |\n");
            printf("|     VAGAO RESTAURANTE     |\n");
            printf("+----------<     >----------+\n");

            printf("\nVoce investigou o vagao restaurante.\n");
            printf("\nITEM ENCONTRADO: CADERNO DE PEDIDOS\n");
            printf("Anotacao do garcom: \"22h - cha do doutor.\n");
            printf("Entregue para a enfermeira levar.\"\n");
            adicionar_item("Caderno de pedidos");
            break;
        case 3:
            printf("\n+---------------------------+\n");
            printf("|   ____                    |\n");
            printf("|  |    |      ________     |\n");
            printf("|  |____|     | MALA   |    |\n");
            printf("|             |________|    |\n");
            printf("|  ______________________   |\n");
            printf("| |       CAMA           |  |\n");
            printf("| |______________________|  |\n");
            printf("|      CABINE DE LUCIA      |\n");
            printf("+----------<     >----------+\n");

            printf("\nVoce investigou a cabine de Lucia.\n");
            printf("\nITEM ENCONTRADO: FRASCO VAZIO\n");
            printf("Um pequeno frasco sem rotulo, escondido\n");
            printf("na mala. Tem o mesmo cheiro de amendoas.\n");
            adicionar_item("Frasco vazio");
            break;
        case 4:
            printf("\n+---------------------------+\n");
            printf("|  ____   ____    ______    |\n");
            printf("| |    | |    |  |      |   |\n");
            printf("| |____| |____|  |______|   |\n");
            printf("|  ______    ____   ____    |\n");
            printf("| |      |  |    | |    |   |\n");
            printf("| |______|  |____| |____|   |\n");
            printf("|     VAGAO DE BAGAGENS     |\n");
            printf("+----------<     >----------+\n");

            printf("\nVoce investigou o vagao de bagagens.\n");
            printf("\nITEM ENCONTRADO: CARTA DO DOUTOR\n");
            printf("Augusto escreveu ao advogado: \"Ao chegar,\n");
            printf("quero retirar Lucia do testamento.\"\n");
            adicionar_item("Carta do doutor");
            break;
        case 5:
            printf("\n+---------------------------+\n");
            printf("|   ____       __________   |\n");
            printf("|  |    |     |  PASTA   |  |\n");
            printf("|  |____|     |__________|  |\n");
            printf("|  ______________________   |\n");
            printf("| |       CAMA           |  |\n");
            printf("| |______________________|  |\n");
            printf("|    CABINE DO ADVOGADO     |\n");
            printf("+----------<     >----------+\n");

            printf("\nVoce investigou a cabine do advogado.\n");
            printf("\nITEM ENCONTRADO: TESTAMENTO ATUAL\n");
            printf("Pelo testamento atual, Lucia Prado herda\n");
            printf("metade de toda a fortuna do doutor.\n");
            printf("\nPISTA:\n");
            printf("Se o testamento mudasse, Lucia perderia tudo.\n");
            adicionar_item("Testamento atual");
            break;
        case 6:
            printf("\n+---------------------------+\n");
            printf("|  [ ]   [ ]   [ ]   [ ]    |\n");
            printf("|  _|_   _|_   _|_   _|_    |\n");
            printf("| |___| |___| |___| |___|   |\n");
            printf("|                           |\n");
            printf("|  _|_   _|_   _|_   _|_    |\n");
            printf("| |___| |___| |___| |___|   |\n");
            printf("|  VAGAO DA SEGUNDA CLASSE  |\n");
            printf("+----------<  X  >----------+\n");

            printf("\nVoce investigou o vagao da segunda classe.\n");
            printf("\nITEM ENCONTRADO: RECORTE DE JORNAL\n");
            printf("Uma noticia sobre o processo de Marta Silva\n");
            printf("contra o doutor Augusto por erro medico.\n");
            printf("\nPISTA:\n");
            printf("A porta deste vagao estava trancada desde as 21h.\n");
            printf("Marta nao conseguiria chegar a cabine do doutor.\n");
            adicionar_item("Recorte de jornal");
            break;
        default:
            printf("\nLocal invalido! (nenhum turno foi gasto)\n");
            pausar();
            return 0;
    }
    pausar();
    return 1;
}

void historia3_acusacao(){
    int suspeito;

    system("cls");

    printf("\n========================================\n");
    printf("              ACUSACAO\n");
    printf("========================================\n");
    printf("\n[1]. Helena Ferraz");
    printf("\n[2]. Otavio Brandao");
    printf("\n[3]. Lucia Prado");
    printf("\n[4]. Rogerio Alves");
    printf("\n[5]. Marta Silva");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &suspeito);

    switch (suspeito){
        case 1:
            printf("\nVoce acusou Helena Ferraz.\n");
            printf("Helena discutiu com o pai, mas nunca tocou no cha.\n");
            printf("\nCASO NAO RESOLVIDO.\n");
            break;
        case 2:
            printf("\nVoce acusou Otavio Brandao.\n");
            printf("Otavio preparou o cha, mas nao foi ele quem o entregou.\n");
            printf("\nCASO NAO RESOLVIDO.\n");
            break;
        case 3:
            printf("\nVoce acusou Lucia Prado.\n");

            if (total_itens < 3){
                printf("\nVoce acertou a suspeita, mas tem apenas %d prova(s).\n", total_itens);
                printf("Eram necessarias pelo menos 3 provas.\n");
                printf("Lucia desceu na estacao e desapareceu.\n");
                printf("\nCASO NAO RESOLVIDO.\n");
                break;
            }

            printf("\n[1] O cha estava envenenado.\n");
            printf("[2] Lucia levou o cha ate a cabine do doutor.\n");
            printf("[3] O frasco do veneno estava na mala dela.\n");
            printf("[4] Pelo testamento atual, ela herdaria metade da fortuna.\n");
            printf("[5] O doutor ia retira-la do testamento ao chegar.\n");
            printf("\nLucia confessa o crime.\n");
            printf("\nCASO RESOLVIDO!!!!\n");
            break;
        case 4:
            printf("\nVoce acusou Rogerio Alves.\n");
            printf("Rogerio sabia do testamento, mas nao ganharia\n");
            printf("nada com a morte do doutor.\n");
            printf("\nCASO NAO RESOLVIDO.\n");
            break;
        case 5:
            printf("\nVoce acusou Marta Silva.\n");
            printf("Marta tinha motivo, mas a porta do vagao dela\n");
            printf("estava trancada a noite toda.\n");
            printf("\nCASO NAO RESOLVIDO.\n");
            break;
        default:
            printf("\nSuspeito invalido!\n");
            break;
    }
    pausar();
}
