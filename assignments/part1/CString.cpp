#include "CString.h"

CString::CString()
{
	m_str_len = 0;
	m_str = new string("");

}

CString::CString(char* strSrc)
{
	m_str_len = 0;
	m_str = new string(strSrc);
	m_str_len = m_str->length();

}

CString::CString(char charSrc, int len = 1)
{
	m_str_len = len;
	m_str = new string(len, charSrc);

}

CString::CString(const CString& strSrc)
{
	m_str_len = strSrc.m_str_len;
	m_str = new string(strSrc.m_str->c_str());

}


const CString& CString::operator=(const CString& strSrc)
{

	m_str_len = strSrc.m_str_len;
	*m_str = strSrc.m_str->c_str();

	return *this;

}

void CString::accept_string(string str)
{
	*m_str = str;
	m_str_len = m_str->length();

}

void CString::display_string()
{
	cout << "String is : " << *m_str << endl;
	cout << "String len is : " << m_str_len << endl;
}

CString::~CString()
{
	cout << "dest called " << endl;
	delete m_str;
}
