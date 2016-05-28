#include "../Headers/affichage.h"

affichage::affichage(unsigned char couleurGrille[3], int nombreLignes, int nombreColonnes)
{
  // Construit une grille paramétrée qui donne les coordoonées pour tous les autres points
  CImg<unsigned char> grid(CImgDisplay::screen_height()/2,CImgDisplay::screen_height()/2, 1, 3, 255);
	CImgDisplay disp(grid, "Bataille navale", 0, false, false);
  // Tracage des lignes et des colonnes
	int tailleEcran = disp.width();
	for (int i = 1; i < nombreLignes; i++) grid.draw_line(0, (tailleEcran / nombreLignes )* i, tailleEcran, (tailleEcran / nombreLignes) * i, couleurGrille); // Trace les lignes horizontales
	for (int i = 1; i < nombreColonnes; i++) grid.draw_line((tailleEcran / nombreColonnes)* i, 0, (tailleEcran / nombreColonnes) * i, tailleEcran, couleurGrille); // Trace les lignes verticales 
	disp.move((CImgDisplay::screen_width() - tailleEcran) / 2, (CImgDisplay::screen_height() - disp.height()) / 2);
	CImg<unsigned char> scene = grid;
	scene.display(disp);
	system("pause");
}
