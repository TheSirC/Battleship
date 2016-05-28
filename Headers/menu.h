#ifndef _MENU_
#define _MENU_

#include <string>
#include <vector>

using namespace std;

class Menu;

class OptionMenu
{
	string nom_;
	string description_;
public:
	OptionMenu(const string &nom, const string &description);
	string getNom() const { return nom_; }
	string getDescription() const { return description_; }
};


class Menu
{
	string titre_;
	vector<OptionMenu> listeOptions_;
public:
	// Caractéristiques du menu
	Menu(const string & titre);
	void setTitre(const string &titre);
	void ajouterOption(const string &nom, const string &description);
	void afficherMenu();
	int demanderChoix();
	void executer();
	bool quitter();

	// Différentes méthodes données des options
	virtual void executerOption(const string &nom, bool &fin);
};


#endif

