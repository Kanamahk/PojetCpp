#ifndef CHATEAU_H
#define CHATEAU_H

#include <iostream>
#include "Case.h"
#include "Entite.h"

using namespace std;

class Chateau : virtual public Case, virtual public Entite
{
    public:
        Chateau(int pv_, int faction_, Case* suivant, Case* precedent);
        virtual ~Chateau();
        bool estFranchissable();
        bool estEntite();
        int recevoirDegats(int degats);
        bool estDetruit();
        string str();
    protected:
    private:
};

#endif // CHATEAU_H
