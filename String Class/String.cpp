#include "String.h"

String::String()
{
	mLength = 0;
	mString = new char[mLength];
}

String::String(int index)
{
	mLength = index;
	mString = new char[mLength];

	for (int i = 0; i < mLength; i++)
	{
		mString[i] = ' ';
	}
	mString[mLength] = '\0';
}

String::String(char* set)
{
	mLength = sizeof(set);
	mString = new char[mLength];

	for (int i = 0; i < mLength; i++)
	{
		if (set[i] != '\0')
		{
			break;
		}
		mString[i] = *set;
	}
}

String::String(const char* set)
{
	mLength = sizeof(set);
	mString = new char[mLength];

	for (int i = 0; i < mLength; i++)
	{
		mString[i] = set[i];
	}
}

String::String(const String& set)
{
	mLength = set.mLength;
	mString = new char[mLength];
	for (int i = 0; i < mLength; i++)
	{
		mString[i] = set.mString[i];
	}
}

String::~String()
{
	mLength = 0;
	delete[] mString;
}

const char* String::GetString()
{
	return mString;
}

void String::SetString(char* set)
{
	*mString = *set;
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

String String::operator+ (String& set)
{
	int total{ 0 }, index1{ 0 }, index2{ 0 };
	const char* newString;
	// String temp;

	for (int i = 0; mString[i] != '\0'; i++)
	{
		index1 = i;
	}

	for (int j = 0; set.mString[j] != '\0'; j++)
	{
		index2 = j;
	}

	total = index1 + index2 + 2;

	char* tempString = new char[total];

	for (int k = 0; k <= total; k++)
	{
		if (k <= index1)
		{
			tempString[k] = mString[k];
		}
		else if( k > index1 && k <= total)
		{
			tempString[k] = set.mString[k - index1 - 1];
		}
	}
	newString = tempString;
	delete[] tempString;

	return newString;
}

String String::operator+= (const String& set)
{
	int total{ 0 }, index1{ 0 }, index2{ 0 };
	// String temp;

	for (int i = 0; mString[i] != '\0'; i++)
	{
		index1 = i;
	}

	for (int j = 0; set.mString[j] != '\0'; j++)
	{
		index2 = j;
	}

	total = index1 + index2 + 2;

	char* newString = new char[total];

	for (int k = 0; k <= total; k++)
	{
		if (k <= index1)
		{
			newString[k] = mString[k];
		}
		else if (k > index1 && k <= total)
		{
			newString[k] = set.mString[k - index1 - 1];
		}
	}
	mString = newString;
	delete[] newString;

	return mString;
}

String String::operator= (String& string)
{
	*mString = *string.mString;

	return mString;
}

String String::operator= (char* set)
{
	mString = set;
	return mString;
}


char& String::operator[] (int index)
{
	return mString[index];
}

std::ostream& operator<< (std::ostream& os, const String string)
{
	os << string.mString;

	return os;
}