#include "String.h"

String::String()
{
	// mString = new char[mLength];
	mString = "";
	mLength = 0;
}

String::String(int index)
{
	mString = new char[index];
	mLength = 0;
}

String::String(const char* set)
	: mString{ set }
{
	// mString = new char[mLength];
	mLength = 0;
}

String::String(const String& set)
{
	mString = set.mString;
	mLength = set.mLength;
}

String::~String()
{
	// delete[] mString;
	mString = "";
	mLength = 0;
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
	int index{ 0 };

	for (int i = 0; mString[i] != '\0'; i++)
	{
		index++;
	}

	mLength = index;

	return mLength;
}

int String::SetLength(int set)
{
	mLength = set;
	mString[set];

	return mLength;
}

// 모르겠는 것 1
String String::operator+(const String& set)
{
	int total{ 0 }, index1{ 0 }, index2{ 0 };

	for (int i = 0; mString[i] != '\0'; i++)
	{
		index1++;
	}

	for (int j = 0; set.mString[j] != '\0'; j++)
	{
		index2++;
	}
	total = index1 + index2 + 1;

	char* newString = new char[total];

	for (int k = 0; k < total; k++)
	{
		if (k <= index1)
		{
			newString[k] = mString[k];
		}
		else if( k > index1 && k < total)
		{
			newString[k] = set.mString[k - index1];
		}
	}

	return newString;
}

String String::operator=(String& string)
{
	mString = string.mString;

	return mString;
}

// 모르겠는 것 2
String String::operator+=(const String& string)
{
	return mString;
}

int String::operator[](int index)
{
	return mString[index];
}

std::ostream& operator<<(std::ostream& os, const String string)
{
	os << string.mString;

	return os;
}