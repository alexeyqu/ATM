#include "atmcard.h"

bool Card::checkPin(unsigned int p)
{
	return (pin == p);
}

CARD_TYPE Card::getCardType()
{
	return this->cardType;
}

std::string Card::getCardNumber()
{
	return this->number;
}