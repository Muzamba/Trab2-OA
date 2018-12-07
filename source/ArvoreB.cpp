#include "ArvoreB.h"

ArvoreB::ArvoreB(const char* nome_do_arquivo) {
    bTree.open(nome_do_arquivo);
    bTree << "0|";
    for(int i = 0; i < ORDEM - 1;i++) {
        bTree <<"####|***********|";
    }
    bTree << "####||####\n";
    raiz = 0;
}

ArvoreB::~ArvoreB() {
    bTree.close();
}

void ArvoreB::insert(const char* item) {
    std::string pagina;
    bTree.seekg(raiz * REG_SIZE);
    //bTree.seekp(raiz * REG_SIZE);
    bTree >> pagina;
    int numero;
    numero = pagina.at(0) - 48;
    printf("%d\n", numero);
    if (numero < ORDEM - 1){
        
    }
}

void ArvoreB::addToArq(int indice){

}

void ArvoreB::setNode() {
    int pontAux;
    bTree >> pontAux;
}

