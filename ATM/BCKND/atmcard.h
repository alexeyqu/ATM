#include <stdlib.h>
#include <string>


enum CARD_TYPE
{
	"VIS-A-VI",
	"MUST-A-CARD",
	"Am Ex-Press"
};

class Card
{
	std::string number;
	unsigned int pin;
	CARD_TYPE cardType;
public:
	bool checkPin(unsigned int p);
	CARD_TYPE getCardType();
	std::string getCardNumber();
};