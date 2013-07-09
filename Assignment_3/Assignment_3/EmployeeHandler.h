#include <string>
#include"Employee.h"
#ifndef _EMPLOYEEHANDLER
#define _EMPLOYEEHANDLER



using namespace std;




class EmployeeHandler
{
public:

	string m_lstEmployees[50];
	int employeeCount;

private:
	EmployeeHandler();
	void AddEmployee();
	void EditEmployee();
	void LayoffEmployee();
	void DisplayEmployeeList();
	int EmployeeSelection();
	Employee& GetEmployee(int index);
	int GetEmployeeCount();
};
#endif