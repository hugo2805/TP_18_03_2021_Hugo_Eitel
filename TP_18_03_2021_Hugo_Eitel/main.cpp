/*
R�ponse question de cours :

1)  Le constructeur est ex�cut� lors de l'instanciation d'un objet.
	il sert a initialiser l'objet lors de sa cr�ation.

2)  le destructeur est appel� lorsque l'on souhaite d�truire un objet.
	il permet de d�truire totalment un objet.
	il est indispensable dans le cas de la destruction d'un tableau.

3)  Un constructeur est reconaissable car il porte le m�me nom que la classe dans laquelle il est d�fini.
	on peut en avoir plusieurs pour cr�er des objets de diff�rentes fa�ons.

4)  la surd�finition de fonctions consiste � d�clarer plusieurs fois la m�me fonction.
	Cela permet de l'utiliser avec de diff�rentes variables et de diff�rentes fa�ons.

5)	public, permet a l'utilisateur et aux autres fonctions d'acc�der aux variables ou au fonction dites public depuis n'importe o� dans le code.
	private, permet de restreindre l'acc�s aux donn�es. seul la classe et ses m�thodes auront acc�s aux donn�es.
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
