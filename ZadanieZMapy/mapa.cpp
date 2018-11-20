#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include "SportTeam.h"

int main(){
//    Napisz klasę SportTeam, posiadającą pole country i nazwę dyscypliny sportowej.
//    Napisz mapę SportTeam[key] na wektor zawodników.
//    Wypełnij tę mapę przynajmniej trzema drużynami i wyświetl dane.
//    Przy pomocy STL sprawdź, czy przynajmniej jedna z tych reprezentacji jest z Polski.

    SportTeam team1{"USA", "Hockey"}, team2{"Poland", "Volleyball"}, team3{"France", "Running"},
                         team4{"China", "Swimming"}, team5{"Poland","Tennis"};
    using  mapVector = std::vector<std::string>;
    std::map<SportTeam,mapVector> mapOfTeams;
    mapOfTeams[team1].emplace_back("Team Beavers");
    mapOfTeams[team2].emplace_back("Team Badgers");
    mapOfTeams[team3].emplace_back("Team Snails");
    mapOfTeams[team4].emplace_back("Team Doggos");
    mapOfTeams[team5].emplace_back("Team Pinguins");

    for ( auto mapIt = mapOfTeams.begin(); mapIt != mapOfTeams.end(); ++mapIt){
        int i = 0;
        std::cout<<"Country: "<<mapIt->first.country<<" Sports discipline: "<<mapIt->first.sportsDiscipline<<" Team name: "<<mapIt->second[i]<<"\n";
        ++i;
    }

    auto it = std::find_if(mapOfTeams.begin(),mapOfTeams.end(),
                [](const auto element){
                return element.first.country == "Poland";});

    if(it != mapOfTeams.end())  {
        std::cout<<"Team from Poland plays: "<<it->first.sportsDiscipline;
    }
    else{
        std::cout<<"No Polish team this time\n";
    }

}
