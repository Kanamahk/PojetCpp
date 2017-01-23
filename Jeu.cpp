#include "Jeu.h"

Jeu::Jeu() : tour(0)
{
    c = new Carte();
    j1 = new JoueurIA(CaracteristiqueJeu::FACTIONA, (Chateau*) c->premier);
    j2 = new JoueurIA(CaracteristiqueJeu::FACTIONB, (Chateau*) c->dernier);
}

Jeu::~Jeu()
{
    delete c;
    delete j1;
    delete j2;
}


bool Jeu::tourDeJeu()
{
	Ecriture e;
	stringstream ss;

	ss << "Commencement du tour n°" << tour << "." << endl;

	e.ecrire(ss.str());
	j1->ajouterPo(CaracteristiqueJeu::orParTour());
	j2->ajouterPo(CaracteristiqueJeu::orParTour());

	e.ecrire("Le premier joueur va faire ses actions.\n");
	tourDeJoueur(j1);
	if(j2->aPerdu())
	{
		e.ecrire("\n**************************\nLe second joueur a perdu!!\n**************************\n");
		return true;
	}

	e.ecrire("Le second joueur va faire ses actions.\n");
	tourDeJoueur(j2);
	if(j1->aPerdu())
	{
		e.ecrire("\n**************************\nLe premier joueur a perdu!!\n**************************\n");
		return true;
	}

	return false;
}

void Jeu::tourDeJoueur(Joueur* j)
{
	Ecriture e;
	stringstream ss;
	e.ecrire(c->Carte::str(j->getFaction()));

	e.ecrire("Resolution des premieres actions:\n");
	j->actions1();
	e.ecrire(c->Carte::str(j->getFaction()));

	e.ecrire("Resolution des secondes actions:\n");
	j->actions2();
	e.ecrire(c->Carte::str(j->getFaction()));

	e.ecrire("Resolution des troisiemes actions:\n");
	j->actions3();
	e.ecrire(c->Carte::str(j->getFaction()));

	e.ecrire("Achat d'unite:\n");
	j->acheter();
	e.ecrire(c->Carte::str(j->getFaction()));
}
