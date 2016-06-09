#ifndef _SAUVEGARDE_
#define _SAUVEGARDE_

#include "menu.h"
#include "jeu.h"

#include <string>
#include <iostream>
#include <fstream>
#include "filedialog.h"

using namespace std;

class sauvegarde
{
public:
		sauvegarde(Personne JoueurHumain, Personne JoueurOrdi, Jeu JeuCourant);
};

#endif // !_SAUVEGARDE_

