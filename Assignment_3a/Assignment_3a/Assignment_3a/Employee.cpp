#include "Employee.h"
#include<iostream>


using namespace std;



void Employee::SetUp(const string& first,const string& last,float pay)
{
	 m_firstname  = first;
	 m_lastname = last;
	 m_payPerHour = pay;
	 m_activeEmployee = true;
};


string Employee::GetName()
{
	
	return m_lastname + m_firstname;
};
bool Employee::GetIsActive()

{
	
	
	return true;
}
void Employee::LayOff()

{
	m_activeEmployee = false;


};
void Employee:: Output()
{
	
	if (m_activeEmployee == true)
	{
		cout<<"Name:"<<m_firstname<<","<<m_lastname <<" "<<"Pay Rate:"<<m_payPerHour<<"(Current Employee)"<<endl;
	}
	else if(m_activeEmployee = false)
	{
		cout<<"Name:"<<m_firstname<<","<<m_lastname <<" "<<"Pay Rate:"<<m_payPerHour<<"(Former Employee)"<<endl;

	}
};