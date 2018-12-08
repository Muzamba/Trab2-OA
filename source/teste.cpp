#include "ArvoreB.h"

int main(int argc, char const *argv[])
{
    ArvoreB* arvore;

    arvore = new ArvoreB("sla.txt");

    arvore->insert("def12345");
    arvore->insert("abc87654");
    
    printf("\n");

    delete arvore;
    return 0;
}
