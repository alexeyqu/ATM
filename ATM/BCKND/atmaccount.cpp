#include "atmaccount.h"
#include <limits>
#include "atm.h"

bool Account::hasSum(unsigned int sum)
{
	unsigned int temp = (unsigned int) this->balance;
	return (temp > sum);
}

unsigned int Account::getNumber()
{
	return (this->number);
}

int Account::getBalance()
{
	return (this->balance);
}

void Account::addBalance(unsigned int sum)
{
	unsigned int temp = (unsigned int) this->balance;
	temp += sum;
	unsigned int temp2 = (unsigned int)INT_MAX; //Signed
	if (temp > temp2)
	{
		std::string toLog("TOO BIG VALUE TO CHANGE");
		ATM::log(toLog);
		return;
	}
	this->balance += sum;
}

void Account::removeBalance(unsigned int sum)
{
	long temp = (long) this->balance;
	temp -= sum;
	long temp2 = (unsigned int)INT_MAX; //Signed
	temp2 *= -1;
	if (temp < temp2)
	{
		std::string toLog("TOO SMALL VALUE TO CHANGE");
		ATM::log(toLog);
		return;
	}
	this->balance -= sum;
}