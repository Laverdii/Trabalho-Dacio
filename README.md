# Título do Projeto: Jogo de Detetive

## 1. Descrição do Sistema

O projeto consiste em um sistema de jogo de investigação desenvolvido em linguagem C. O sistema permitirá que o jogador escolha entre diferentes casos, cada um com um nível de dificuldade e uma quantidade específica de turnos para solucionar o mistério. Durante a investigação, o jogador poderá explorar cômodos, conversar com suspeitos, coletar pistas e consultar o inventário para reunir informações que auxiliem na descoberta do culpado.

O foco principal é proporcionar uma experiência de investigação baseada na tomada de decisões e no gerenciamento de turnos. Ao longo da partida, o jogador deverá analisar as informações obtidas, definir suas ações e administrar os recursos disponíveis para avançar na investigação. O sistema acompanhará o progresso da partida e, ao final, avaliará a decisão do jogador, determinando o desfecho do caso. Entradas inválidas serão tratadas de forma adequada, mantendo a continuidade e a organização da navegação entre as etapas do jogo.

---

## 2. Fluxo de Utilização Esperado para o Sistema

O fluxo apresentado a seguir representa o funcionamento planejado para o sistema durante as próximas etapas de desenvolvimento. As funcionalidades serão implementadas gradualmente conforme os conteúdos da disciplina forem apresentados e estudados. A versão atual do código contempla apenas parte dessas funcionalidades, de acordo com os conceitos já abordados em aula.

1. Ao iniciar o programa, o usuário visualizará o menu principal com as opções:
   - `1. Jogar`
   - `2. Sair`
2. Caso o usuário escolha `Jogar`, o sistema exibirá o menu de seleção de caso, apresentando a lista de níveis disponíveis com a quantidade de turnos de cada um:
   - `1. Caso 1 (Fácil) - 12 turnos`
   - `2. Caso 2 (Médio) - 8 turnos`
   - `3. Caso 3 (Difícil) - 5 turnos`
   - `4. Voltar ao menu principal`
3. Ao selecionar um caso, o usuário visualizará o contexto/história inicial junto ao menu de ações da investigação:
   - **CONTEXTO - HISTÓRIA** (exibe a narração inicial e as pistas preliminares do caso)
   - `1. Investigar um cômodo`
   - `2. Conversar com um suspeito`
   - `3. Ver inventário`
   - `4. Fazer uma acusação`
   - `5. Desistir do caso`
4. Ao escolher `Investigar um cômodo`, o sistema exibirá a lista de cômodos do caso. Ao selecionar e explorar um cômodo, o jogador poderá encontrar pistas e itens que são adicionados ao inventário. Essa ação consome 1 turno da investigação.
5. Ao escolher `Conversar com um suspeito`, o sistema apresentará a lista de suspeitos disponíveis. Ao interagir, o suspeito pode revelar pistas ou depoimentos que auxiliam na resolução. Essa ação consome 1 turno da investigação.
6. Ao escolher `Ver inventário`, o jogador consulta todos os itens e pistas já coletados durante a investigação. Essa consulta não consome turno.
7. Quando o jogador optar por `Fazer uma acusação`, o sistema solicitará que aponte o culpado entre os suspeitos. Se a acusação estiver correta, o jogador vence o jogo; se estiver incorreta, o caso é encerrado como derrota.
8. Caso escolha `Desistir do caso`, o jogador encerra a partida atual e retorna à tela de seleção de caso.
9. O sistema controla rigorosamente o limite de turnos de cada caso. Ações de investigação consomem turnos; se os turnos se esgotarem sem uma acusação correta, o jogo termina com derrota e exibe a mensagem de fim de jogo.
10. As operações de erro (entradas inválidas, opções inexistentes ou cômodos já explorados) exibirão mensagens claras e retornarão o usuário ao menu correspondente, sem perda do progresso da sessão.
11. Ao escolher `Sair` no menu principal, o programa é encerrado de forma limpa.

---

