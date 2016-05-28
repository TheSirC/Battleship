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
	affichage(unsigned char couleurGrille[3], int nombreLignes = 10, int nombreColonnes = 10); // Crée une grille avec les paramètres donnés par défaut ou ceux rentrés par l'utilisateur

private:
	int nombreLignes, nombreColonnes;
	unsigned char couleurGrille[3], couleurJoueur1[3], couleurJoueur2[3];
	void actualiseGrille(CImgDisplay disp);
	vector<int> clic(int nombreColonnes, int nombreLignes, CImgDisplay disp);
};

#endif __AFFICHAGE__
