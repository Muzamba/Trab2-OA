#ifndef ARVORE_B_H
#define ARVORE_B_H
#define ORDEM 5
#define REG_SIZE 81
#define DATA_SIZE 

#include <fstream>
#include <vector>

enum CHAVE{
    CHAVE_1,
    CHAVE_2,
    CHAVE_3,
    CHAVE_4,
    CHAVE_MAX
};
struct Data {
    int ponteiroAnt;
    char* chave;
};

struct Node{
    int tam;
    int ponteiroPai;
    std::vector<Data> dados;
};

class ArvoreB {
public:
//    const char* nome_do_arquivo;

    ArvoreB(const char* nome_do_arquivo);
    ~ArvoreB();

//    void inOpen();
//    void ouOpen();
//    void close();
    void insert(const char* item);
    void setNode();
    void addToArq(int indice);

    Node no1, no2;
    std::fstream bTree;
    int raiz;
};


#endif
