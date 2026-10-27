//
// Created by Macbook1 on 10/26/26.
//
#include <iostream>
#include "Cercle.h"
#include "Pointe.h"
using namespace std;
Cercle::Cercle(Pointe *c,double r):centre(c),radyon(r){
}
void Cercle::afficher() {
    cout<<"Centre :"<<endl;
    this->centre->afficher();
    cout<<"  Rayon :"<<this->radyon<<endl;
}
Cercle::Cercle(const Cercle & c) {
    this->radyon =c.radyon;
    //on fait aapell a un constructeur de recopie  de class point
    this->centre=new Pointe(*(c.centre));
//cercle-cercle=distance entre deux cercle
}



bool Cercle:: operator==(const Cercle &c)const {
    if (this->radyon==c.radyon && *(this->centre)==*(c.centre))//this->centre==c.centre error
        //*(this->cetre)==*(c.centre)//ondoit surcharger operator== pour comparer deuxpoint
        return true;
    return false;
}
double Cercle::operator-(const Cercle &c) {
   // si on fait operator- c.centre -this->centre;
    double d=this->centre->distancepoints( *(c.centre));//pb
    return d;
}

Cercle::~Cercle() {

}
