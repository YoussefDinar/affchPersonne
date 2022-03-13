#pragma once
#include "Professeur.h"
#include "Studiant.h"
#include <iostream>
using namespace std;
class PA : public  Etudiant,public  Professeur
{
public: 
	PA(string n, string p, int a, int cne, int matricule, string thema);
	void afficher()const ;

private: 
	string thematique;  //40+88=128

};
