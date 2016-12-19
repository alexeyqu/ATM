#ifndef COMM_HEADER
#define COMM_HEADER
#include <stdlib.h>
#include <string>
#include "atmtrnasaction.h"

enum ChannelType
{
	WiFiChannel,
	GPRSChannel,
	ModemChannel
};

enum TransactionType
{
	PayBill,
	PayMobile,
	Withdraw
};


class Communicator
{
	ChannelType activeChannel;
public:
	bool createAndSendTransaction(unsigned int sum, Account &from, Account &to, TransactionType type); //В случае Withdraw to игнорируется
	void setActiveChannel(ChannelType type);
	ChannelType getActiveChannel();
};

#endif // !COMM_HEADER