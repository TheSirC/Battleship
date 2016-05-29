#ifndef _OPTIONMENU_
#define _OPTIONMENU_

#include <string>
#include <vector>

using namespace std;

class OptionMenu
{
		string nom_;
		string description_;
public:
		OptionMenu(const string &nom, const string &description);
		string getNom() const { return nom_; }
		string getDescription() const { return description_; }
};

#endif