#include "atmcommunicator.h"
#include <assert.h>

bool Communicator::createAndSendTransaction(unsigned int sum, Account &from, Account &to, TransactionType type)
{
	ATM_Transaction t;
	switch (type)
	{
	case PayBill:
		t = PayBillTransaction(from, to, sum);
		break;
	case PayMobile:
		t = PayMobileTransaction(from, to, sum);
		break;
	case Withdraw:
		t = WithdrawTransaction(from, sum);
		break;
	default:
		assert(0);
		break;
	}
	if (!t.wasOperationSuccessful())
	{
		return false;
	}
	return true;
}

void Communicator::setActiveChannel(ChannelType type)
{
	this->activeChannel = type;
}

ChannelType Communicator::getActiveChannel()
{
	return this->activeChannel;
}