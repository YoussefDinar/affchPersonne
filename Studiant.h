#pragma once
#include "Personne.h"
class Etudiant : public virtual Personne
{

public: 
	Etudiant(string n, string p, int a, int cne);
	 void afficher() const override;
	
private: 
	int cne; //96+8=104





};
