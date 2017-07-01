#include "../Headers/sauvegarde.h"

sauvegarde::sauvegarde(Personne JoueurHumain, Personne JoueurOrdi, Jeu JeuCourant)
{
		// Appel de la boite de sauvegarde de fichier
		cout << "Appel de la boite de sauvegarde de fichier" << endl;
		string nomSave = getSaveFileName("Nom du fichier � sauvegarder :", "Fichiers textes (*.txt *.cpp)");

		if (nomSave != "")
				cout << "Nom du fichier : " << nomSave << endl;
		else
				cout << "Abandon" << endl;

		ofstream flux(nomSave);

		// Enregistrement des paramètres associées au joueur
		flux << JoueurHumain.getNom() << endl; // Enregistrement du nom du joueur humain
		flux << JoueurHumain.getNbBateaux() << endl; // Enregistrement du nombre de bateaux du Joueur Humain
		for (int i = 0; i < JoueurHumain.getFlotte().size(); i++)
		{
				flux << JoueurHumain.getFlotte()[i].getPositionX() << endl; // Enregistrement de la position X du bateau
				flux << JoueurHumain.getFlotte()[i].getPositionY() << endl; // Enregistrement de la position Y du bateau
				flux << JoueurHumain.getFlotte()[i].getOrientation() << endl; // Enregistrement de l'orientation du bateau
		}

		// Enregistrement des paramètres associées à l'I.A.
		flux << JoueurOrdi.getNom() << endl; // Enregistrement du nom de l'ordinateur
		flux << JoueurOrdi.getNbBateaux() << endl; // Enregistrement du nombre de bateaux de l'I.A.
		for (int i = 0; i < JoueurOrdi.getFlotte().size(); i++)
		{
				flux << JoueurOrdi.getFlotte()[i].getPositionX() << endl; // Enregistrement de la position X du bateau
				flux << JoueurOrdi.getFlotte()[i].getPositionY() << endl; // Enregistrement de la position Y du bateau
				flux << JoueurOrdi.getFlotte()[i].getOrientation() << endl; // Enregistrement de l'orientation du bateau
		}

		// Enregistrement des paramètres de parties
		flux << JeuCourant.getJoueur();

		flux.close();
}
