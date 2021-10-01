#include "String.h"

String::String()
{
	mLength = 0;
	mString = new char[mLength];
}

String::String(const int index)
{
	mLength = index;
	mString = new char[mLength];

	for (int i = 0; i < mLength; i++)
	{
		if (i < mLength)
		{
			mString[i] = ' ';
		}
	}
	mString[mLength - 1] = '\0';
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
	mLength = strlen(set) + 1;
	
	//for (int i = 0; set[i] != '\0'; i++)
	//{
	//	mLength++;
	//}

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
	mLength = 0;
	while (mString[mLength] != '\0')
	{
		mLength++;
	}

	return mLength;
}

int String::SetLength(int set)
{
	mLength = set;

	return mLength;
}

// 매개변수를 const String&으로 변경
// GetLength()를 가지고 오면서 변수값이 추가 증가가 되었던 부분 수정
String String::operator+ (const String& set)
{
	int total{ 0 }, index1{ GetLength() }, index2{ 0 };

	while (set.mString[index2] != '\0') { index2++; }

	total = index1 + index2 + 1;
	String newString(total);

	for (int next = 0; next < total; next++)
	{
		if (next < index1)
		{
			newString[next] = mString[next];
		}
		else
		{
			newString[next] = set.mString[next - index1];
		}
	}

	newString[total - 1] = '\0';

	return newString;
}

String String::operator= (const String& set)
{
	mLength = set.mLength;
	mString = new char[mLength];

	for (int i = 0; i < mLength; i++)
	{
		mString[i] = set.mString[i];
	}

	return mString;
}

String String::operator+= (const String& set)
{
	(*this) = (*this) + set;
	return *this;
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