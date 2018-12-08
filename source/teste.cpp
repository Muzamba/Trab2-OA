#include "ArvoreB.h"

int main(int argc, char const *argv[])
{
    ArvoreB* arvore, *teste;

    arvore = new ArvoreB("sla.txt");
    teste = new ArvoreB("baba.txt");

   /* arvore->insert("def12345");
    arvore->insert("abc87654");
    arvore->insert("ghi98765");
    arvore->insert("zzz99999");*/
    //arvore->busca("ppp88888", arvore->raiz);
    teste->busca("ppp88888", teste->raiz);
    printf("\n");

    delete arvore;
    return 0;
}
