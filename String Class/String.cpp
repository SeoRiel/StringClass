#include "String.h"

String::String()
{
}

String::String(const char* str)
	: mString{ str }
{

}

String::String(const String& str)
{
	mElement = new String();
	mElement->mString = str.mString;
	mElement->mLength = str.mLength;
}

String::~String()
{
	delete[] mString;
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

	return String();
}

String String::operator=(const String& string)
{
	return String();
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
