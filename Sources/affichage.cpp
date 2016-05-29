#include "../Headers/affichage.h"

affichage::affichage(unsigned char couleurGrille[3], int nombreLignes_, int nombreColonnes_)
{
  // Construit une grille paramétrée qui donne les coordoonées pour tous les autres points
  CImg<unsigned char> grid(CImgDisplay::screen_height()/2,CImgDisplay::screen_height()/2, 1, 3, 255);
  // Tracage des lignes et des colonnes
	int tailleEcran = grid.height(); // Pré-allocation du résultat de la fonction pour optimisation
	for (int i = 1; i < nombreLignes_; i++) grid.draw_line(0, (tailleEcran / nombreLignes_ )* i, tailleEcran, (tailleEcran / nombreLignes_) * i, couleurGrille); // Trace les lignes horizontales
	for (int i = 1; i < nombreColonnes_; i++) grid.draw_line((tailleEcran / nombreColonnes_)* i, 0, (tailleEcran / nombreColonnes_) * i, tailleEcran, couleurGrille); // Trace les lignes verticales 
	CImgDisplay disp(grid, "Bataille navale", 0, false, false); // Crée la fenêtre associée à la grille
	disp.move((CImgDisplay::screen_width() - tailleEcran) / 2, (CImgDisplay::screen_height() - disp.height()) / 2); // Dépalce la fenêtre au centre de l'écran
	CImg<unsigned char> scene = grid;
	// Attend qu'un évènement se produise sur la fenêtre sélectionnée
	disp.wait();
	while (!disp.is_closed() && !disp.is_keyESC() && !disp.is_keyQ()) {
			scene.display(disp);
			// Détection des clics gauche de souris
			if (disp.button() & 1) {
					int cX = nombreLignes_*disp.mouse_x() / disp.width();
					int cY = nombreColonnes_*disp.mouse_y() / disp.height();
					coordonnesClic.push_back(cX);
					coordonnesClic.push_back(cY);
			}
			// Permet de gérer le redimmensionnement de la fenêtre
			if (disp.is_resized()) disp.resize();
			// Attend qu'un évènement se produise sur la fenêtre sélectionnée
			disp.wait();
	}
}
