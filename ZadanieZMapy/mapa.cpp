#include <iostream>
#include <map>
#include <vector>
#include "SportTeam.h"

int main(){
//    Napisz klasę SportTeam, posiadającą pole country i nazwę dyscypliny sportowej.
//    Napisz mapę SportTeam[key] na wektor zawodników.
//    Wypełnij tę mapę przynajmniej trzema drużynami i wyświetl dane.
//    Przy pomocy STL sprawdź, czy przynajmniej jedna z tych reprezentacji jest z Polski.

    SportTeam::SportTeam team1{"USA", "Hockey"}, team2{"Poland", "Volleyball"}, team3{"France", "Running"},
                         team4{"China", "Swimming"}, team5{"Poland","Tennis"};
    using  mapVector = std::vector<std::string>;
    std::map<SportTeam::SportTeam,mapVector> mapOfTeams;
//    mapOfTeams[team1].emplace_back("Team Beavers");
//    mapOfTeams[team2].emplace_back("Team Badgers");
//    mapOfTeams[team3].emplace_back("Team Snails");
//    mapOfTeams[team4].emplace_back("Team Doggos");
//    mapOfTeams[team5].emplace_back("Team Pinguins");


//    mapOfTeams.insert((std::pair<SportTeam::SportTeam, mapVector>(team1, {"Team Beavers"})));
//    mapOfTeams.insert((std::pair<SportTeam::SportTeam, mapVector>(team2, {"Team Badgers"})));
//    mapOfTeams.insert((std::pair<SportTeam::SportTeam, mapVector>(team3, {"Team Snails"})));
//    mapOfTeams.insert((std::pair<SportTeam::SportTeam, mapVector>(team4, {"Team Doggos"})));
//    mapOfTeams.insert((std::pair<SportTeam::SportTeam, mapVector>(team5, {"Team Pinguins"})));


//    for (auto it = mapOfTeams.begin(); it != mapOfTeams.end(); ++it)
//    {
//        std::cout << "Kraj: " << it->first.country << "Dyscyplina sportowa:" << it->first.sportsDiscipline<<"\n";
//
//    }


}
