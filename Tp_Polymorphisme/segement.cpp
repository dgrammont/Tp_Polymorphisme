#include "segement.h"
#include <iostream>
using namespace std;


Segement::Segement(const double _longueur, const double _angle):
    Element()
{
    longueur=_longueur;
    angle=_angle;
}

void Segement::Afficher()
{

    cout<<"SEGEMENT L = "<<longueur<<" A = "<<angle<<endl;

}
