
#include "BunicutaTest.h"
#include <iostream>
#include <vector>

void BunicutaTest::TestareMetodeBaza() {
    //vedem ca putem accesa din formaPatrat metodele publice declarate in baza
//    Forma forma;
//    forma.CantitateFrisca();
//    forma.CantitateGem();

    FormaPatrat formaPatrat;
    std::cout << formaPatrat.CantitateGem() << std::endl;
    std::cout << formaPatrat.CantitateFrisca() << std::endl;
}

void BunicutaTest::TestareOrdineConstructoriSiDestructori() {
    //remarcam ordinerea in care se afiseaza mesajele pt CI si D in exemplele de mai jos
//    Forma forma1;
//    Forma forma2(2);

//    FormaPatrat patrat1;
    FormaPatrat patrat2(2,5);
}

void BunicutaTest::TestareAfisare() {
//    Forma forma(2);
//    forma.Afisare();

    FormaPatrat patrat(3, 5);
    patrat.Afisare();
}

void BunicutaTest::TestUpcastingSiDowncasting() {
//    Forma *forma = new Forma(2);
//    forma -> Afisare();

    //upcasting, retin o FormaPatrat intr-un pointer la Forma
    Forma *patrat = new FormaPatrat(3, 5);
    patrat -> Afisare();
    patrat -> SetInaltime(4);

    //downcasting, determin ca in pointerul la Forma este o FormaPatrat
    //pt info dynamic_cast: https://en.cppreference.com/w/cpp/language/dynamic_cast
    if(FormaPatrat *castPatrat = dynamic_cast<FormaPatrat *>(patrat)) {
        castPatrat -> SetLatura(7);
    }

    //daca vrem sa memoram toate formele bunicutei
    std::vector<Forma*> formeleBunicutei;
    //pt info despre vector: https://en.cppreference.com/w/cpp/container/vector
//    formeleBunicutei.push_back(forma);
    formeleBunicutei.push_back(patrat);
    for(int i = 0; i < formeleBunicutei.size(); i++) {
        formeleBunicutei[i] -> Afisare();
    }

    for(int i = 0; i < formeleBunicutei.size(); i++) {
        delete formeleBunicutei[i];
    }
}

void BunicutaTest::TestOperatoriCitireSiAfisare() {
//    Forma forma(2);
//    std::cin >> forma;
//    std::cout << forma;

    FormaPatrat patrat(3, 5);
    std::cin >> patrat;
    std::cout << patrat;
}

void BunicutaTest::Test() {
//    TestareMetodeBaza();
//    TestareOrdineConstructoriSiDestructori();
//    TestareAfisare();
//    TestUpcastingSiDowncasting();
    TestOperatoriCitireSiAfisare();
}