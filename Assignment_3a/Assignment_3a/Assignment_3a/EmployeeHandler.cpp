#include "ScheduleHandler.h"
#include "EmployeeHandler.h"
#include <iostream>

using namespace std;




int EmployeeHandler::EmployeeSelection()
{
		
	DisplayEmployeeList();
	int answer;
	cout<< "Input the Index:"<<endl;
	cin>>answer;
	return answer;

		
};
//Employee& EmployeeHandler:: GetEmployee(int index)
//{

	
//};


int EmployeeHandler::GetEmployeeCount()
{

	return employeeCount;

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
void EmployeeHandler::EditEmployee()
{
	DisplayEmployeeList();
	int EmployeeSelection();
	int num;
	string firstName;
	string lastName;
	int PayRate;
	m_lstEmployees[num];
	cout<<"First Name...?"<<endl;
	cin>>firstName;
	//cin>>Employee.m_firstname;
	cout<<"Last Name...?"<<endl;
	cin>>lastName;
	cout<<"PayRate...?"<<endl;
	cin>>PayRate;
	
	
}
void EmployeeHandler::LayoffEmployee()
{
	DisplayEmployeeList();
	int index;
	cout<<"what the index of the employee"<<endl;
	cin>>index;
	


};
void EmployeeHandler::DisplayEmployeeList()
{	
	m_lstEmployees[50];
	
	int u = 0;	
	for ( int i = 0; i < employeeCount; i++ )
	{		
		m_lstEmployees[i].Output();

	}
}

//Employee& EmployeeHandler::GetEmployee(int index);

