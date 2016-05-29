#ifndef _MENU_
#define _MENU_

#include "optionMenu.h"

using namespace std;

class Menu
{
	string titre_;
	vector<OptionMenu> listeOptions_;
public:
	// Caract�ristiques du menu
	Menu(const string & titre);
	void setTitre(const string &titre);
	void ajouterOption(const string &nom, const string &description);
	void afficherMenu();
	int demanderChoix();
	void executer();
	bool quitter();

	// Diff�rentes m�thodes donn�es des options
	virtual void executerOption(const string &nom, bool &fin);
};


#endif

