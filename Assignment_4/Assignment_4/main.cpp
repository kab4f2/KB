#include <string>
#include <iostream>

#include <fstream>
#include "PhoneBook.h"
#include "PhoneNumber.h"
#include "List.h"



using namespace std;

enum MenuOption{QUIT,VIEW_ALL_ENTRIES,FILTER_BY_COUNTRY,FILTER_BY_LETTER};

int main()
{
	bool done = false;
	PhoneBook phonebook;
	phonebook .ReadFile("numbers.txt");
	
	while(done != true)
	{
		int choice = -1;
		cout<<endl<<"MENU"<<endl;
		cout<<"----"<<endl;
	
		cout<<QUIT<<".Quit"<<endl;
		cout<<endl;
		cout<<VIEW_ALL_ENTRIES <<".View all Entries"<<endl;
		cout<<endl;
		cout<<FILTER_BY_COUNTRY <<".Filter by Country"<<endl;
		cout<<endl;
		cout<<FILTER_BY_LETTER<<".Filter by Letter"<<endl;
		

		cin>>choice;
		
		
		if (choice == VIEW_ALL_ENTRIES)
		{
			cout<<"All PHONE NUMBERS"<<endl;
			cout<<"------------------"<<endl;
			phonebook.OutPutAllPhoneNumber();// Function goes here on our phonebook instance"<<endl;
		}




		if (choice == FILTER_BY_COUNTRY)
		{
			phonebook.OutPutAllCountries();//Function goes here "<<endl;
			cout<<"Whats the name of the Country...?"<<endl;
			string choice;
			cin>>choice;
			cout<<"People who live in the Country :"<<choice<<endl;
			cout<<"--------------------------------"<<endl;
			phonebook.OutPutPhoneNumberFilter(choice);////// function of the phonebook class goes here"<<endl;
		}





		if (choice == FILTER_BY_LETTER)
		{
			
			cout<<"Enter a Upper-case Character"<<endl;
			char answ;
			cin>>answ;
			cout<<"People whose last name starts with:"<<answ<<endl;
			phonebook.OutPutPhoneNumberFilter(answ);
		}



		if (choice == QUIT)
		{
			cout<<"CYA"<<endl;
			done = true;
		}
	}


//int pauser;
//PhoneBook phonebook;
//phonebook.ReadFile("numbers.txt");

//phonebook.OutPutAllCountries();
//cin>>pauser;

//phonebook.OutPutAllPhoneNumber();
//cin>>pauser;

//phonebook.OutPutPhoneNumberFilter("France");
//cin>>pauser;

//phonebook.OutPutPhoneNumberFilter('T');
//cin>>pauser;


///List<PhoneNumber> list("list");
// PhoneNumber tempNumber("first1","last!","123-456-7890","US");
// list.AddItem(tempNumber);
//list.AddItem(tempNumber);
//tempNumber.Setup("first1","last!","123-456-7890","US");
//list.AddItem(tempNumber);

//list.AddItem("Kansas City");
//list.AddItem("Olathe");
////list.AddItem("Raytown");
//list.AddItem("Olathe");
///list.AddItem("Indeppendence");
//list.AddItem("Qak Grove");
//list.AddItem("Lee Summit");

//list.OutputAll();
//cout << "List size is:"<<list.GetSize()<<endl;

system("pause");
return 0;
}
