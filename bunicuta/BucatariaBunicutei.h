
#ifndef POO_LAB_144_2022_2023_SEMIGRUPA_2_BUCATARIABUNICUTEI_H
#define POO_LAB_144_2022_2023_SEMIGRUPA_2_BUCATARIABUNICUTEI_H

#include "Forma.h"
#include <vector>

class BucatariaBunicutei {
    std::vector<Forma*> forme;
public:
    BucatariaBunicutei();
    BucatariaBunicutei(const BucatariaBunicutei& bucatariaBunicutei);
    ~BucatariaBunicutei();
    BucatariaBunicutei& operator=(const BucatariaBunicutei& bucatariaBunicutei);

    void AdaugaForma(Forma*);
    void StergeFormaDePePozitia(int pozitie);
    double CantitateFriscaTotal();
    double CantitateGemTotal();
};


#endif //POO_LAB_144_2022_2023_SEMIGRUPA_2_BUCATARIABUNICUTEI_H
