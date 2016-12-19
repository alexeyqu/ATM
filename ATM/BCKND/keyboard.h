#include <stdlib.h>
#include <string>

class Keyboard
{
public:
	void keyPressed(int num);
	void getInputValue(std::string value);
	bool isEnterKey();
};