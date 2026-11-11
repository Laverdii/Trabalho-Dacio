#include <stdio.h>
#include <string.h>

#define MAX_ITENS 10

char inventario[MAX_ITENS][40];   // nomes dos itens
int total_itens = 0;              // quantos itens o detetive tem

void limpar_inventario(){
    total_itens = 0;
}

void adicionar_item(char item[]){
    int i;

    // Verifica se o item ja esta no inventario
    for (i = 0; i < total_itens; i++){
        if (strcmp(inventario[i], item) == 0){      //strcmp compara strings
            printf("\n(Voce ja tinha guardado: %s)\n", item);
            return;
        }
    }

    if (total_itens < MAX_ITENS){
        strcpy(inventario[total_itens], item);
        total_itens++;
        printf("\n>> %s foi adicionado ao inventario!\n", item);
    } else {
        printf("\nInventario cheio!\n");
    }
}

void mostrar_inventario(){
    int i;

    printf("\n========================================\n");
    printf("              INVENTARIO\n");
    printf("========================================\n");

    if (total_itens == 0){
        printf("\nVoce ainda nao encontrou nenhum item.\n");
    } else {
        for (i = 0; i < total_itens; i++){
            printf("[%d]. %s\n", i + 1, inventario[i]);
        }
    }
    printf("\nTotal de provas: %d\n", total_itens);
}