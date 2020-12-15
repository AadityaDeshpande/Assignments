#pragma once
#include<iostream>
#include<string>

using namespace std;

class CDate
{
public:
	// Main constructor
	CDate();
	
	// Parameterized constructor
	CDate(int, int, int);
	
	// Get Date in String
	string get_CDate();
	
	// SET Date
	void set_CDate(int, int, int);

private:
	//member variables
	int m_day;
	int m_month;
	int m_year;
};