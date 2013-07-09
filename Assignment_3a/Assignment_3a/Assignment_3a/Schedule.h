#include <string>
#include"Employee.h"
#ifndef _SCHEDULE
#define _SCHEDULE



using namespace std;



class Schedule
{
public:

	Employee*  m_ptrEmployees;
	int beginHour;

private:
	
	void SetUp();
	void AssignEmployee(Employee *employee);
	string GetEmployeeName();
	void Output();
	void Reset();
	bool GetIsSet();
};
#endif