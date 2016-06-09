#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "../Headers/menu.h"

using namespace std;

// Definition des methodes de la classe Menu

Menu::Menu(const string & titre) : titre_(titre)
{
}

void Menu::setTitre(const string &titre)
{
	titre_ = titre;
}

void Menu::ajouterOption(const string &nom, const string &description)
{
	listeOptions_.push_back(OptionMenu(nom, description));
}


void Menu::afficherMenu()
{
	cout << titre_ << endl;
	for (int i = 0; i<listeOptions_.size(); i++) {
		cout << "- " << setw(2) << i << " : " << listeOptions_[i].getDescription() << endl;
	}
}

int Menu::demanderChoix()
{
	int choix;
	cout << "Votre choix : ";
	cin >> choix;
	cout << endl;
	return choix;
}

void Menu::executer()
{
	bool fin = false;
	while (!fin) {
		system("cls");
		afficherMenu();
		int choix = demanderChoix();
		if (choix >= 0 && choix<listeOptions_.size())
			executerOption(listeOptions_[choix].getNom(), fin);
		else {
			cout << "Choix incorrect" << endl;
			system("pause");
		}
	}
}

void Menu::executerOption(const string &nom, bool &fin)
{
	fin = false;
	if (nom == "Quitter") fin = quitter();
	/*A décommenter lorsque les fonctions idoines seront prêtes*/
	/*else if (nom == "Jouer") jeu();
	else if (nom == "Charger") charger();
	else if (nom == "Sauvegarder") sauvegarde();*/
	else {
		cout << "Option inexistante" << endl;
		system("pause");
	}
}

bool Menu::quitter()
{
	bool fin = false;
	string reponse;

	cout << "Voulez-vous vraiment sortir de l'application (o/n) ? ";
	cin >> reponse;
	if ((reponse == "o") || (reponse == "O")) fin = true;
			
		while ((reponse != "o") || (reponse != "O") || (reponse != "n") || (reponse != "N"))
		{
				cout << "Reponse erronnee. Veuillez ecrire 'o' ou 'n' : ";
				cin >> reponse;
		}
	
	return fin;
}