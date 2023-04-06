
#ifndef POO_LAB_144_2022_2023_SEMIGRUPA_2_MENIUBUCATARIABUNICUTEI_H
#define POO_LAB_144_2022_2023_SEMIGRUPA_2_MENIUBUCATARIABUNICUTEI_H

#include<iostream>
#include<string>
#include<vector>
#include "BucatariaBunicutei.h"

class MeniuBucatariaBunicutei {
    BucatariaBunicutei *bucatarie;

    //membri statici
    static const std::string ADD;
    static const std::string TOTAL;
    static const std::string STOP;

    void DisplayMenuMessage();
public:
    void SetBucatarie(BucatariaBunicutei *bucatarie);
    void RunMenu();
    //metoda statica
    static std::vector<std::string> GetAllCommands();
};


#endif //POO_LAB_144_2022_2023_SEMIGRUPA_2_MENIUBUCATARIABUNICUTEI_H
