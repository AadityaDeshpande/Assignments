#pragma once
#include<iostream>
#include<string>


using namespace std;

class CString
{
public:
	// Main constructor
	// Reserves memory and cleans content
	CString();

	// Parameterized constructor
	CString(char*);

	// Parameterized constructor
	CString(char, int);

	// copy constructor
	// Deep Copy
	CString(const CString& strSrc);

	// copy from another CString
	const CString& operator=(const CString& strSrc);

	// to accept string
	void accept_string(string);

	// to display string
	void display_string();

	// Destructor
	~CString();

private:
	// Length of the string
	unsigned int m_str_len;

	// Base address of the string
	string* m_str;
};
