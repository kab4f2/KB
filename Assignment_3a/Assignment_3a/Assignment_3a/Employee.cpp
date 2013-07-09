#include "Employee.h"



void Employee::SetUp(const string& first,const string& last,float pay)
{
	 m_firstname  = first;
	 m_lastname = last;
	 m_payPerHour = pay;
	 m_activeEmployee = true;
};


string Employee::GetName()
{
	return "";
};
bool Employee::GetIsActive()
{
	return true;
}
void Employee::LayOff()
{

};
void Employee:: Output()
{

};