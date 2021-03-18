/*
Réponse question de cours :

1)  Le constructeur est exécuté lors de l'instanciation d'un objet.
	il sert a initialiser l'objet lors de sa création.

2)  le destructeur est appelé lorsque l'on souhaite détruire un objet.
	il permet de détruire totalment un objet.
	il est indispensable dans le cas de la destruction d'un tableau.

3)  Un constructeur est reconaissable car il porte le même nom que la classe dans laquelle il est défini.
	on peut en avoir plusieurs pour créer des objets de différentes façons.

4)  la surdéfinition de fonctions consiste à déclarer plusieurs fois la même fonction.
	Cela permet de l'utiliser avec de différentes variables et de différentes façons.

5)	public, permet a l'utilisateur et aux autres fonctions d'accéder aux variables ou au fonction dites public depuis n'importe où dans le code.
	private, permet de restreindre l'accès aux données. seul la classe et ses méthodes auront accès aux données.
*/


#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "CCadre.h"

using namespace std;

int main() {

	char* pat1 = new char[TAILLE];
	strcpy_s(pat1, TAILLE, "carreaux");
	char* nom1 = new char[TAILLE];
	strcpy_s(nom1, TAILLE, "cadre1");
	
	Cadre c0;
	Cadre c1(1, 2, 3, 4, 0, pat1, nom1);

	Cadre c2(c1);

	c0.AffichePointEncrage();
	c1.AfficheTaille();
	c2.AfficheTaille();

	c0.SetPointEncrage(1, 2);
	c0.SetTaille(3, 4);

	c0.AffichePointEncrage();
	c0.AfficheTaille();

	c1.AfficheSurface();
	c1.AffichePerimetre();

	c0.AfficheIfCarre();

	c0.AfficheMotif();
	c1.AfficheMotif();

	return 0;
}
