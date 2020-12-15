#include "CString.h"
#include "CDate.h"

int main()
{
	CString cstring;

	CString obj;
	obj.display_string();

	char s[] = { 'c', 'o', 'd', 'i', 'n', 'g' ,'\0' };
	CString obj1(s);
	obj1.display_string();

	char ch = 'A';
	CString obj2(ch, 1);
	obj2.display_string();

	string temp;
	cout << " Enter a String: ";
	getline(cin, temp);
	cstring.accept_string(temp);
	cstring.display_string();

	CString obj3(cstring);
	obj3.display_string();

	CString obj4;
	obj4 = cstring;
	obj4.display_string();
	
	int day, month, year;
	cout << "Enter Employee Join Date info:" << endl;
	cout << "Enter Day: " << endl;
	cin >> day;
	cout << "Enter Month: " << endl;
	cin >> month;
	cout << "Enter Year: " << endl;
	cin >> year;
	
	CDate date;
	date.set_CDate(day, month, year);
	
	date.get_CDate();
	

	return 0;
}