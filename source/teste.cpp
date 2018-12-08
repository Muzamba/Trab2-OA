#include "ArvoreB.h"

int main(int argc, char const *argv[])
{
    ArvoreB* arvore;

    arvore = new ArvoreB("sla.txt");

    arvore->insert("abc87654321");
    arvore->insert("def12345678");
    printf("\n");

    delete arvore;
    return 0;
}
