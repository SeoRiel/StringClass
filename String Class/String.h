#pragma once
#include <iostream>

class String
{
private:
	char* mString;
	int mLength;

public:
	String();
	String(int index);
	String(char* set);
	String(const char* set);
	String(const String& set);
	~String();

	const char* GetString();
	void SetString(char* set);

	int GetLength();
	int SetLength(int set);

	String operator+ (String& set);
	String operator+= (const String& set);
	String operator= (String& set);
	String operator= (char* set);
	char& operator[] (int index);
	friend std::ostream& operator <<(std::ostream& os, const String set);
};