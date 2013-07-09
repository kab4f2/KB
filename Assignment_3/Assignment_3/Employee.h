#include <string>
#ifndef _EMPLOYEE
#define _EMPLOYEE


                                                                  
using namespace std;


class Employee
{
public:
	string m_firstname;
	string m_lastname;
	float m_payPerHour;
	bool m_activeEmployee;
private:
	void SetUp(const string& first,const string& last,float pay);
	string GetName();
	bool GetIsActive();
	void LayOff();
	void Output();

};
#endif
