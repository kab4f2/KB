#include<string>
#include<fstream>
#include<iostream>
#include<map>
#include<vector>



using namespace std;

void DisplayMenu();
void AddRecipe( map< string, vector<string> >& recipes );
void ExportRecipes( map< string, vector<string> >& recipes );


void DisplayMenu()
{
	cout<<endl<<"MENU"<<endl;
	cout<<"-----"<<endl;
	cout<<"[0] for Quit"<<endl;
	cout<<endl;
	cout<<"[1] for Add Recipes"<<endl;
	cout<<endl;
	cout<<"[2] for Export Recipes"<<endl;
};


void AddRecipe( map< string, vector<string> >& recipes )
{
	cout<<" "<<endl;
	cout<<"Whats the Name of the Recipes"<<endl;
			 string name;
			 cin>>name;
			 bool finished = false;
			 while(finished == false)
			 {
				 cout<<"What are the ingredients and the amounts?"<<endl;
				 string ingredient,amount;
				 getline(cin,ingredient,'\n');
				 if (ingredient == "done")
				 {
					 finished = true;
				 }
				 else if(ingredient == " ")
				 {
					 
					 finished = true;
				 }
				 else
				 {
					 recipes[name] .push_back(ingredient);
					 cout<<"Added \""<< ingredient <<"\"."<<endl << endl;
				 }

			 }
};



void ExportRecipes( map< string, vector<string> >& recipes )
{
	
	
	ofstream outfile;
	outfile.open("Recipes.txt");
	for (map< string, vector<string> >::iterator recipe = recipes.begin();recipe != recipes.end();recipe++)
	{
		outfile<< endl<< recipe->first <<endl;
	
		for (vector< string >::iterator ingredient = recipe->second.begin();
			ingredient != recipe ->second.end();
			ingredient++)
			
		{
			outfile<< "\t"<< *ingredient <<endl;
		};
	}
	outfile.close();
	
};