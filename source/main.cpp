#include <iostream>
#include "ArvoreB.h"

int main(int argc, char const *argv[]) {
    ArvoreB* arvore;
    arvore = new ArvoreB("output.txt");

    arvore->insert("aaaaaaaa\n");
    

    delete arvore;
    return 0;

}
