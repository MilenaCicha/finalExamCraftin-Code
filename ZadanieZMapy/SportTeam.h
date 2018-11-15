#pragma  once

#include <string>
#include <ostream>

namespace  SportTeam {
    class SportTeam {
    public:
        std::string country;
        std::string sportsDiscipline;

        SportTeam(std::string newCountry, std::string newDiscipline) :
                country{std::move(newCountry)},
                sportsDiscipline{std::move(newDiscipline)} {};

    };
}


