#ifndef SEGEMENT_H
#define SEGEMENT_H
#include "element.h"

class Segement : public Element
{
public:
    Segement(const double _longueur,const double _angle);
    virtual void Afficher();
private:
    double longueur;
    double angle;
};

#endif // SEGEMENT_H
