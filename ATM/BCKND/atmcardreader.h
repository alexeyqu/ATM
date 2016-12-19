#pragma once
#include <stdlib.h>
#include <string>

struct card_data
{
	CARD_TYPE type;
	std::string cardNumber;
};

class CardReader
{
public:
	struct card_data cardInserted();
	void ejectCard();
};