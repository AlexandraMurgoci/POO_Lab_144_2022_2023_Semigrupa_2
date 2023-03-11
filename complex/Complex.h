
#ifndef POO_LAB_144_2022_2023_SEMIGRUPA_2_COMPLEX_H
#define POO_LAB_144_2022_2023_SEMIGRUPA_2_COMPLEX_H


#include <iostream>

class Complex {
    double real;
    double imaginary;
public:
    //constructori init
    Complex();
    Complex(double real);
    Complex(double real, double imaginary);
    //constructor de copiere
    Complex(const Complex&);
    //operatorul de atribuire
    Complex& operator=(const Complex&);
    //destructor
    ~Complex();

private:
    //metode private
    double AbsSquared();
    void WriteAlgebraicFormReal(std::ostream&);
    void WriteAlgebraicFormImaginary(std::ostream&);

public:
    //setteri
    void SetReal(double real);
    void SetImaginary(double imaginary);
    //getteri
    double GetReal();
    double GetImaginary();

    //metoda
    double Abs();
    void WriteAlgebraicForm(std::ostream&);

    //operatori
    //operator ca metoda
    Complex operator/(Complex complex2);
    //operatori ca functii friend
    friend Complex operator+(Complex complex1, Complex complex2);
    //operatorii >> si << ca functii prieten (nu este obligatorii ca functiile sa fie friend)
    friend std::istream& operator>>(std::istream&, Complex&);
    friend std::ostream& operator<<(std::ostream&, Complex);
};

//operator ca functie (fara a fi functie friend)
Complex operator*(Complex complex1, Complex complex2);


#endif //POO_LAB_144_2022_2023_SEMIGRUPA_2_COMPLEX_H
