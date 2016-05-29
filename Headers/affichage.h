#include <iostream>
#include <vector>
#include "../Headers/CImg.h"

using namespace std;
using namespace cimg_library;

#ifndef __AFFICHAGE__
#define __AFFICHAGE__
class affichage
{
public:
	affichage(unsigned char couleurGrille[3], int nombreLignes_ = 10, int nombreColonnes_ = 10); // Crée une grille avec les paramètres donnés par défaut ou ceux rentrés par l'utilisateur
	void setNombreLignes(int nb) { nombreLignes_ = nb; }
	void setNombreColonnes(int nb) { nombreColonnes_ = nb; }
	int getNombreLignes() { return nombreLignes_; }
	int getNombreColonnes() { return nombreColonnes_; }

private:
	int nombreLignes_, nombreColonnes_;
	unsigned char couleurGrille[3], couleurJoueur1[3], couleurJoueur2[3];
	vector<int> coordonnesClic; // Vecteur contenant les coordonnes des clics
};

#endif __AFFICHAGE__
