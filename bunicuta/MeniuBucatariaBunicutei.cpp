
#include "MeniuBucatariaBunicutei.h"
#include "FormaPatrat.h"
#include "FormaDreptunghi.h"

const std::string MeniuBucatariaBunicutei::ADD = "ADD";
const std::string MeniuBucatariaBunicutei::TOTAL = "TOTAL";
const std::string MeniuBucatariaBunicutei::STOP = "STOP";

void MeniuBucatariaBunicutei::SetBucatarie(BucatariaBunicutei *bucatarie) {
    this->bucatarie = bucatarie;
}

void MeniuBucatariaBunicutei::DisplayMenuMessage() {
    std::cout << ADD << " - citeste si adauga o noua forma" << std::endl
              << "REMOVE x - sterge forma de pe pozitia x" << std::endl
              << TOTAL << " - afiseaza cantitatile de gem si frisca necesare pentru toate formele" << std::endl
              << STOP << " - opreste programul" << std::endl
              << std::endl
            ;
}

void MeniuBucatariaBunicutei::RunMenu() {
    DisplayMenuMessage();

    https://en.cppreference.com/w/cpp/string/basic_string
    std::string command;
    std::cin >> command;

    while(command != STOP) {
        if(command == ADD) {
            //TODO submeniu citire tip de forma
            //temporar, imi declar doua forme si le adaug
            bucatarie->AdaugaForma(new FormaPatrat(2, 5));
            bucatarie->AdaugaForma(new FormaDreptunghi(2, 3, 5));
            std::cout << std::endl;
            DisplayMenuMessage();
        }
            //TODO remove
        else if(command == TOTAL) {
            std::cout << "Total cantitate frisca: " << bucatarie->CantitateFriscaTotal() << std::endl;
            std::cout << "Total cantitate gem: " << bucatarie->CantitateGemTotal() << std::endl;
            std::cout << std::endl;
            DisplayMenuMessage();
        }
        else {
            std::cout << "Comanda invalida" << std::endl;
            DisplayMenuMessage();
        }
        std::cin >> command;
    }
}

std::vector<std::string> MeniuBucatariaBunicutei::GetAllCommands() {
    std::vector<std::string> commands;
    commands.push_back(ADD);
    commands.push_back(TOTAL);
    commands.push_back(STOP);
    return commands;
}