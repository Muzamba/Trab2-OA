#ifndef ARVORE_B_H
#define ARVORE_B_H
#define ORDEM 5
#define REG_SIZE 70
#define PRIM_CHAVE 4
#define TAM_CHAVE 14

#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>

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

    ArvoreB(const char* nome_do_arquivo);
    ~ArvoreB();

    void insert(const char* item);
    void setNode();
    void addToArq(int indice);
    void make_Btree(const char* filename);
    void busca(const char* chave, int referencia);

    Node no1, no2;
    std::fstream bTree;
    int raiz;
};

void insereNaFolha(std::string* pagina, const char* item);
std::string insereComPromo(std::string* pagina, const char* item);

bool minhaComp(std::string a, std::string b);

void printArq();


#endif
