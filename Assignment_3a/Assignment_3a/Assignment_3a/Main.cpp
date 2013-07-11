#include <fstream>
#include <string>
#include <iostream>

using namespace std;


#include"Employee.h"
#include"EmployeeHandler.h"






using std :: ofstream;
void DisplayMainMenu();
enum MenuOption{ QUIT,ADD_EMPLOYEE,EDIT_EMPLOYEE,LAYOFF_EMPLOYEE,VIEW_EMPLOYEE,UPDATE_SCHEDULE,CANCEL_SCHEDULE,VIEW_SCHEDULE,EXPORT_SCHEDULE_CSV,EXPORT_SCHEDULE_HTML};





int main()
{


	EmployeeHandler employeemanagement;
	


	
	cout<<endl;
	cout<<endl;
	
	
	bool Quit = false;
	while(Quit != true)
	{	
		
		
		DisplayMainMenu();
		int choice;
		cin>> choice;
		while( choice > 9)
		{
			cout<<"Please Enter a Number from 0 thru 9......!!!!!!"<<endl;
			break;
		}

		

			if (choice == ADD_EMPLOYEE)
			{
			
				employeemanagement.AddEmployee();
			}


			else if (choice == EDIT_EMPLOYEE)
			{
				cout<<"option is 2"<<endl;
				employeemanagement.EditEmployee();
				
			}


			else if (choice == LAYOFF_EMPLOYEE)
			{
				cout<<"option is 3"<<endl;
				employeemanagement.LayoffEmployee();

			}


			else if (choice == VIEW_EMPLOYEE)
			{
				cout<<"option is 4"<<endl;
				employeemanagement.DisplayEmployeeList();

			}


			else if (choice == UPDATE_SCHEDULE)
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
				cout<< "[9] : 9:00 - UNALLOCATED"<<endl;
				cout<< "[10] : 10:00 - UNALLOCATED"<<endl;
				cout<< "[11] : 11:00 - UNALLOCATED"<<endl;
				cout<< "[12] : 12:00 - UNALLOCATED"<<endl;
				cout<< "[13] : 13:00 - UNALLOCATED"<<endl;
				cout<< "[14] : 14:00 - UNALLOCATED"<<endl;
				cout<< "[15] : 15:00 - UNALLOCATED"<<endl;
				cout<< "[16] : 16:00 - UNALLOCATED"<<endl;
				cout<< "[17] : 17:00 - UNALLOCATED"<<endl;
				cout<< "[18] : 18:00 - UNALLOCATED"<<endl;
				cout<< "[19] : 19:00 - UNALLOCATED"<<endl;
				cout<< "[20] : 20:00 - UNALLOCATED"<<endl;
				cout<< "[21] : 21:00 - UNALLOCATED"<<endl;
				cout<< "[22] : 22:00 - UNALLOCATED"<<endl;
				cout<< "[23] : 23:00 - UNALLOCATED"<<endl;
				cout<< "[24] : 24:00 - UNALLOCATED"<<endl;
				
			
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
					cout <<"2 Hour"<<endl;
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
				cout<<"[0]:"<<firstName<<lastName<<PayRate<<endl;///print View Employee List(and their status)
				cout<<endl;
				int index;
				cout<<"Enter the index of the employee:"<<endl;
				cin>>index;
				if (index == 0 )
			
				{
					cout <<"You pick me"<<endl;

				}



			}
			else if (choice == CANCEL_SCHEDULE)
			{
				cout<<"option is 6"<<endl;
				cout<<"Schedule Cancelled........"<<endl;

			}
			else if (choice == VIEW_SCHEDULE)
			{
				cout<<"option is 7"<<endl;
				cout<<"View Schedule........."<<endl;
				ofstream outfile;
				outfile.open("Schedule.txt");   //write  info to a file
				outfile.close();

			}
			else if (choice == EXPORT_SCHEDULE_CSV)
			{
				cout<<"option is 8"<<endl;
				cout<<"EXport Schedule to CSV..........."<<endl;
				ofstream outfile;
				outfile.open("Schedule.CSV");   //write  info to a file
				outfile.close();

			}
			else if (choice == EXPORT_SCHEDULE_HTML)
			{
				cout<<"option is 9"<<endl;
				cout<<"EXport Schedule to HTML.........."<<endl;
				ofstream outfile;
				outfile.open("Schedule.HTML");   //write  info to a file
				outfile<<"head><title>Schedule</title>"<<endl;
				outfile << "<style type='text/css'>" << endl;
				outfile << "table tr td { border: solid 1px #000000; width: 200px;";
				outfile << "background: #cccccc; }" << endl;
				outfile << "</style></head>" << endl;
				outfile << "<body><table>" << endl;
				outfile << "<tr><td>HOUR</td><td>EMPLOYEE</td></tr>" << endl;
				for ( int i = 0; i < 24; i++ )
				{
					outfile << "<tr>" << endl;
					outfile << "<td>" << i << ":00</td>" << endl;
					outfile << "<td>";
					//outfile << m_lstSchedule[i].GetEmployeeName();
					outfile << "</td>" << endl;
					outfile << "</tr>" << endl;
				}
				outfile << "</table></body>" << endl;

				outfile.close();

			}
			else if (choice == QUIT)
			{
				cout<<"option is 0"<<endl;
				cout<<"You Quit..........Bye"<<endl;
				Quit = true;

			}



		}




	
	

	
	
		
	
		system("pause");
	

	
	
	
	
	 

	

	return 0;
}



void DisplayMainMenu()
{
	cout<<endl;
		cout<<endl;
		cout<<"BUSINESS MANAGEMENT SYSTEM !"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"EMPLOYEE OPTIONS"<<endl;
		cout<<endl;
		cout<<ADD_EMPLOYEE<<".Add Employee"<<endl;
		cout<<EDIT_EMPLOYEE<<".Edit Employee"<<endl;
		cout<<LAYOFF_EMPLOYEE<<".Layoff Employee"<<endl;
		cout<<VIEW_EMPLOYEE<<".View Employee"<<endl;
		cout<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"SCHEDULE OPTIONS"<<endl;
		cout<<endl;
		cout<<UPDATE_SCHEDULE<<".Update Schedule"<<endl;
		cout<<CANCEL_SCHEDULE<<".Cancel Schedule"<<endl;
		cout<<VIEW_SCHEDULE<<".View Schedule"<<endl;
		cout<<EXPORT_SCHEDULE_CSV<<".Export Schedule to CSV"<<endl;
		cout<<EXPORT_SCHEDULE_HTML<<".Export Schedule to HTML"<<endl;
		cout<<endl;
		cout<<"------------------------------"<<endl;
		cout<<endl;
		cout<<"0. Quit"<<endl;
		cout<<endl;
		cout<<"------------------------------"<<endl;
};

