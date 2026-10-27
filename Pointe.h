//
// Created by Macbook1 on 10/26/26.
//

#ifndef CERCLE_POINTE_H
#define CERCLE_POINTE_H


class Pointe {
private:
    double x;
    double y;
public:
    Pointe(double,double);
    Pointe(const Pointe & p);
    void afficher()const;
    double distancepoints(const Pointe &)const;
    bool operator==(const Pointe& p)const;
    ~Pointe();

};


#endif //CERCLE_POINTE_H
