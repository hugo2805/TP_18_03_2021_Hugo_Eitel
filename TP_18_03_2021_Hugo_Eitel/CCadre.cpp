#include <stdio.h>
#include <iostream>
#include <string.h>
#include "CCadre.h"
#define TAILLE 10

using namespace std;


// constructeurs

Cadre::Cadre()
{
	this->n_x = 10;
	this->n_y = 5;
	this->n_larg = 5;
	this->n_long = n_larg * 2;
	this->n_rotation = 0;
	this->str_motif = new char[TAILLE];
	strcpy_s(this->str_motif, TAILLE, "*");
	this->ptrCharNom_Cadre = new char[TAILLE];
	strcpy_s(this->ptrCharNom_Cadre, TAILLE, "cadre");
}

Cadre::Cadre(float n_x, float n_y, float n_larg, float n_long, float n_rotation, char* str_motif, char* s_nom)
{
	this->n_x = n_x;
	this->n_y = n_y;
	this->n_larg = n_larg;
	this->n_long = n_long;
	this->n_rotation = n_rotation;
	this->str_motif = new char[TAILLE];
	strcpy_s(this->str_motif, TAILLE, str_motif);
	this->ptrCharNom_Cadre = new char[TAILLE];
	strcpy_s(this->ptrCharNom_Cadre, TAILLE, s_nom);
}

Cadre::Cadre(Cadre& c)
{
	this->n_x = c.n_x;
	this->n_y = c.n_y;
	this->n_larg = c.n_larg;
	this->n_long = c.n_long;
	this->n_rotation = 0;
	this->str_motif = new char[TAILLE];
	strcpy_s(this->str_motif, TAILLE, c.str_motif);
	this->ptrCharNom_Cadre = new char[TAILLE];
	strcpy_s(this->ptrCharNom_Cadre, TAILLE, c.ptrCharNom_Cadre);
}

void Cadre::SetPointEncrage(float n_x, float n_y)
{
	this->n_x = n_x;
	this->n_y = n_y;
}

void Cadre::SetTaille(float size_x, float size_y)
{
	this->n_larg = n_larg;
	this->n_long = n_long;
}

void Cadre::AffichePointEncrage() const
{
	std::cout << "Point d'encrage  x:" << this->n_x << " Point d'encrage y:" << this->n_y << std::endl;
}

void Cadre::AfficheTaille() const
{
	std::cout << "largeur:" << this->n_larg << " et longeur:" << this->n_larg << std::endl;
}

float Cadre::CadreSurface() const
{
	return (this->n_larg * this->n_long);
}

void Cadre::AfficheSurface() const
{
	std::cout << "Surface : " << this->CadreSurface() << std::endl;
}

float Cadre::CadrePerimetre() const
{
	return (this->n_larg + this->n_long) * 2;
}

void Cadre::AffichePerimetre() const
{
	std::cout << "Perimetre : " << this->CadrePerimetre() << std::endl;
}

bool Cadre::ifCarre() const
{
	if (this->n_larg == this->n_long)
		return true;
	else
		return false;
}

void Cadre::AfficheIfCarre() const
{
	if (this->ifCarre())
		std::cout << "est un carre" << std::endl;
	else
		std::cout << "n'est pas un carre" << std::endl;
}

void Cadre::AfficheMotif() const
{
	std::cout << "le motif est : " << this->str_motif << std::endl;
}

float Cadre::GetCadreN_X() const
{
	return this->n_larg;
}

float Cadre::GetCadreN_Y() const
{
	return this->n_long;
}

char* Cadre::GetCadreMotif() const
{
	return this->str_motif;
}

void Cadre::RotationCadre(float n_rotation)
{
	this->n_rotation = n_rotation;
}

Cadre::~Cadre()
{
	delete[] this->str_motif;
	delete[] this->ptrCharNom_Cadre;
}