#include "String.h"

String::String(const char* str)
	: mStr{ str }
{

}

String::String(const String& str)
{
	mString = new String();
	mString->mStr = str.mString->mStr;
	mString->mSize = str.mString->mSize;
}

String::~String()
{
	delete[] mString;
}
