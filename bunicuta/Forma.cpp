
#include "Forma.h"
#include <iostream>

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

void Forma::Afisare() {
    std::cout << "Forma: inaltime - " << inaltime << std::endl;
}

double Forma::CantitateFrisca() {
    return 0;
}
double Forma::CantitateGem() {
    return 0;
}