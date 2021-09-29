#include "String.h"

String::String()
{
	mString = "";
	mLength = 0;
}

String::String(int index)
{
	mString = new char[index];
	mLength = 0;
}

String::String(const char* str)
	: mString{ str }
{
	mLength = 0;
}

String::String(const String& str)
{
	mString = str.mString;
	mLength = str.mLength;
}

String::~String()
{
	mLength = 0;
	mString = "";
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
	int index{}, setSize{}, total{};

	for (int i = 0; mString[i] != ' '; i++)
	{
		index++;
	}

	for (int j = 0; set.mString[j] != ' '; j++)
	{
		setSize++;
	}

	total = index + setSize;
	char* temp{ new char[total] };

	for (int input = 0; input <= index + setSize; input++)
	{
		if (input < index)
		{
			temp[input] = mString[input];
		}
		else
		{
			temp[input] = set.mString[input];
		}
	}

	mString = temp;
	delete[] temp;

	return mString;
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
