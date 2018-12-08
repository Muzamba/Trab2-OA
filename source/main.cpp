#include <iostream>
#include "ArvoreB.h"

int main(int argc, char const *argv[]) {

    if (argc < 2) {
        printf("Argumentos insuficientes! Passe o nome do arquivo que deseja trabalhar.\n");
    }
    int ordem_Btree, opcao;
    printf("Insira a ordem que você deseja que a árvore tenha: \n");
    scanf("%d", &ordem_Btree);
    printf("\n------------------------------------------------\n\n");
    printf("Voce abriu o arquivo %s", argv[1]);
    printf("Selecione a opção desejada abaixo: \n\n");
    printf("(1) - Mostrar arquivo de índices primários");
    printf("(2) - Buscar registro");
    printf("(3) - Incluir registro");
    printf("(4) - Excluir registro");
    scanf("%d", &opcao);
    ArvoreB* arvore;
    arvore = new ArvoreB("output.txt");

    switch (opcao) {
        case 1:
            printArq();s
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
    } 
    

    delete arvore;
    return 0;

}
