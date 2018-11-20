#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void printVector(const std::vector<std::string>& vector){
    for(auto& i : vector){
        std::cout<<i<<std::endl;
    }
    std::cout<<"\n";
}

void removeString(std::vector<std::string>& vector){
    std::cout<<"Usuwanie slow na litere a/A\n";
    vector.erase(std::remove_if(std::begin(vector),std::end(vector),[&](const auto s){return s[0] == 'a' or s[0] == 'A';}),std::end(vector));
}
int main(){
//    Stwórz wektor stringów.
//    Niech w tym wektorze znajduje się pare słów.
//    Stwórz funkcje która przy pomocy funkcji z STL usunie w tym wektorze wszystkie elementy które zaczynają sie na literę a

    std::vector<std::string> sentences;
    sentences.emplace_back("anakonda");
    sentences.emplace_back("hipopotam");
    sentences.emplace_back("lew");
    sentences.emplace_back("Antylopa");
    sentences.emplace_back("albatros");
    sentences.emplace_back("Emu");


    std::cout<<"Wektor: \n";
    printVector(sentences);
//    std::cout<<"rozmiar: "<<sentences.size()<<"\n";
    removeString(sentences);

    std::cout<<"Nowy wektor: \n";
    printVector(sentences);
//    std::cout<<"rozmiar: "<<sentences.size()<<"\n";


    return 0;
}

