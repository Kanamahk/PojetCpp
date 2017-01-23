all: projet

projet: projet.o
	g++ -Wall -fmessage-length=0 Archer.h CaracteristiqueJeu.h Carte.h Case.h Catapulte.h Chateau.h Configuration.h Ecriture.h Entite.h Fantassin.h Jeu.h Joueur.h JoueurIA.h SuperSoldat.h Terrain.h


clean:
	rm -rf *.o

mrproper: clean
	rm -rf projet