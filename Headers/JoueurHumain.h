class JoueurHumain
{
	int CibleX_;
	int CibleY_;
public:
	void ChoixCible(int CibleX, int CibleY); // enregistrement de la cible indiquée par le clic du joueur
	const int getCibleX() {return CibleX_; } // méthodes en lignes
	const int getCibleY() { return CibleY_; }
};