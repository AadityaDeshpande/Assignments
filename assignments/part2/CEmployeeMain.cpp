#include "CEmployee.h"

int main()
{
	char choice = '0';
	CEmployee* cemployee = nullptr;
	CWageEmployee wemp;
	while (choice != '8')
	{
		cout << "\t\t***** Menu *****" << endl;
		cout << "1) Set Employee Data" << endl;
		cout << "2) Display Employee Data" << endl;
		cout << "3) Update Employee Basic Salary" << endl;
		cout << "4) Calculate Total Salary" << endl;
		cout << "5) Set Employee Data using Parent Class pointer " << endl;
		cout << "6) Display Employee Data using Parent Class pointer " << endl;
		cout << "7) Create New CWageEmployee Object" << endl;
		cout << "8) Exit" << endl;
		cin >> choice;

		switch (choice)
		{
		case '1':
		{
			wemp.set_emp_details();
			break;
		}
		case '2':
		{
			wemp.display_emp_details();
			break;
		}

		case '3':
		{
			int sal;
			cout << "Enter Updated Salary amount: ";
			cin >> sal;
			wemp.set_emp_salary(sal);
			break;
		}
		case '4':
		{
			cout<< "Employee Salary is "<< wemp.compute_salary() << endl;
			break;
		}

		case '5':
		{
			cemployee = new CWageEmployee(); //Changes:
			cemployee->set_emp_details();
			cemployee->display_emp_details();
			break;
		}
		case '6':
		{
			if(cemployee != nullptr)
			{
				cemployee->display_emp_details();
			}
			else
			{
				cout << "No Employee Created to display, so make one"<<endl;
				cemployee = new CWageEmployee(); //Changes: 
				cemployee->set_emp_details();
				cemployee->display_emp_details();
			}
			
			break;
		}
		
		
		case '7':
		{
			CWageEmployee wemp2;
			//wemp2.set_emp_details();
			wemp2.display_emp_details();
			break;
		}
		
		case '8':
		{
			delete cemployee; // Resolved memory leak
			cout << "BYE" << endl;
			break;
		}

		default:
			break;
		}

	}
	return 0;
}