#ifndef UNITE_H
#define UNITE_H

#include "Entite.h"
#include "Case.h"

class Case;
class Unite : virtual public Entite
{
    public :
        Unite(Case* position_, int prix_, int portee_, int faction_, int pa_, int pv_);
        virtual ~Unite();
        virtual bool deplacer(); //Peut �tre red�finie : on peut imaginer une unit� qui aurait un mouvemnt diff�rent.
        virtual int attaquer(); //virtuelle, peut-�tre redefinie
        virtual int action1() = 0; //virtuelle pure : doit �tre redefinie
        virtual int action2() = 0;
        virtual int action3() = 0;
        int recevoirDegats(int degats);
    protected :
        Case* position;
        int portee, pa, recompense;
    private :
};

#endif // UNITE_H
