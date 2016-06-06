#include "../Headers/GrilleLogique.h"

int main()
{
		GrilleLogique Grille = GrilleLogique();
		Grille.afficherGrille();
		cout << Grille.getEtatCase(0,3) << endl;
		Grille.setEtatCase(0, 3, 2);
		Grille.afficherGrille();
		Grille.tireSurCase(0, 3);
		cout << Grille.getEtatCase(0, 3) << endl;
		Grille.setEtatCase(0, 3, 3);
		Grille.afficherGrille();
		cout << Grille.getEtatCase(0, 3) << endl;
		Grille.setEtatCase(0, 3, 4);
		Grille.afficherGrille();
		Grille.tireSurCase(0, 3);
		cout << Grille.getEtatCase(0, 3) << endl; Grille.afficherGrille();
		system("PAUSE");
		return 0;
}