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
    std::string pagina, sAux;
    auto aux = raiz;
    bool is_ON = true;
    int numero;

    while (is_ON) {
        bTree.seekg(aux * REG_SIZE);
        bTree.seekp(aux * REG_SIZE);
        bTree >> pagina;
        sAux = pagina.substr(0, 1);
        numero = std::stoi(sAux);
        printf("%d\n", numero);
        if (numero < ORDEM - 1){
            insere(pagina, item);
        }
    }
}

void ArvoreB::addToArq(int indice){

}
void insere(std::string pagina, const char* item) {
    std::vector<std::string> chaves;
    int local;
    bool procurando = true;
    for(int i = 0;i < ORDEM - 1;i++) {
        chaves.push_back(pagina.substr(PRIM_CHAVE + (i * TAM_CHAVE), TAM_CHAVE));
        if((chaves[i][5] == '*') && procurando) {
            local = i;
            procurando = false;
        }
    }
    chaves[local].replace(5, 11, item);
    std::sort(chaves.begin(), chaves.end(), minhaComp);

    for (int i = 0;i < ORDEM - 1;i++) {
        pagina.replace()///AQUI
    }

}

bool minhaComp(std::string a, std::string b) {
    std::string auxA, auxB;
    auxA = a.substr(5, 11);
    auxB = b.substr(5, 11);
    return auxA.compare(auxB) < 0;
}
void ArvoreB::setNode() {
    int pontAux;
    bTree >> pontAux;
}

