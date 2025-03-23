#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int CLIENTES_QTD = 10;

typedef struct {
    char nome[100];
    int idade;
    char email[100];
}Cliente;

int show_menu(){

    int opcao_menu;

    printf("\n\n1- Adicionar");

    printf("\n2- Atualizar");

    printf("\n3- Listar");

    printf("\n4- Remover");

    printf("\n0- Sair");

    printf("\n\nEscolha uma das opcoes acima: ");
    scanf("%d", &opcao_menu);

    return opcao_menu;
}

int main()
{

    int opcao_menu = -1, i;
    Cliente cliente[CLIENTES_QTD];

    while(opcao_menu != 0){

        opcao_menu = show_menu();

        switch(opcao_menu){

        case 0:

            printf("\n\nSaindo...\n");
            break;

        case 1:
        
            printf("\n\nAdicionando...\n");
            break;

        case 2:

            printf("\n\nAtualizando...");
            break;

        case 3:

            printf("\n\nListando...");
            break;
            
        case 4:
            printf("\n\nRemovendo...");
            break;

        }
    }

    return 0;
}
