#include "atmtrnasaction.h"

unsigned int ATM_Transaction::generateId(std::chrono::time_point<std::chrono::system_clock> date)
{
	auto date_ms = std::chrono::time_point_cast<std::chrono::seconds>(date);
	auto start = date_ms.time_since_epoch();
	int count = start.count();

	return ( count / 32 + 173);
}

PayBillTransaction::PayBillTransaction(Account& from, Account& to, unsigned int sum)
{
	std::chrono::time_point<std::chrono::system_clock> date = std::chrono::system_clock::now();
	std::time_t time = std::chrono::system_clock::to_time_t(date);
	this->id = this->generateId(date);
	if (!from.hasSum(sum))
	{
		std::string toLog = "NOT ENOUGH MONEY FOR PAYMENT \t";
		toLog += std::ctime(&time);
		ATM::log(toLog);
		return;
	}
	if (true/*bank request?*/)
	{
		//We don't make proper transaction logic -- it's bank's work
		from.removeBalance(sum);
		to.addBalance(sum);
		this->wasSuccesful = true;
		return;
	}
	std::string toLog = "NOT ACCEPTED BY BANK, CONNECTION ERROR \t";
	toLog += std::ctime(&time);
	ATM::log(toLog);
}

WithdrawTransaction::WithdrawTransaction(Account &from, unsigned int sum)
{
	std::chrono::time_point<std::chrono::system_clock> date = std::chrono::system_clock::now();
	std::time_t time = std::chrono::system_clock::to_time_t(date);
	this->id = this->generateId(date);
	if (!from.hasSum(sum))
	{
		std::string toLog = "NOT ENOUGH MONEY FOR PAYMENT \t";
		toLog += std::ctime(&time);
		ATM::log(toLog);
		return;
	}
	if (true/*bank request?*/)
	{
		//We don't make proper transaction logic -- it's bank's work
		from.removeBalance(sum);
		this->wasSuccesful = true;
		return;
	}
	std::string toLog = "NOT ACCEPTED BY BANK, CONNECTION ERROR \t";
	toLog += std::ctime(&time);
	ATM::log(toLog);
}


PayMobileTransaction::PayMobileTransaction(Account& from, Account& to, unsigned int sum)
{
	std::chrono::time_point<std::chrono::system_clock> date = std::chrono::system_clock::now();
	std::time_t time = std::chrono::system_clock::to_time_t(date);
	this->id = this->generateId(date);
	if (!from.hasSum(sum))
	{
		std::string toLog = "NOT ENOUGH MONEY FOR PAYMENT \t";
		toLog += std::ctime(&time);
		ATM::log(toLog);
		return;
	}
	if (true/*bank request?*/)
	{
		//We don't make proper transaction logic -- it's bank's work
		from.removeBalance(sum);
		to.addBalance(sum);
		this->wasSuccesful = true;
		return;
	}
	std::string toLog = "NOT ACCEPTED BY BANK, CONNECTION ERROR\t";
	toLog += std::ctime(&time);
	ATM::log(toLog);
}