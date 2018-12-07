#pragma once
#include <iostream>
#include <string>
class Chave {
public:
    Chave(std::string nome);
    ~Chave();
    std::string reg;
};

class Node {
public:
    Node();
    ~Node();
    Chave* chaves[5];
    Node* filhos[6];

};

class ArvoreB{
public:
    ArvoreB();
    ~ArvoreB();
    bool insert(std::string item);
    Node* cabeca;
    int ordem = 5;
    int minRegs = 2;
};