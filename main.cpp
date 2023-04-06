#include <iostream>
#include "complex/ComplexTest.h"
#include "bunicuta/BunicutaTest.h"
#include "bunicuta/MeniuBucatariaBunicutei.h"

void TestareClasaComplex() {
    ComplexTest complexTest;
    complexTest.Test();
}

void TestareProblemaBunicuta() {
//    BunicutaTest bunicutaTest;
//    bunicutaTest.Test();

    BucatariaBunicutei *bucatariaBunicutei = new BucatariaBunicutei;
    MeniuBucatariaBunicutei menu;
    menu.SetBucatarie(bucatariaBunicutei);

    //apelare metoda statica
//    MeniuBucatariaBunicutei::GetAllCommands();

    menu.RunMenu();

    delete bucatariaBunicutei;
}

int main() {
//    TestareClasaComplex();
    TestareProblemaBunicuta();
    return 0;
}
