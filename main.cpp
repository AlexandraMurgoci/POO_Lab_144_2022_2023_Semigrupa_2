#include <iostream>
#include "complex/ComplexTest.h"
#include "bunicuta/BunicutaTest.h"

void TestareClasaComplex() {
    ComplexTest complexTest;
    complexTest.Test();
}

void TestareProblemaBunicuta() {
    BunicutaTest bunicutaTest;
    bunicutaTest.Test();
}

int main() {
//    TestareClasaComplex();
    TestareProblemaBunicuta();
    return 0;
}
