#include <vector>
#include <iostream>
#include <string>

#include "affichage.h"

using namespace std;

#ifndef _JEU_
#define _JEU_

class JoueurHumain;
class JoueurOrdi;
class GrilleLogique;
class Bateau;

class Jeu
{
		public:
				Jeu(string NomJoueur, int nombreBateau_ = 4);
				~Jeu();
				bool partieTerminee = 0;
				void changerJoueur();
				vector<int> getGrille();

				void setJoueur(bool idJoueur) { idJoueur = quelJoueur_; }
				bool getJoueur() { return quelJoueur_; }

				void setNombreBateau(int nombreBateau) { nombreBateau = nombreBateau_; }
				int getNombreBateau() { return nombreBateau_; }

		private:
				bool quelJoueur_ = 0; // Booléen codant le joueur du tour actuel : 0 pour l'humain, 1  pour l'IA
				int nombreBateau_;
};

#endif // !_JEU_

