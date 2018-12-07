#include <iostream>
#include <fstream>

int main(){

    std::ofstream sla;
    
    
    
    sla.open("teste.txt");
    sla << "teste\naaaaaa\nbbbbbbbbb\n";
    std::cout << sla.end<< std::endl;
    sla.seekp(-5,sla.cur);
    std::cout << sla.end<< std::endl;

    sla << "alo";

    sla.close();
    return 0;
}