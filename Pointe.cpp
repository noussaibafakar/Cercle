//
// Created by Macbook1 on 10/26/26.
//
#include<iostream>
#include <math.h>
#include "Pointe.h"
using namespace std;
Pointe::Pointe(double x, double y):x(x),y(y) {
}
Pointe::Pointe(const Pointe&p)//:x(p.x),y(p.y) mm chose que
{
    this->x=p.x;
    this->y=p.y;
}
void Pointe::afficher()const {
    cout<<"les cordonnee du point "<<endl;
    cout<<"("<<x<<","<<y<<")"<<endl;
}

double Pointe::distancepoints(const Pointe &p)const {
    double dist=sqrt(pow(this->x-p.x,2)+pow(this->y-p.y,2));
    return dist;
}



bool Pointe::operator==(const Pointe &p) const {
    if (this->x==p.x && this->y==p.y) return true;
    return false;
};
Pointe::~Pointe() {
}