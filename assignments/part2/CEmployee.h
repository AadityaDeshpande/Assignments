#pragma once
#include "CString.h"
#include "CDate.h"

class CEmployee
{
public:
	// Main constructor
	CEmployee();
	// Destructor
	~CEmployee();
	
	
	virtual void set_emp_details();
	virtual void display_emp_details();

	virtual int compute_salary() = 0;

	static int m_emp_ID_counter; //default zero initialised
private:

	int m_emp_ID;
	CString m_emp_name;
	CDate m_join_date;

	int get_unique_ID();

};

class CWageEmployee : public CEmployee
{
public:
	CWageEmployee();
	~CWageEmployee();

	void set_emp_details();
	void set_emp_salary(int);
	
	void display_emp_details();
	int compute_salary();

	void set_emp_working_hrs(int);
	int get_emp_working_hrs();

private:
	
	int m_basic_wage;
	int m_working_hrs;
};