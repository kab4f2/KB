//Keith Brown
//CS 201
//Assignment #2
//Battle Game
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <string>
#include<windows.h>

using namespace std;

int main()


{
	srand(time(NULL));

	cout<<"BATTLE GAME"<<endl;


	int CombatRounds = 0;

	bool done = false;

	int enemyHP = 20;
	int enemyAtk = rand()%2+5;
	int enemyDef = rand()%2+5;
	int enemyAgi = rand()%2+5;



	int playerHP = 20;
	int playerAtk = rand()%3+5;
	int playerDef = rand()%3+5;
	int playerAgi = rand()%3+5;


	float DelayLength = .5;

	cout<<endl; 
	cout<<"-------------------"<<endl;
	cout<<"FIGHTER STATS"<<endl;
	cout<<"-------------------"<<endl;



	cout<<endl; 
	cout<<"PLAYERS STATS:"<<endl;
	cout<<"HP: "<<playerHP <<endl;
	cout<<"Atk: "<<playerAtk<<endl;
	cout<<"Def: "<<playerDef<<endl;
	cout<<"Agi: "<<playerAgi<<endl;
	



	cout<<endl; 
	cout<<"ENEMYS STATS:"<<endl;
	cout<<"HP: "<<enemyHP <<endl;
	cout<<"Atk: "<<enemyAtk<<endl;
	cout<<"Def: "<<enemyDef<<endl;
	cout<<"Agi: "<<enemyAgi<<endl;




	cout<<endl;
	cout<< "Ready to Begin ? YES.... OR NO....."<<endl;
	string choice;
	cin>> choice;
	while (choice != "yes")
	{
		cout<<"Well, what are you waiting for?"<<endl;
		cout<<"Ready to begin? (yes/no)"<<endl;
		cin>>choice;
	}
	while(done == false)
	{
		CombatRounds ++ ;
		cout<<endl;
		cout<<"#########################################"<<endl;
		cout<<"-----------------------------------------"<<endl;
		cout<<"ROUND" <<CombatRounds<<endl;
		cout<<"PLAYER:"<<endl;
		cout<<"HP"<<playerHP<<endl;
		cout<<"ATK"<<playerAtk<<endl;
		cout<<"DEF"<<playerDef<<endl;
		cout<<"AGI"<<playerAgi<<endl;
	
		cout<<"ENEMY:"<<endl;
		cout<<"HP"<<enemyHP<<endl;
		cout<<"ATK"<<enemyAtk<<endl;
		cout<<"DEF"<<enemyDef<<endl;
		cout<<"AGI"<<enemyAgi<<endl;
		Sleep(1000);



		cout<<"----------------------------------------"<<endl;
		cout<<"---------1.Quick Attack-----------------"<<endl;
		cout<<"---------2.Standard Attack--------------"<<endl;
		cout<<"---------3.Heavy Attack-----------------"<<endl;
		cout<<"What will you do?"<<endl;
		int playerChoice;
		cin>>playerChoice;
		while(playerChoice < 1)
		{
			cout<<"Invalid choice, choose between 1 and 3:";
			cin>>playerChoice;
		}
		int enemyChoice = 1 + rand()% 3;
		cout<<"Enemy choose option "<<enemyChoice<<endl;
		cout<<"----------------------------------------"<<endl;


		//Adjust player and enemy stats based on the type of attack theyre doing
		int adjustedPlayerAtk = playerAtk;
		int adjustedPlayerAgi = playerAgi;
		int adjustedEnemyAtk = enemyAtk;
		int adjustedEnemyAgi = enemyAgi;


		if (playerChoice == 1)
		{
			 adjustedPlayerAgi += 2;
			 adjustedPlayerAtk -= 1;
		}
		else if (playerChoice == 3)
		{
			 adjustedPlayerAgi -=1;
			 adjustedPlayerAtk +=2;
		}
		 if (enemyChoice == 1)
		{
			 adjustedEnemyAgi += 2;
			 adjustedPlayerAtk -= 1;
		}
		else if (enemyChoice == 1)
		{
			 adjustedEnemyAgi -= 1;
			 adjustedPlayerAtk += 2;
		}
		//Begin Battles


		cout<<"PLAYER attacks ENEMY!"<<endl;
		Sleep(1000);
		int randDiff  = 1 + rand()% 3;
		Sleep(1000);
		if (randDiff >= 1)
		{
			//Calulate Damage
			int damage = adjustedPlayerAtk - enemyDef/2;
			cout<<"PLAYER hits ENEMY for"<<damage<<"damage"<<endl;
			enemyHP -= damage;
		}
		else 
		{
			cout<<"PLAYER misses!"<<endl;
		}
		Sleep(1000);
		cout<<"ENEMY Attacks PLAYER"<<endl;
		Sleep(1000);
		
		randDiff = rand()%3+5;////fix this
		Sleep(1000);
		if (randDiff >= 1)
		{
			//Calulate Damage
			int damage = adjustedEnemyAtk - playerDef/2;
			cout<<" ENEMY hits PLAYER for"<<damage<<"damage"<<endl;
			playerHP -= damage;
		}
		else 
		{
			cout<<"ENEMY misses!"<<endl;
		}
		Sleep(1000);
		///Check to see if either player is knocked out
		if (playerHP <= 0)
		{
			cout<<"PLAYER has FALLEN"<<endl;
			done = true;
		}
		else if (enemyHP <= 0)
		{
			cout<<"ENEMY has FALLEN"<<endl;
			done = true;
		}
	}
//GAME Main Loop

// At ths point , either player or enemy has fallen
cout<<endl;
cout<<"  ################################################  "<<endl;
cout<<"  #######                                   ######  "<<endl;
cout<<"  ###########        GAME OVER         ###########  "<<endl;
cout<<"  ################################################  "<<endl;
cout<<"  ##                                            ##  "<<endl;
cout<<endl;
if (playerHP <= 0 )
{
	cout<<"TOO BAD, YOU LOST!"<<endl;
}
else if (enemyHP <= 0)
{
	cout<<"CONGRATULATIONS, YU WON!"<<endl;
}
	











	
	
	
	






	system("PAUSE");
	return 0;
}

