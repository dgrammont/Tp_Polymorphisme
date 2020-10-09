#include "trajectoire.h"
#include <iostream>
using namespace std;

Trajectoire::Trajectoire(const int _nbEtapesMax)
{
    nbEtapesMax=-_nbEtapesMax;
}

bool Trajectoire::Ajouter( Element *_pElement)
{

    bool retour = true;
    if(prochaineEtape<nbEtapesMax)
    {
        parcours[prochaineEtape++] = _pElement;
    }
    else
    {
        retour=false;
    }
    return retour;
}

void Trajectoire::Afficher()
{
        cout<<"Trajectoire :"<<endl;
}
