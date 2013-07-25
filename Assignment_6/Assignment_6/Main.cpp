#include <iostream>
#include <string>
#include<fstream>
#include <cstdlib>
#include <time.h>
#include "windows.h"
#include "CardSatck.h"


using namespace std;



int main()
{
	srand(time(NULL));

	CardStack cards;

	ofstream outfile;
	outfile.open("Output.txt");
	int players[5];
	players[0] = 0;
	players[1] = 0;
	players[2] = 0;
	players[3] = 0;
	players[4] = 0;

	for(int i = 0;i < 1000; i++)
	{
		cards.Push(rand() % 100);
		
	}
	
	while ( cards.GetSize() != 0 )
	{
		for (int i = 0; i < 5; i++)
		{
			players[i] += cards.Top();
			cards.Pop();
		}
	 
	}
	outfile<<"---------------------------"<<endl;
	outfile<<"Player # 1 score is:"<<players[0]<<endl;
	outfile<<"Player # 2 score is:"<<players[1]<<endl;
	outfile<<"Player # 3 score is:"<<players[2]<<endl;
	outfile<<"Player # 4 score is:"<<players[3]<<endl;
	outfile<<"Player # 5 score is:"<<players[4]<<endl;
	outfile<<"---------------------------"<<endl;



	if (players[0]> players[1] && players[0]> players[2] && players[0]> players[3] && players[0]> players[4])
	{
		outfile<<"Player 1 is the winner....!"<<endl;
	}
	else if (players[1]> players[2] && players[1]> players[0] && players[1]> players[3] && players[1]> players[4])
	{
		outfile<<"Player 2 is the winner.......!"<<endl;
	}
	else if (players[2]> players[0] && players[2]> players[1] && players[2]> players[0] && players[2]> players[4])
	{
		outfile<<"Player 3 is the winner......!"<<endl;
	}
	else if (players[3]> players[0] && players[3]> players[1] && players[3]> players[2] && players[3]> players[4])
	{
		outfile<<"Player 4 is the winner............!"<<endl;
	}
	else if (players[4]> players[0] && players[4]> players[1] && players[4]> players[2] && players[4]> players[3])
	{
		outfile<<"Player 5 is the winner..........!"<<endl;
	}
	
	outfile.close();
	return 0;
}

