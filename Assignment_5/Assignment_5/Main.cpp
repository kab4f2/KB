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
			cout<<"Quitting.....Bye"<<endl;
			done = true;
		 }


		 else if (choice == 1)
		 {
			 cout<<"Adding Recipes"<<endl;
			 AddRecipe(recipes);
		 }


		else if (choice == 2)

		{
			ExportRecipes(recipes);
			
		}
			
	}
	return 0;
}
