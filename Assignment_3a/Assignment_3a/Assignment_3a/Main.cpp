#include <fstream>
#include <string>
#include <iostream>

using namespace std;


#include"Employee.h"
#include"EmployeeHandler.h"






using std :: ofstream;
void DisplayMainMenu();





int main()
{


	EmployeeHandler employeemanagement;
	


	ofstream outputStream;
	
	
	outputStream.open("output4.txt");   //write  info to a file
	cout<<endl;
	cout<<endl;
	
	bool Quit = false;
	while(Quit != true)
	{	
		cout<<endl;
		cout<<endl;
		cout<<"BUSINESS MANAGEMENT SYSTEM !"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"EMPLOYEE OPTIONS"<<endl;
		cout<<endl;
		cout<<"1. ADD Employee"<<endl;
		cout<<"2. Edit Employee"<<endl;
		cout<<"3. Layoff Employee"<<endl;
		cout<<"4. View Employee"<<endl;
		cout<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"SCHEDULE OPTIONS"<<endl;
		cout<<endl;
		cout<<"5.Update Schedule"<<endl;
		cout<<"6.Cancel Schedule"<<endl;
		cout<<"7.View Schedule"<<endl;
		cout<<"8.Export Schedule to CSV"<<endl;
		cout<<"9.Export Schedule to HTML"<<endl;
		cout<<endl;
		cout<<"------------------------------"<<endl;
		cout<<endl;
		cout<<"0. Quit"<<endl;
		cout<<endl;
		cout<<"------------------------------"<<endl;
		string choice;
		cin>> choice;
		if (choice == "1")
		{
			
			employeemanagement.AddEmployee();
		}
		else if (choice == "2")
		{
			cout<<"option is 2"<<endl;
			cout<<"Editing Employee........."<<endl;

		}
		else if (choice == "3")
		{
			cout<<"option is 3"<<endl;
			cout<<"Layingoff Employee..........."<<endl;

		}
		else if (choice == "4")
		{
			cout<<"option is 4"<<endl;
			cout<<"Viewing Employee List..........."<<endl;

		}
		else if (choice == "5")
		{
			cout<<"option is 5"<<endl;
			cout<<"Updating Schedule........"<<endl;
			string option;
			cout<<endl;
			cout<< "[0] : 0:00 - UNALLOCATED"<<endl;
			cout<< "[1] : 1:00 - UNALLOCATED"<<endl;
			cout<< "[2] : 2:00 - UNALLOCATED"<<endl;
			cout<< "[3] : 3:00 - UNALLOCATED"<<endl;
			cout<< "[4] : 4:00 - UNALLOCATED"<<endl;
			cout<< "[5] : 5:00 - UNALLOCATED"<<endl;
			cout<< "[6] : 6:00 - UNALLOCATED"<<endl;
			cout<< "[7] : 7:00 - UNALLOCATED"<<endl;
			cout<< "[8] : 8:00 - UNALLOCATED"<<endl;
			
			cout<<endl;
			cout<< "Enter the schedule hour-block:"<<endl;
			cin>> option;
			if (option =="0")
			{
				cout <<"0 Hour"<<endl;
			}
			else if (option =="1")
			{
				cout <<"1 Hour"<<endl;
			}
			else if (option =="2")
			{
			}
			else if (option =="3")
			{
				cout <<"3 Hour"<<endl;
			}
			else if (option =="4")
			{
				cout <<"4 Hour"<<endl;
			}
			else if (option =="5")
			{
				cout <<"5 Hour"<<endl;
			}
			else if (option =="6")
			{
				cout <<"6 Hour"<<endl;
			}
			else if (option =="7")
			{
				cout <<"7 Hour"<<endl;
			}
			else if (option =="8")
			{
				cout <<"8 Hour"<<endl;
			}
			cout<<"EMPLOYEES"<<endl;
			cout<<endl;
			string firstName;
			string lastName;
			int PayRate;
			cout<<"[0]:"<<"firstName"<<"lastName"<<"PayRate"<<endl;///print View Employee List(and their status)
			cout<<endl;
			int index;
			cout<<"Enter the index of the employee:"<<endl;
			cin>>index;
			if (index == 0 )
			
			{
				cout <<"You pick me"<<endl;

			}



		}
		else if (choice == "6")
		{
			cout<<"option is 6"<<endl;
			cout<<"Schedule Cancelled........"<<endl;

		}
		else if (choice == "7")
		{
			cout<<"option is 7"<<endl;
			cout<<"View Schedule........."<<endl;

		}
		else if (choice == "8")
		{
			cout<<"option is 8"<<endl;
			cout<<"EXport Schedule to CSV..........."<<endl;

		}
		else if (choice == "9")
		{
			cout<<"option is 9"<<endl;
			cout<<"EXport Schedule to HTML.........."<<endl;

		}
		else if (choice == "0")
		{
			cout<<"option is 0"<<endl;
			cout<<"You Quit..........Bye"<<endl;
			Quit = true;

		}



	}




	
	

	
	
		
	
	system("pause");
	

	
	
	
	
	 

	outputStream.close();

	return 0;
}



void DisplayMainMenu();

