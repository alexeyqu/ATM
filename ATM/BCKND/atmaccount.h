#include <stdlib.h>
#include <string>
#include "atmcard.h"

class Account
{
	unsigned int number;
	int balance;
	std::string currency;
	Card currentCard;
	bool hasSum(unsigned int sum);
	void addBalance(unsigned int sum);
	void removeBalance(unsigned int sum);
public:
	unsigned int getNumber();
	int getBalance();
	
};