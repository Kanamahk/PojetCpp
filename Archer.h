#ifndef ARCHER_H
#define ARCHER_H

#include "CaracteristiquesJeu.h"
#include "Unite.h"

class Archer : virtual public Unite
{
    public:
        Archer(Case* position_, int faction_);
        virtual ~Archer();
        /*int action1();
        int action2();
        int action3();*/
    protected:
    private:
        //int id;
};

#endif // ARCHER_H
