//
// Created by Macbook1 on 10/26/26.
//
#include<iostream>
#ifndef CERCLE_CERCLE_H
#define CERCLE_CERCLE_H
#include"Pointe.h"

class Cercle {
private:
    Pointe* centre;
    double radyon;
    public:
    Cercle(Pointe*,double);
    Cercle(const Cercle & c);
    void afficher();
    bool operator==(const Cercle & )const;
    double operator-(const Cercle &);
    ~Cercle();
};


#endif //CERCLE_CERCLE_H
