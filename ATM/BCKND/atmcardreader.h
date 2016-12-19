#include <stdlib.h>
#include <string>

struct cardData
{
	CARD_TYPE type;
	std::string cardNumber;
};

class CardReader
{
public:
	cardData cardInserted();
	void ejectCard();
};