#pragma once
#include<iostream>
#include<string.h>
#include"PA.h"
#include"Professeur.h"
#include"Studiant.h"
#include"Personne.h"



using namespace std;



/*class A
{
public:
	A();
private:
	
	string j;
	int i;
	//string jk;
};

A::A()
{
}*/

int main()
{

	//cout << "4 OCTETS" << endl;
	/*A a;
	std::cout << sizeof(a) << endl; //92+4=96
	*/
	Personne *p2= new Personne("p1", "p1", 19);
	//Personne p1("pa1", "pa1", 25);
	cout << sizeof(p2) << endl; //92+4=96

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
