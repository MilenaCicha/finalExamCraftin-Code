#include "SportTeam.h"

std::ostream& operator<<(std::ostream& os, const SportTeam& st)
{
    os <<"Country: "<< st.country << " Sports discipline: " << st.sportsDiscipline << "\n";
    return os;
}