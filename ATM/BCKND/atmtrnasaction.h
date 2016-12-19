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
	unsigned int generateId(std::chrono::time_point<std::chrono::system_clock> date);
public:
	Transaction() = 0;
	~Transaction() = 0;
};

class PaymentTransaction : public ATM_Transaction
{
	unsigned int amount;
public:
	PaymentTransaction(Account from, Account to, unsigned int sum);
	~PaymentTransaction();
};

class WithdrawlTransaction : public ATM_Transaction
{
	unsigned int amount;
public:
	WithdrawalTransaction(Account from, unsigned int sum);
	~WithdrawalTransaction();
};

class DepositTransaction : public ATM_Transaction
{
	unsigned int amount;
public:
	DapositTransaction(Account to, unsigned int sum);
	~DepositTransaction();
};