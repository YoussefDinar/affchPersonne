#include "Studiant.h"
#include <iostream>
Etudiant::Etudiant(string n, string p, int a,int cne)
	: Personne(n,p,a)
{
	this->cne = cne;
}


void Etudiant::afficher() const
{
    Etudiant *e;
 

    if (typeid(this).name() == typeid(e).name()) {
        this->Personne::afficher();
    }
    else
    std::cout << "cne: " << this->cne << std::endl;
}
