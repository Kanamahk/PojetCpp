#ifndef JEU_H
#define JEU_H

#include "Joueur.h"
#include "JoueurIA.h"
#include "Carte.h"
#include "CaracteristiquesJeu.h"
#include "Ecriture.h"
#include <sstream>

class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();

        bool tourDeJeu();
        void tourDeJoueur(Joueur* j);
        int tour;
    protected:
    private:
        Joueur *j1, *j2;
        Carte *c;
};

#endif // JEU_H
