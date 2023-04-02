
#ifndef POO_LAB_144_2022_2023_SEMIGRUPA_2_FORMA_H
#define POO_LAB_144_2022_2023_SEMIGRUPA_2_FORMA_H


class Forma {
protected:
    double inaltime;
public:
    //constructori I (param si neparam)
    Forma();
    Forma(double inaltime);
    //destructor
    virtual ~Forma();

    //getter si setter
    double GetInaltime();
    void SetInaltime(double inaltime);

    virtual void Afisare();
    virtual double CantitateFrisca();
    virtual double CantitateGem();
};;


#endif //POO_LAB_144_2022_2023_SEMIGRUPA_2_FORMA_H
