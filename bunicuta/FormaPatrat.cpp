
#include "FormaPatrat.h"
#include <iostream>

//constructori I (param si neparam)
FormaPatrat::FormaPatrat(): latura(0) {
//    std::cout << "CI FormaPatrat neparam" << std::endl;
}
//evidentierea transmiterii parametrilor catre constructorul din clasa de baza: Forma(inaltime)
FormaPatrat::FormaPatrat(double inaltime, double latura): Forma(inaltime), latura(latura) {
//    std::cout << "CI FormaPatrat param" << std::endl;
}

//destructor
FormaPatrat::~FormaPatrat() {
//    std::cout << "D FormaPatrat" << std::endl;
}

//getter si setter
double FormaPatrat::GetLatura() { return latura; }
void FormaPatrat::SetLatura(double latura) { this->latura = latura; }

void FormaPatrat::Afisare() {
    std::cout << "FormaPatrat: inaltime - " << inaltime << "; latura - " << latura << std::endl;
}