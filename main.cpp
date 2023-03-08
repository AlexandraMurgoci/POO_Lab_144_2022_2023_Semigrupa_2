#include <iostream>

class Complex {
    double real;
    double imaginary;
public:
    //constructori init
    Complex(double real, double imaginary): real(real), imaginary(imaginary) {
        std::cout << "S-a apelat constructorul cu doi parametri" << std::endl;
    }
    Complex(double real): imaginary(0) { this -> real = real; }
    Complex(): real(0), imaginary(0) {}

    //constructor copiere
    Complex(Complex &c) {
        real = c.real; imaginary = c.imaginary;
        std::cout << "S-a apelat constructorul de copiere" << std::endl;
    }

    //destructor
    ~Complex() {
        std::cout << "S-a apelat destructorul" << std::endl;
    }

    //setter
    void SetReal(double real) { this -> real = real; }
    void SetImaginary(double imaginary) { this -> imaginary = imaginary; }
    //getter
    double GetReal() { return real; }
    double GetImaginary() { return imaginary; }
};

void TestGetterAndSetter() {
    Complex c;

    c.SetReal(1);
    c.SetImaginary(0.5);

    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}

void TestConstructoriInit() {
    Complex zero;
    Complex cinci(5);
    Complex complex(1, 0.5);

    std::cout << zero.GetReal() << " " << zero.GetImaginary() << std::endl;
    std::cout << cinci.GetReal() << " " << cinci.GetImaginary() << std::endl;
    std::cout << complex.GetReal() << " " << complex.GetImaginary() << std::endl;
}

void FunctieExempluParametruPrinValoare(Complex c) {
    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}
void FunctieExempluParametruPrinReferinta(Complex &c) {
    std::cout << c.GetReal() << " " << c.GetImaginary() << std::endl;
}

void TestConstructorCopiere() {
    Complex c(5, 1);
    std::cout << std::endl;
    FunctieExempluParametruPrinValoare(c);
    std::cout << std::endl;
    FunctieExempluParametruPrinReferinta(c);
    std::cout << std::endl;
    std::cout << "S-a terminat fuctia de test" << std::endl;
}

int main() {
//    TestGetterAndSetter();
//    TestConstructoriInit();
    TestConstructorCopiere();
    return 0;
}
