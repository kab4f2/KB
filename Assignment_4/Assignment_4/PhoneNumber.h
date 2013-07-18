#ifndef _PHONENUMBER
#define _PHONENUMBER
#include <string>
#include <iostream>




using namespace std;


class PhoneNumber
{
public:
	PhoneNumber(){}                  ///Default Constructor                                
	PhoneNumber(const string& first,const string& last,const string& phone,const string& country);
	void Setup(const string& first,const string& last,const string& phone,const string& country);
	friend bool operator==(const PhoneNumber& item1,const PhoneNumber& item2); 
	friend ostream& operator<<(ostream& out,PhoneNumber& item);
	friend class PhoneBook;


private:
	string m_firstName;                         
	string m_lastName;
	string m_phoneNumber;
	string m_country;
	
};


void PhoneNumber::Setup(const string&  first,const string& last,const string&  phone,const string&  country)
{
	m_firstName = first;
	m_lastName = last;
	m_phoneNumber = phone;
	m_country = country;
};
bool  operator==(const PhoneNumber& item1,const PhoneNumber& item2)
{
	
	if (item1.m_firstName == item2.m_firstName&&item1.m_lastName == item2.m_lastName)
	{
		return true;
	}
	else
	{
		return false;
	}
}

	

ostream & operator<<(ostream& out,PhoneNumber& item)
{
	
	out<<item.m_lastName<<endl;
	out<<item.m_firstName<<endl;
	out<<item.m_country<<endl;
	out<<item.m_phoneNumber<<endl;
	return out;

}
PhoneNumber::PhoneNumber(const string& first,const string& last,const string& phone,const string& country)
{
	m_firstName = first;
	m_lastName = last;
	m_phoneNumber = phone;
	m_country = country;
};
#endif;