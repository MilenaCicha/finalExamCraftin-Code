#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include "SportTeam.h"
std::ostream& operator<<( std::ostream &os, const std::vector<std::string>& vector )
{
    for(auto& i : vector){
        std::cout<<"Player name: "<<i<<"\n";
    }
    return os;
}

void printMap(std::map<SportTeam, std::vector<std::string>>& map){

    for (auto& mapIt : map) {
       std::cout<< mapIt.first;
       std::cout<< mapIt.second;
       std::cout<<"\n";

    }
}
int main(){
//    Napisz klasę SportTeam, posiadającą pole country i nazwę dyscypliny sportowej.
//    Napisz mapę SportTeam[key] na wektor zawodników.
//    Wypełnij tę mapę przynajmniej trzema drużynami i wyświetl dane.
//    Przy pomocy STL sprawdź, czy przynajmniej jedna z tych reprezentacji jest z Polski.

    SportTeam team1{"USA", "Hockey"}, team2{"Poland", "Volleyball"}, team3{"France", "Running"},
                         team4{"China", "Swimming"}, team5{"Poland","Tennis"};
    using  Players = std::vector<std::string>;
    std::map<SportTeam,Players> mapOfTeams;
    mapOfTeams[team1].emplace_back("Tom Davies");
    mapOfTeams[team1].emplace_back("John Wilkinson");
    mapOfTeams[team2].emplace_back("Sebastian Marczewski");
    mapOfTeams[team2].emplace_back("Ryszard Knur");
    mapOfTeams[team2].emplace_back("Lubomir Wasilewski");
    mapOfTeams[team3].emplace_back("Gerard Cotillard");
    mapOfTeams[team4].emplace_back("Zhang Hexin");
    mapOfTeams[team4].emplace_back("Sun Lin");
    mapOfTeams[team5].emplace_back("Ludwik Szyszko");

    printMap(mapOfTeams);
    

    auto it = std::find_if(mapOfTeams.begin(),mapOfTeams.end(),
                [](const auto& element){
                return element.first.country == "Poland";});

    if(it != mapOfTeams.end())  {
        std::cout<<"\n"<<"Team from Poland plays: "<<it->first.sportsDiscipline;
    }
    else{
        std::cout<<"No Polish team this time\n";
    }

}
