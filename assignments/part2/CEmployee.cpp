#include "CEmployee.h"

int CEmployee::m_emp_ID_counter = 0;

CEmployee::CEmployee()
{	
	m_emp_ID = get_unique_ID();
}

CEmployee::~CEmployee()
{
	
}

void CEmployee::set_emp_details()
{
	string name;
	cin.ignore();
	cout << "Enter Employee Name: \n";
	//cin.ignore();
	//cin.clear();
	getline(cin, name);
	m_emp_name.accept_string(name);

	int day, month, year;
	cout << "Enter Employee Join Date info:" << endl;
	cout << "Enter Day: " << endl;
	cin >> day;
	cout << "Enter Month: " << endl;
	cin >> month;
	cout << "Enter Year: " << endl;
	cin >> year;

	m_join_date.set_CDate(day, month, year);

}

void CEmployee::display_emp_details()
{
	cout << "\n*************************************\n" << endl;
	cout << "\nEmployee Details are" << endl;
	cout << "Employee ID is " << m_emp_ID << endl;
	cout << "Employee Name is ";
	m_emp_name.display_string();
	cout << endl;
	cout << "Employess Join Data is " << m_join_date.get_CDate() << endl;
}

int CEmployee::get_unique_ID()
{
	return CEmployee::m_emp_ID_counter++;
}




CWageEmployee::CWageEmployee()
{
	m_basic_wage = 10000;
	m_working_hrs = 1;
}

CWageEmployee::~CWageEmployee()
{
	
}

void CWageEmployee::set_emp_details()
{
	int wage, hrs;
	CEmployee::set_emp_details();
	cout << "Enter basic wage :";
	cin >> wage;
	set_emp_salary(wage);
	cout << "Set Employee Working hrs :";
	cin >> hrs;
	set_emp_working_hrs(hrs);
}

void CWageEmployee::set_emp_salary(int sal)
{
	m_basic_wage = sal;
}

void CWageEmployee::display_emp_details()
{
	CEmployee::display_emp_details();
	cout << "Basic salary is " << m_basic_wage << endl;
	cout << "Working hrs is "<< m_working_hrs << endl;
	cout << "Total Salary is "<< compute_salary() << endl;
}

void CWageEmployee::set_emp_working_hrs(int hrs)
{
	m_working_hrs = hrs;
}

int CWageEmployee::get_emp_working_hrs()
{
	return (m_working_hrs);
}

int CWageEmployee::compute_salary()
{
	if (m_working_hrs < 1)
	{
		return (m_basic_wage);
	}
	else
	{
		return (m_basic_wage * m_working_hrs);
	}
	
}

