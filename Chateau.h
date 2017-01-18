#ifndef CHATEAU_H
#define CHATEAU_H

#include "Case.h"
#include "Entite.h"

class Chateau : virtual public Case, virtual public Entite
{
    public:
        Chateau(int pv_, int faction_);
        virtual ~Chateau();
    protected:
        int recevoirDegats(int degats);
    private:
};

#endif // CHATEAU_H
