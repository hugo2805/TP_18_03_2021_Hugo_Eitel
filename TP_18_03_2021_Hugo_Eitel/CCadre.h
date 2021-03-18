#pragma once
#include <string>
#define TAILLE 10

using namespace std;

class Cadre {

private:
	float n_x;
	float n_y;
	float n_larg; 
	float n_long;
	float n_rotation; 

	char* str_motif;
	char* ptrCharNom_Cadre;
protected:

public:
	// Constructeur
	Cadre();
	Cadre(float n_x, float n_y, float n_larg, float n_long, float n_rotation, char* str_motif, char* s_nom);


	Cadre(Cadre& c);

	
	void SetPointEncrage(float n_x, float n_y);
	void SetTaille(float n_larg, float n_long);


	void AffichePointEncrage() const;
	void AfficheTaille() const;
	void AfficheSurface() const;
	void AffichePerimetre() const;
	void AfficheMotif() const;
	void AfficheIfCarre() const;

	
	float GetCadreN_X() const;
	float GetCadreN_Y() const;
	char* GetCadreMotif() const;


	float CadreSurface() const;
	float CadrePerimetre() const;
	bool ifCarre() const;
	void RotationCadre(float n_rotation);

	// Destructeur
	~Cadre();
};
