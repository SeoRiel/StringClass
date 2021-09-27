#include "Character.h"
#pragma once

class String
{
private:
	Character* mCharacter;

public:
	String(const char* str);
	String(const String& str);
	~String();

};

