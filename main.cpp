#pragma once
#include<iostream>
#include<string.h>
#include"PA.h"
#include"Professeur.h"
#include"Studiant.h"
#include"Personne.h"
using namespace std;




int main()
{
    PA* m = new PA("m1", "p1", 20, 283, 21, "fr");
    m->afficher();
   

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
