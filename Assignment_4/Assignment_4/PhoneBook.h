#ifndef _PHONEBOOK
#define _PHONEBOOK
#include <string>
#include <iostream>
#include <fstream>
#include "PhoneNumber.h"
#include "List.h"



using namespace std;


class PhoneBook
{
public:
	PhoneBook(){}
	void ReadFile(const string& fileName);               
	void OutPutAllCountries();
	void OutPutAllPhoneNumber();
	void OutPutPhoneNumberFilter(const string& country);             
	void OutPutPhoneNumberFilter(char letter);
	



private:
	List <PhoneNumber> m_listPhoneNumbers;
	List <string> m_listCountries; 
	
};
void PhoneBook::ReadFile(const string& fileName)
{
	string first, last,phone,country;
	ifstream infile;
	infile.open(fileName.c_str());                             //How is the file opened......?????????
	while(infile>>first>> last>> phone>>country)
	{
		PhoneNumber tempPhone(first,last,phone,country);
		m_listPhoneNumbers.AddItem(tempPhone);
		m_listCountries.AddItem(country);
	}
	cout<<m_listPhoneNumbers.GetSize();
	///close();                                            //Find out how to close the file????????
	
};




void PhoneBook::OutPutAllCountries()
{
	m_listCountries.OutPutAll();
};



void PhoneBook::OutPutAllPhoneNumber()
{
	m_listPhoneNumbers.OutPutAll();
};




void PhoneBook::OutPutPhoneNumberFilter(const string& country)
{
	for (int i = 0;i<m_listPhoneNumbers.GetSize();i++)
	{
		PhoneNumber item = m_listPhoneNumbers.GetItem(i);
		if (item.m_country == country)
		{

			cout<<item<<endl;
		}
	}
	

};
void PhoneBook::OutPutPhoneNumberFilter(char letter)
{
	
	cout <<"joe"<<endl;
	for (int i = 0;i<m_listPhoneNumbers.GetSize();i++)
	{
		PhoneNumber item = m_listPhoneNumbers.GetItem(i);
		if (item.m_lastName[0] == letter)
		{

			cout<<item<<endl;
		}
	}
};
#endif;