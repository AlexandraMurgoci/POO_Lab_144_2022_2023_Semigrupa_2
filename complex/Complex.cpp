
#include "Complex.h"
#include <cmath>

Complex::Complex(): real(0), imaginary(0) {}
Complex::Complex(double real) { this -> real = real; this -> imaginary = 0; }
Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary) {
//    std::cout << "S-a apelat constructorul de initializare cu doi parametri double" << std::endl;
}

Complex::Complex(const Complex &complex): real(complex.real) {
    imaginary = complex.imaginary;
//    std::cout << "S-a apelat constructorul de copiere" << std::endl;
}
Complex& Complex::operator=(const Complex &complex) {
    real = complex.real;
    imaginary = complex.imaginary;
    return *this;
}

Complex::~Complex() {
    //nu trebuie nimic dezalocat manual
//    std::cout << "S-a apelat destructorul" << std::endl;
}

double Complex::AbsSquared() { return real * real + imaginary * imaginary; }
void Complex::WriteAlgebraicFormReal(std::ostream &out) {
    if(real != 0) {
        out << real;
    }
}
void Complex::WriteAlgebraicFormImaginary(std::ostream &out) {
    if(imaginary > 0) {
        out << "+i*" << imaginary;
    }
    else if(imaginary < 0) {
        out << "-i*" << -imaginary;
    }
}

void Complex::SetReal(double real) { this -> real = real; }
void Complex::SetImaginary(double imaginary) { this -> imaginary = imaginary; }
double Complex::GetReal() { return real; }
double Complex::GetImaginary() { return imaginary; }

double Complex::Abs() { return sqrt(AbsSquared()); }
void Complex::WriteAlgebraicForm(std::ostream &out) {
    WriteAlgebraicFormReal(out);
    WriteAlgebraicFormImaginary(out);
}

Complex Complex::operator/(Complex complex2) {
    Complex result;
    // declaram un complex tmp ca fiind conjugatul
    Complex tmp(complex2.real, -complex2.imaginary);
    result = *this * tmp;
    double nu = complex2.AbsSquared();
    result.real /= nu;
    result.imaginary /= nu;

    return result;
}

Complex operator+(Complex complex1, Complex complex2) {
    //complex1 este transmis prin valoare, nu se modifica cel extern
    complex1.real += complex2.real;
    complex1.imaginary +=complex2.imaginary;
    return complex1;
}
Complex operator*(Complex complex1, Complex complex2) {
    Complex result;
    result.SetReal(complex1.GetReal() * complex2.GetReal() - complex1.GetImaginary() * complex2.GetImaginary());
    result.SetImaginary(complex1.GetReal() * complex2.GetImaginary() + complex1.GetImaginary() * complex2.GetReal());
    return result;
}

std::istream& operator>>(std::istream &in, Complex &c) {
    in >> c.real >> c.imaginary;
    return in;
}
std::ostream& operator<<(std::ostream &out, Complex c) {
//    out << c.real << " " << c.imaginary;
    c.WriteAlgebraicForm(out);
    return out;
}