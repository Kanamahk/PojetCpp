#ifndef TERRAIN_H
#define TERRAIN_H

#include "Case.h"

class Terrain : virtual public Case
{
    public:
        Terrain(Case* suivant, Case* precedent);
        virtual ~Terrain();
        bool estFranchissable();
        bool estEntite();
        string str();
    protected:
    private:
};

#endif // TERRAIN_H
