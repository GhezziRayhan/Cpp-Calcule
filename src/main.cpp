/*! \ Fichier main.cpp
* \ Fichier main ! il utilise les librairies.h pour réutiliser les fonctions codées
* \ Auteur Rayhan
* \ Version 1.0
*/

#include "lib.h"
#include <iostream>
using namespace std;

/*! \ Fonction main
* \ Elle ne possede pas de parametre
* \ Elle définit les varibles Nb1 et Nb2 pour effectuer les calcules
* \ Elle retourne des calcules addition/soustration/multiplication
*/
int main(){

	int Nb1=5;
	int Nb2=4;
	calcul c;

	cout<<c.somme(Nb1,Nb2)<<endl;
	cout<<c.sous(Nb1,Nb2)<<endl;
	cout<<c.mult(Nb1,Nb2)<<endl;

	return 0;
}
