#include "ScheduleHandler.h"
#include <iostream>

using namespace std;




int EmployeeHandler::EmployeeSelection()
{
		
	return 0;	
		
};
//Employee& EmployeeHandler:: GetEmployee(int index)
//{

	
//};


int EmployeeHandler::GetEmployeeCount()
{

	return 0;

};
EmployeeHandler::EmployeeHandler()
{
	employeeCount = 0;	
		
}


void EmployeeHandler::AddEmployee()
{
	string firstName;
	string lastName;
	int PayRate;
	cout<<"option is 1"<<endl;
	cout<<" Adding  Employee..........."<<endl;
	cout<<endl;
	cout<<"NEW EMPLOYEE"<<endl;
	cout<<"First Name...?"<<endl;
	cin>>firstName;
	//cin>>Employee.m_firstname;
	cout<<"Last Name...?"<<endl;
	cin>>lastName;
	cout<<"PayRate...?"<<endl;
	cin>>PayRate;
	cout<<"**Employee 0 added"<<endl;
	m_lstEmployees[50];
	m_lstEmployees[employeeCount].SetUp(firstName,lastName,PayRate);
	employeeCount ++;
		
}
//void EmployeeHandler::EditEmployee();
//void EmployeeHandler::LayoffEmployee();
//void EmployeeHandler::DisplayEmployeeList();

//Employee& EmployeeHandler::GetEmployee(int index);
////int GetEmployeeCount();
//};