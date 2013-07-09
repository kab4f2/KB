#include <string>
#include"Employee.h"
#ifndef _EMPLOYEEHANDLER
#define _EMPLOYEEHANDLER



using namespace std;




class EmployeeHandler
{
private:

	Employee m_lstEmployees[50];
	int employeeCount;

public:
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