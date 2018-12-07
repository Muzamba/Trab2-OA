#include "ArvoreB.h"

Chave::Chave(std::string nome) {
    reg = nome;
}

Chave::~Chave(){
    reg.clear();
}

Node::Node() {
    for(int i = 0;i < 5;i++){
        chaves[i] = NULL;
    }
    for(int i = 0;i < 6;i++){
        filhos[i] = NULL;
    }
}

Node::~Node() {
    for(int i = 0;i < 5;i++){
        if(chaves[i] != NULL){
            delete chaves[i];
        }
    }
    for(int i = 0;i < 6;i++){
        if(filhos[i] != NULL){
            delete filhos[i];
        }
    }
}

ArvoreB::ArvoreB(){
    cabeca = NULL;
}
ArvoreB::~ArvoreB(){
    if(cabeca != NULL) {
        delete cabeca;
    }
}

bool ArvoreB::insert(std::string item){
    if(cabeca == NULL) {
        cabeca = new Node();
        cabeca->chaves[0] = new Chave(item);
    } else {
        
    }

}

bool sortVetor
