#ifndef TRANSACTION_HEADER
#define TRANSACTION_HEADER

#include <stdlib.h>
#include <string>
#include <chrono>
#include <ctime>
#include "atmaccount.h"

class ATM_Transaction
{
protected:
	unsigned int id;
	std::chrono::time_point<std::chrono::system_clock> date;
	bool wasSuccesful = 0;
	unsigned int generateId(std::chrono::time_point<std::chrono::system_clock> date);
public:
	virtual ~ATM_Transaction() {};
	bool wasOperationSuccessful() { return wasSuccesful; };
};

class PayBillTransaction : public ATM_Transaction
{
	unsigned int amount;
public:
	PayBillTransaction(Account &from, Account &to, unsigned int sum);
	~PayBillTransaction() {};
};

class WithdrawTransaction : public ATM_Transaction
{
	unsigned int amount;
public:
	WithdrawTransaction(Account &from, unsigned int sum);
	~WithdrawTransaction() {};
};

class PayMobileTransaction : public ATM_Transaction
{
	unsigned int amount;
public:
	PayMobileTransaction(Account &from, Account &to, unsigned int sum);
	~PayMobileTransaction() {};
};
#endif
