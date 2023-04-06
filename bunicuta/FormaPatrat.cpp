
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

void FormaPatrat::Afisare(std::ostream& out) {
    out << "FormaPatrat: inaltime - " << inaltime << "; latura - " << latura << std::endl;
}
void FormaPatrat::Afisare() {
    Afisare(std::cout);
}

double FormaPatrat::CantitateGem() {
    return 2 * inaltime * latura * latura;
}

//operator citire
std::istream& operator>>(std::istream& in, FormaPatrat& patrat) {
    in >> patrat.latura;
    in >> dynamic_cast<Forma&>(patrat);
    return in;
}