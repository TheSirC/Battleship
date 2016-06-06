#include "../Headers/menu.h"

int main()
{
		Menu menuBatailleNavale("Bataille Navale");
		menuBatailleNavale.ajouterOption("Jouer", "Commencer une nouvelle partie");
		menuBatailleNavale.ajouterOption("Charger","Charger une partie precedemment sauvegardee");
		menuBatailleNavale.ajouterOption("Quitter", "Sortir du jeu sans sauvegarder");
		menuBatailleNavale.executer();
		return 0;
}