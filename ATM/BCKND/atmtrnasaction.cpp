#include "atmtrnasaction.h"

unsigned int ATM_Transaction::generateId(std::chrono::time_point<std::chrono::system_clock> date)
{
	return (date / 2 + 173);
}

PaymentTransaction::PaymentTransaction(Account& from, Account& to, unsigned int sum)
{
	std::chrono::time_point<std::chrono::system_clock> date = std::chrono::system_clock::now();
	this->id = this->generateId(date);
	if (from.hasSum(sum) && true/*bank request?*/)
	{
		//We don't make proper transaction logic -- it's bank's work
		from.removeBalance(sum);
		to.addBalance(sum);
	}
}