#include "String.h"

String::String()
{
	mString = "";
	mLength = 0;
	mElement = nullptr;
}

String::String(const char* str)
	: mString{ str }
{
	mLength = 0;
	mElement = nullptr;
}

String::String(const String& str)
{
	mElement = new String();
	mElement->mString = str.mString;
	mElement->mLength = str.mLength;
}

String::~String()
{
	mLength = 0;
	mString = "";
	mElement = nullptr;
}

const char* String::GetString()
{
	return mString;
}

void String::SetString(const char* set)
{
	mString = set;
}


int String::GetLength()
{
	return mLength;
}

int String::SetLength(int set)
{
	mLength = set;

	return mLength;
}

void String::Print()
{
	std::cout << mString << std::endl;
}

String String::operator+(const String& string)
{
	return string;
}

String String::operator=(const String& string)
{
	int index{ 0 };

	while (mString[index] != '\0')
	{
		index++;
	}

	strcat(mString, )
	mString = string.mString;

	return mString;
}

String String::operator+=(const String& string)
{

	return String();
}

int String::operator[](int index)
{
	return mString[index];
}

std::ostream& operator<<(std::ostream& os, const String string)
{
	// TODO: insert return statement here

	return os;
}
