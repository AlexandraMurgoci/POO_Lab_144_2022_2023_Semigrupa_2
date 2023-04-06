
#include "BucatariaBunicutei.h"
#include <iostream>
#include <stddef.h>

BucatariaBunicutei::BucatariaBunicutei() {}
BucatariaBunicutei::BucatariaBunicutei(const BucatariaBunicutei& bucatariaBunicutei) {
    //TODO trebuie copiata fiecare forma
}
BucatariaBunicutei::~BucatariaBunicutei() {
    for(int i = 0; i < forme.size(); i++) {
        delete forme[i];
    }
}
BucatariaBunicutei& BucatariaBunicutei::operator=(const BucatariaBunicutei& bucatariaBunicutei) {
    //TODO trebuie verificare self assignment, apoi copiata fiecare forma in parte si sterse cele precedente
    return *this;
}


void BucatariaBunicutei::AdaugaForma(Forma* forma) {
    forme.push_back(forma);
}

void BucatariaBunicutei::StergeFormaDePePozitia(int pozitie) {
    if(pozitie < 0 || pozitie >= forme.size()) {
        std::cout << "StergeFormaDePePozitia pozitie invalida " << pozitie << std::endl;
    }
    delete forme[pozitie];
    forme.erase(forme.begin() + pozitie);
}

double BucatariaBunicutei::CantitateFriscaTotal() {
    double total = 0;
    for(int i = 0; i < forme.size(); i++) {
        total += forme[i]->CantitateFrisca();
    }
    return total;
}

double BucatariaBunicutei::CantitateGemTotal() {
    double total = 0;
    for(int i = 0; i < forme.size(); i++) {
        total += forme[i]->CantitateGem();
    }
    return total;
}