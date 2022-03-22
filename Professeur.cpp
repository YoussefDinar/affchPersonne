#include "Professeur.h"
#include <iostream>
Professeur::Professeur(string n, string p, int a, int mat)
	:Personne(n,p,a)
{
	this->matricule = mat;
}


void Professeur::afficher() const
{
    Professeur* p;


    if (typeid(this).name() == typeid(p).name()) {
        this->Personne::afficher();
    }
    else
    std::cout << "matricule: " << this->matricule << std::endl;
}
