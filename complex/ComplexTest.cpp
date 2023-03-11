//
// Created by User on 3/11/2023.
//

#include "ComplexTest.h"

void ComplexTest::TestGetterAndSetter() {
    Complex c;

    c.SetReal(1);
    c.SetImaginary(0.5);

    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}

void ComplexTest::TestConstructorInit() {
    Complex zero;
    Complex cinci(5);
    Complex c(0.5, 1);

    std::cout << zero.GetReal() << " " << zero.GetImaginary() << std::endl;
    std::cout << cinci.GetReal() << " " << cinci.GetImaginary() << std::endl;
    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}

void ComplexTest::FunctieExempluParametruPrinValoare(Complex c) {
    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}
void ComplexTest::FunctieExempluParametruPrinReferinta(Complex &c) {
    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}
void ComplexTest::TestConstructorCopiere() {
    //se vede ordinea si apelarea constructorilor si destructorului daca se decomenteza afisarile din ele
    Complex c(5, 1);
    std::cout << std::endl;
    FunctieExempluParametruPrinValoare(c);
    std::cout << std::endl;
    FunctieExempluParametruPrinReferinta(c);
    std::cout << std::endl;
    std::cout << "S-a terminat functia de test" << std::endl;
}

void ComplexTest::TestOperatorPlus() {
    Complex c1(5, 1), c2(2, 1), c3;
    c3 = c1 + c2;
    std::cout << c3.GetReal() << " " << c3.GetImaginary() << std::endl;
    std::cout << c1.GetReal() << " " << c1.GetImaginary() << std::endl;
}

void ComplexTest::TestOperatorInmultire() {
    Complex c1(5, 1), c2(2, 1), c3;
    c3 = c1 * c2;
    std::cout << c3.GetReal() << " " << c3.GetImaginary() << std::endl;
}

void ComplexTest::TestOperatorImpartire() {
    Complex c1(5, 1), c2(2, 1), c3;
    c3 = c1 / c2;
    std::cout << c3.GetReal() << " " << c3.GetImaginary() << std::endl;
}

void ComplexTest::TestOperatorEgal() {
    Complex c1(5, 1), c2(2, 1);
    c1 = c2;
    std::cout << c1.GetReal() << " " << c1.GetImaginary() << std::endl;
}

void ComplexTest::TestOperatorCitire() {
    Complex c;
    std::cin >> c;
    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}

void ComplexTest::TestOperatorAfisare() {
    Complex c(1, 0.5);
    std::cout << c;
}

void ComplexTest::Test() {
//    TestGetterAndSetter();
//    TestConstructorInit();
//    TestConstructorCopiere();
//    TestOperatorPlus();
//    TestOperatorInmultire();
//    TestOperatorImpartire();
//    TestOperatorEgal();
//    TestOperatorCitire();
    TestOperatorAfisare();
}