#include <iostream>
#include "segement.h"
#include "trajectoire.h"
using namespace std;

int main()
{
    Segement *monSegement;
    monSegement = new Segement(9,0);
    Segement *segmentDeux;
    segmentDeux = new Segement(5,0.927295);
    Trajectoire maTrajectoire(50);
    maTrajectoire.Ajouter(monSegement);
    maTrajectoire.Ajouter(segmentDeux);
    maTrajectoire.Afficher();
    return 0;
}
