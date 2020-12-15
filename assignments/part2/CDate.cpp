#include "CDate.h"

CDate::CDate()
{
	m_day = 0;
	m_month = 0;
	m_year = 0;
}

CDate::CDate(int day, int month, int year)
{
	m_day = day;
	m_month = month;
	m_year = year;
}

string CDate::get_CDate()
{
	string day = to_string(m_day);
	string month = to_string(m_month);
	string year = to_string(m_year);

	string str = day + "/" + month + "/" + year;
	return str;

}

void CDate::set_CDate(int day, int month, int year)
{
	m_day = day;
	m_month = month;
	m_year = year;
}