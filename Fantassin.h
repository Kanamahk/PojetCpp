#ifndef FANTASSIN_H
#define FANTASSIN_H

#include "CaracteristiquesJeu.h"
#include "Unite.h"

class Fantassin : virtual public Unite
{
    public:
        Fantassin(Case* position_, int faction_);
        virtual ~Fantassin();
        /*int action1();
        int action2();
        int action3();
        void setAAttaque(bool b);*/
    protected:
    private:
        bool aAttaque;
};

#endif // FANTASSIN_Hhttps://www.youtube.com/watch?v=mUmSpiSInyU
