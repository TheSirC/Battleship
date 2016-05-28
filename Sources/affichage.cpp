#include "../Headers/affichage.h"

affichage::affichage(unsigned char couleurGrille[3], int nombreLignes, int nombreColonnes)
{
  // Construit une grille paramétrée qui donne les coordoonées pour tous les autres points
  CImg<unsigned char> grid(CImgDisplay::screen_height()/2,CImgDisplay::screen_height()/2, 1, 3, 255);
	CImgDisplay disp(grid, "Bataille navale", 0, false, false); // Crée la fenêtre associée à la grille
  // Tracage des lignes et des colonnes
	int tailleEcran = disp.width(); // Pré-allocation du résultat de la fonction pour optimisation
	for (int i = 1; i < nombreLignes; i++) grid.draw_line(0, (tailleEcran / nombreLignes )* i, tailleEcran, (tailleEcran / nombreLignes) * i, couleurGrille); // Trace les lignes horizontales
	for (int i = 1; i < nombreColonnes; i++) grid.draw_line((tailleEcran / nombreColonnes)* i, 0, (tailleEcran / nombreColonnes) * i, tailleEcran, couleurGrille); // Trace les lignes verticales 
	disp.move((CImgDisplay::screen_width() - tailleEcran) / 2, (CImgDisplay::screen_height() - disp.height()) / 2);
	CImg<unsigned char> scene = grid;
	actualiseGrille(disp);
}

void affichage::actualiseGrille(CImgDisplay disp)
{
		
		while (!disp.is_closed() && !disp.is_keyESC() && !disp.is_keyQ()) {
				// Détection des des clics gauche de souris et appel de la méthode éponyme
				if (disp.button() & 1) affichage::clic(nombreColonnes,nombreLignes,disp);
				disp.wait();
				// Permet de gérer le redimmensionnement de la fenêtre
				if (disp.is_resized()) disp.resize();
		}
}

vector<int> affichage::clic(int nombreColonnes, int nombreLignes, CImgDisplay disp)
{
		std::vector<int> v;
		v.push_back(nombreColonnes * disp.mouse_y() / disp.height());
		v.push_back(nombreLignes * disp.mouse_x() / disp.width());
		return v;
}
