#include "ArvoreB.h"

ArvoreB::ArvoreB(const char* nome_do_arquivo) {
    bTree.open(nome_do_arquivo);
    bTree << "1|0|";
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
    int isFolha;
    int numero;

    while (is_ON) {
        bTree.seekp(aux * REG_SIZE);
        bTree >> pagina;
        bTree.seekp(aux * REG_SIZE);
        sAux = pagina.substr(0, 1);
        isFolha = std::stoi(sAux);
        if (isFolha) {
            insereNaFolha(&pagina, item);
            //sAux
            std::cout << pagina;
            bTree << pagina;
            is_ON = false;
        } else {
            sAux = item;
            for (int i = 0;i < ORDEM - 1;i++) {
                
                //if()
            }

        }
    }
}

void ArvoreB::addToArq(int indice){

}
void insereNaFolha(std::string* pagina, const char* item) {
    std::vector<std::string> chaves;
    int local;
    bool procurando = true;
    for(int i = 0;i < ORDEM - 1;i++) {
        chaves.push_back(pagina->substr(PRIM_CHAVE + (i * TAM_CHAVE), TAM_CHAVE));
        if((chaves[i][5] == '*') && procurando) {
            local = i;
            procurando = false;
        }
    }
    chaves[local].replace(5, 11, item);
    std::sort(chaves.begin(), chaves.end(), minhaComp);

    for (int i = 0;i < ORDEM - 1;i++) {
        pagina->replace(PRIM_CHAVE + (i * TAM_CHAVE), TAM_CHAVE, chaves[i].c_str());
    }
}

bool minhaComp(std::string a, std::string b) {
    std::string auxA, auxB;
    auxA = a.substr(5, 11);
    auxB = b.substr(5, 11);
    if(auxA == "***********"){
        return false;
    }
    return auxA.compare(auxB) < 0;
}
void ArvoreB::setNode() {
    int pontAux;
    bTree >> pontAux;
}

void printArq() {
    system("cat indicelista.bt");
}

void ArvoreB::make_Btree(const char* filename) {
    FILE* fp = fopen(filename, "r");
    int cont = 0, index = 0;
    char c;
    char chave[10];

    std::string chav;

    while (!feof(fp)) {
        for (int i = 0; i < 3; i++) {
            c = fgetc(fp);
            chav.push_back(c);
            chave[i] = c;
        }// lê as 3 primeiras letras, coloca no vetor de chave
        for (int i = 0; i < 38; i++) {
            c = fgetc(fp);
        }// ignora 38 espaços
        for (int i = 0; i < 5; i++) {
            c = fgetc(fp);
            chav.push_back(c);
            chave[i+3] = c;
        }// lê os 5 números de matrícula
        for (int i = 0; i < 8; i++) {
            c = fgetc(fp);
        }// ignora os espaços restantes e lê o caractere de nova linha
        
        ArvoreB::insert(chave); // insere a chave na árvore
    } 

    fclose(fp);
}
