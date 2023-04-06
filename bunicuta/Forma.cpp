
#include "Forma.h"

//constructori I (param si neparam)
Forma::Forma(): inaltime(0) {
//    std::cout << "CI Forma neparam" << std::endl;
}

Forma::Forma(double inaltime): inaltime(inaltime) {
//    std::cout << "CI Forma param" << std::endl;
}

//destructor
Forma::~Forma() {
//    std::cout << "D Forma" << std::endl;
}

//getter si setter
double Forma::GetInaltime() { return inaltime; }
void Forma::SetInaltime(double inaltime) { this -> inaltime = inaltime; }

void Forma::Afisare(std::ostream& out) {
    out << "Forma: inaltime - " << inaltime << std::endl;
}
void Forma::Afisare() {
    Afisare(std::cout);
}

double Forma::CantitateFrisca() {
    return 0;
}

double Forma::CantitateGem() {
    return 2 * Volum();
}

double Forma::Volum() {
    return inaltime * ArieBaza();
}

std::istream& operator>>(std::istream& in, Forma& forma) {
    in >> forma.inaltime;
    return in;
}

std::ostream& operator<<(std::ostream& out, Forma& forma) {
    forma.Afisare();
    return out;
}