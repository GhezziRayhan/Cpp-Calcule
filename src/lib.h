/*! \ Fichier lib.h
* \ Librairi qui appelle les fonctions somme/sous/mult du fichier lib.cpp
* \ Auteur Rayhan
* \ Version 1.0
*/

#pragma once

/*! \ Class calcul
* \ Contient les fonctions somme/sous/mult avec leusr parametres pour pouvoir les appelés
*/

class calcul
{
public :
/*! \ Fonction somme : effectue une addition
* \ Parametre a : premier nombre
* \ Parametre b : deuxieme nombre
* \ Retourne l'addition de nombre_1+nombre_2
*/
int somme(int nombre_1, int nombre_2);

/*! \ Fonction sous : effectue une soustration
* \ Parametre a : premier nombre
* \ Parametre b : deuxieme nombre
* \ Retourne la soustration nombre_1-nombre_2
*/
int sous(int nombre_1, int nombre_2);

/*! \ Fonction mult : effectue une multiplication
* \ Parametre a : premier nombre
* \ Parametre b : deuxieme nombre
* \ Retourne le multiplication nombre_1*nombre_2
*/

int mult(int nombre_1, int nombre_2);
};

