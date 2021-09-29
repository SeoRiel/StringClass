#pragma once
#include <iostream>

class String
{
private:
	const char* mString;
	int mLength;

public:
	String();
	String(int index);
	String(const char* str);
	String(const String& str);
	~String();

	const char* GetString();
	void SetString(const char* set);

	int GetLength();
	int SetLength(int set);

	String operator+ (const String& set);
	String operator= (String& set);
	String operator+= (const String& set);
	int operator[] (int index);
	friend std::ostream& operator <<(std::ostream& os, const String set);
};