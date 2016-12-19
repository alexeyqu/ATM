#include <stdlib.h>
#include <string>
#include "atmcardreader.h"
#include "atmcommunicator.h"
#include "atmreceiptprinter.h"
#include "keyboard.h"
#include "atmcardreader.h"


class ATM
{
	std::string logs;
	Communicator comm;
	CardReader reader;
	Keyboard keyboard;
	ReceiptPrinter printer;
public:
	void onKeyPressed(int key);
	void onScreenOptionSelected(int option);
	void onInputFieldAccept(std::string input);
	void onDataRecieved(unsigned char* inArray);
	void onCardInserted();
	void getLogs();
};