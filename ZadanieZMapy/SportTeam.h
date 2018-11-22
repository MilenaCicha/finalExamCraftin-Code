#pragma  once

#include <string>
#include <ostream>


class SportTeam {
public:
    std::string country;
    std::string sportsDiscipline;

    SportTeam(std::string newCountry, std::string newDiscipline) :
            country{std::move(newCountry)},
            sportsDiscipline{std::move(newDiscipline)}
    {};

    bool operator <(const SportTeam& other)const{
        return country < other.country || (country == other.country && sportsDiscipline < other.sportsDiscipline);
    }

    friend std::ostream& operator<<(std::ostream& os, const SportTeam& st);
};


