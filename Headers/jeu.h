#include <vector>
#include <iostream>
#include <string>

#include "affichage.h"
#include "GrilleLogique.h"
#include "JoueurHumain.h"
#include "JoueurOrdi.h"
#include "menu.h"


using namespace std;

#ifndef _JEU_
#define _JEU_

class Jeu
{
		private:
				bool quelJoueur_ = 0; // Booléen codant le joueur du tour actuel : 0 pour l'humain, 1  pour l'IA
				int nombreBateau_;
				GrilleLogique
						grilleHumain_,
						grilleOrdi_;
				affichage
						GrilleAffichageHumain_,
						GrilleAffichageOrdi_;

		public:
				Jeu(string NomJoueur, int nombreBateau_ = 4);
				~Jeu();
				bool partieTerminee = 0;
				vector<int> getGrille();

				void setJoueur(bool idJoueur) { idJoueur = quelJoueur_; }
				bool getJoueur() { return quelJoueur_; }

				void setNombreBateau(int nombreBateau) { nombreBateau = nombreBateau_; }
				int getNombreBateau() { return nombreBateau_; }


};

#endif // _JEU_