## 3. Fluxograma da Lógica do Sistema
```mermaid
flowchart TD
    n1((INÍCIO<br/>Execução do programa))
    n2[Exibe Menu Principal<br/>1. Jogar &nbsp;&nbsp;2. Sair]
    n3{Opção escolhida?}
    n4((FIM<br/>Programa encerrado<br/>de forma limpa))
    errMain[/Entrada inválida<br/>Exibe erro e reexibe Menu Principal/]

    n5[Exibe Menu de Seleção de Caso<br/>1. Caso 1 Fácil - 12 turnos<br/>2. Caso 2 Médio - 8 turnos<br/>3. Caso 3 Difícil - 5 turnos<br/>4. Voltar ao menu principal]
    n6{Opção selecionada?}
    errCase[/Opção inexistente<br/>Exibe erro e reexibe seleção de caso/]

    n7[Carrega caso: define turnos e exibe<br/>CONTEXTO/HISTÓRIA + pistas preliminares]
    n8[Exibe Menu de Ações<br/>1. Investigar cômodo &nbsp;2. Conversar c/ suspeito<br/>3. Ver inventário &nbsp;4. Fazer acusação &nbsp;5. Desistir]
    n9{Ação escolhida?}
    errAction[/Opção inválida<br/>Exibe erro e reexibe Menu de Ações/]

    n10[Exibe lista de cômodos do caso atual]
    n11{Cômodo já<br/>foi explorado?}
    n12[/Erro: cômodo já explorado<br/>retorna à lista, sem consumir turno/]
    n13[Explora cômodo: revela pistas/itens]
    n14[Consome 1 turno]

    n18[Exibe lista de suspeitos]
    n19[Suspeito interage: revela<br/>pista ou depoimento]
    n20[Consome 1 turno]

    n21[Exibe itens e pistas coletados<br/>NÃO consome turno]

    n15{Turnos restantes<br/>> 0?}
    n16((DERROTA<br/>Turnos esgotados<br/>sem acusação correta))

    n22[Solicita ao jogador que<br/>aponte o suspeito culpado]
    n23{Acusação correta?}
    n24((VITÓRIA!<br/>Jogador acerta o culpado))
    n25((DERROTA<br/>Acusação incorreta))
    n26[Encerra partida atual<br/>Desistir do caso]

    n1 --> n2 --> n3
    n3 -->|1. Jogar| n5
    n3 -->|2. Sair| n4
    n3 -->|Opção inválida| errMain --> n2

    n5 --> n6
    n6 -->|1/2/3. Seleciona caso| n7
    n6 -->|4. Voltar ao menu principal| n2
    n6 -->|Opção inexistente| errCase --> n5

    n7 --> n8 --> n9

    n9 -->|1. Investigar cômodo| n10
    n9 -->|2. Conversar c/ suspeito| n18
    n9 -->|3. Ver inventário| n21
    n9 -->|4. Fazer acusação| n22
    n9 -->|5. Desistir| n26
    n9 -->|Opção inválida| errAction --> n8

    n10 --> n11
    n11 -->|Sim| n12 --> n10
    n11 -->|Não| n13 --> n14 --> n15

    n18 --> n19 --> n20 --> n15

    n21 -->|Retorna sem turno| n8

    n15 -->|Turnos = 0| n16
    n15 -->|Turnos > 0| n8
    n16 -->|Retorna à seleção de caso| n5

    n22 --> n23
    n23 -->|Sim, correto| n24
    n23 -->|Não, incorreto| n25
    n24 -->|Retorna à seleção de caso| n5
    n25 -->|Retorna à seleção de caso| n5
    n26 -->|Retorna à seleção de caso| n5
```
---

## 4. Estrutura de Dados
Estruturas de dados planejadas: as estruturas abaixo representam a organização dos dados prevista para as próximas etapas do desenvolvimento. Sua implementação ocorrerá conforme os conteúdos necessários forem apresentados na disciplina.

O sistema utilizará estruturas heterogêneas (struct) para organizar as principais informações utilizadas durante a investigação. As estruturas previstas são:

```c
// Estrutura para armazenamento dos casos
typedef struct {
    char titulo[80];
    char historia[500];
    int culpado;
    char resolucao[500];
} Caso;

// Estrutura para armazenamento dos personagens
typedef struct {
    char nome[40];
    char papel[40];
    char fala[500];
    int suspeito;
} Personagem;

// Estrutura para armazenamento das pistas
typedef struct {
    char descricao[500];
    char item[60];
    int encontrada;
} Pista;

// Estrutura para armazenamento dos cômodos
typedef struct {
    char nome[40];
    char descricao[200];
    Pista pistas[3];
    int explorado;
} Comodo;

// Estrutura para controle da investigação
typedef struct {
    Caso caso;
    int dificuldade;
    int turnos_restantes;
    int caso_resolvido;
} Investigacao;
