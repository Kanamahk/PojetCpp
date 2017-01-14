#include "Case.h"

Case::Case(bool estEntite_) : sonUnite(nullptr), suivant(nullptr), precedent(nullptr), estEntite(estEntite_)
{

}

Case::~Case()
{
    //dtor
}


bool Case::estVide()
{
	return (sonUnite != nullptr);
}

Case* Case::getSuivant()
{
	return suivant;
}

Case* Case::getPrecedent()
{
	return precedent;
}

int Case::recevoirDegats(int degats)
{
	return false;
}
