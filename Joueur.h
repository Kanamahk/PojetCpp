#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>
#include <vector>

//#include "Chateau.h"
#include "CaracteristiquesJeu.h"
#include "Unite.h"

using namespace std;

class Unite;
class Chateau;
class Joueur
{
    public:
        Joueur(int faction_, Chateau* monChateau_);
        virtual ~Joueur();
        Chateau* getChateau();

        void actions1();
        void actions2();
        void actions3();
        virtual void acheter() = 0;
        bool aPerdu();
        void ajouterPo(int po_);
        int getFaction();
    protected:
        int faction;
        int po;
        vector<Unite*> mesUnites;
        Chateau* monChateau;

        friend class Unite;
    private:
};

#endif // JOUEUR_H
