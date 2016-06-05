class JoueurOrdi
{
	int CibleX_;
	int CibleY_;
	
public:
	void ChoixCible(int nbLignes, int nbColonnes);
	const int getCibleX() { return CibleX_; } // méthodes en lignes
	const int getCibleY() { return CibleY_; }
};