#include <iostream>

class Complex {
    double real;
    double imaginary;
public:
    //constructori init
    Complex(double real, double imaginary): real(real), imaginary(imaginary) {
//        std::cout << "S-a apelat constructorul cu doi parametri" << std::endl;
    }
    Complex(double real): imaginary(0) { this -> real = real; }
    Complex(): real(0), imaginary(0) {}

    //constructor copiere
    Complex(const Complex &c) {
        real = c.real; imaginary = c.imaginary;
//        std::cout << "S-a apelat constructorul de copiere" << std::endl;
    }

    Complex& operator=(const Complex &c) {
        real = c.real; imaginary = c.imaginary;
        return *this;
    }

//    Complex operator=(Complex c) {
//        real = c.real; imaginary = c.imaginary;
//        return *this;
//    }

    //destructor
    ~Complex() {
//        std::cout << "S-a apelat destructorul" << std::endl;
    }

    //setter
    void SetReal(double real) { this -> real = real; }
    void SetImaginary(double imaginary) { this -> imaginary = imaginary; }
    //getter
    double GetReal() { return real; }
    double GetImaginary() { return imaginary; }

    //operatori
    friend Complex operator+(Complex c1, Complex c2) {
        double realRes = c1.real + c2.real;
        double imgRes = c1.imaginary + c2.imaginary;
        Complex result(realRes, imgRes);
        return result;
    }

    Complex operator*(Complex c2) {
        Complex result;
        result.real = real * c2.real - imaginary * c2.imaginary;
        result.imaginary = real * c2.imaginary + imaginary * c2.real;
        return result;
    }

    friend std::istream& operator>>(std::istream& in, Complex &c) {
        in >> c.real >> c.imaginary;
        return in;
    }

    friend std::ostream &operator<<(std::ostream& out, Complex c) {
        out << c.real << ' ' << c.imaginary;
        return out;
    }
};

Complex operator/(Complex c1, Complex c2) {
    Complex temp(c2.GetReal(), -c2.GetImaginary());
    Complex result;
    result = c1 * temp;
    double absSquared = c2.GetReal() * c2.GetReal() + c2.GetImaginary() * c2.GetImaginary();
    result.SetReal(result.GetReal()/absSquared);
    result.SetImaginary(result.GetImaginary()/absSquared);
    return result;
}


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

void TestOperatorPlus() {
    Complex c1(1, 0.5), c2(1, 2), c3;
    c3 = c1 + c2;
    std::cout << c3.GetReal() << " " << c3.GetImaginary() << std::endl;
}

void TestOperatorInmultire() {
    Complex c1(1, 0.5), c2(1, 2), c3;
    c3 = c1 * c2;
    std::cout << c3.GetReal() << " " << c3.GetImaginary() << std::endl;
}

void TestOperatorImpartire() {
    Complex c1(1, 0.5), c2(1, 2), c3;
    c3 = c1 / c2;
    std::cout << c3.GetReal() << " " << c3.GetImaginary() << std::endl;
}

void TestOperatorAtribuire() {
    Complex c1(1, 0.5), c2(1, 2);
    c1 = c2;
    std::cout << c1.GetReal() << " " << c1.GetImaginary() << std::endl;
}

void TestOperatoriCitireSiAfisare() {
    Complex c, c2(3, 4);
    std::cin >> c;
    std::cout << c << std::endl << c2;
}

int main() {
//    TestGetterAndSetter();
//    TestConstructoriInit();
//    TestConstructorCopiere();
//    TestOperatorPlus();
//    TestOperatorInmultire();
//    TestOperatorImpartire();
//    TestOperatorAtribuire();
    TestOperatoriCitireSiAfisare();
    return 0;
}
