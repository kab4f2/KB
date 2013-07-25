#include "map.h"
#include <string>
#include <iostream>
#include <fstream>



using namespace std;



enum MenuOption{QUIT,ADD_RECIPES,EXPORT_RECIPES};


int main()


{
	map< string, vector<string> > recipes;
	bool done = false;
	while(done != true)
	{
		DisplayMenu();
		int choice;
		cin>>choice;
		
		
		if (choice == 0)
		{ 
			cout<<"BYE"<<endl;
			done = true;
		 }


		 if (choice == 1)
		 {
			void AddRecipe();
		 }


		if (choice == 2)

		{
			void ExportRecipes();
			
		}
			
	}
	return 0;
}
