#pragma once
#include <iostream>

class String
{
private:
	const char* mString;
	int mLength;
	String* mElement;

public:
	String();
	String(const char* str);
	String(const String& str);
	~String();

	const char* GetString();
	void SetString(const char* set);

	int GetLength();
	int SetLength(int set);

	void Print();

	String operator+ (const String& string);
	String operator= (const String& string);
	String operator+= (const String& string);
	int operator[] (int index);
	friend std::ostream& operator <<(std::ostream& os, const String string);
};