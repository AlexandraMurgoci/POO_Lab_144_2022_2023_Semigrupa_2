
#ifndef POO_LAB_144_2022_2023_SEMIGRUPA_2_FORMAPATRAT_H
#define POO_LAB_144_2022_2023_SEMIGRUPA_2_FORMAPATRAT_H

#include "Forma.h"

class FormaPatrat: public Forma {
    double latura;
public:
    //constructori I (param si neparam)
    FormaPatrat();
    FormaPatrat(double inaltime, double latura);
    //destructor
    ~FormaPatrat();

    //getter si setter
    double GetLatura();
    void SetLatura(double latura);

    void Afisare(std::ostream& out);
    //TODO de ce nu mergea folosit din baza
    void Afisare();

    double CantitateGem();

    friend std::istream& operator>>(std::istream& in, FormaPatrat& patrat);
};


#endif //POO_LAB_144_2022_2023_SEMIGRUPA_2_FORMAPATRAT_H
