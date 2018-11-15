#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


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
    for(auto& i : sentences){
        std::cout<<i<<std::endl;
    }
    std::cout<<"\n";
    std::cout<<"Usuwanie slow na litere a/A\n";
    for(auto it = sentences.begin(); it != sentences.end();){
        if((*it)[0] == 'a' or (*it)[0] == 'A'){
            it = sentences.erase(it);
        }
        else
            ++it;
    }

    std::cout<<"\n";
    std::cout<<"Nowy wektor: \n";
    for(auto& i : sentences){
        std::cout<<i<<std::endl;
    }

}

