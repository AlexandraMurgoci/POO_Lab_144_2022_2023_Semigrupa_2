
#ifndef POO_LAB_144_2022_2023_SEMIGRUPA_2_FORMADREPTUNGHI_H
#define POO_LAB_144_2022_2023_SEMIGRUPA_2_FORMADREPTUNGHI_H

#include "Forma.h"

class FormaDreptunghi: public Forma {
    double laturaMica;
    double laturaMare;
public:
    //constructori I (param si neparam)
    FormaDreptunghi();
    FormaDreptunghi(double inaltime, double laturaMica, double laturaMare);
    //destructor
    ~FormaDreptunghi();

    //getteri si setteri
    double GetLaturaMica();
    void SetLaturaMica(double laturaMica);
    double GetLaturaMare();
    void SetLaturaMare(double laturaMare);

    void Afisare(std::ostream&);

    double CantitateGem();

    friend std::istream& operator>>(std::istream& in, FormaDreptunghi& patrat);
};


#endif //POO_LAB_144_2022_2023_SEMIGRUPA_2_FORMADREPTUNGHI_H
