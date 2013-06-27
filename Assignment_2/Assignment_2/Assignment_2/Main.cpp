//Keith Brown
//CS 201
//Assignment #2
//Battle Game
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <string>
#include<windows.h>
#include"Character.h"
#include"Equipment.h"

using namespace std;

void DisplayStats(Character player,Character enemy);

Character AdjustStats(Character character,int attackChoice);

int main()


{
	srand(time(NULL));
	

	cout<<"BATTLE GAME"<<endl;


	int CombatRounds = 0;

	bool done = false;



	Equipment equipment [3];
	equipment[0].Setup("Knight's Pack",8,4,3);
	equipment[1].Setup("Tank's Pack",4,8,3);
	equipment[2].Setup("Rogue's Pack",4,3,8);

	Character enemy;
	enemy.name = "Enemy";
	enemy.hp = 20;
	
	


	Character player;
	player.name = "Player";
	player.hp = 20;
	


	int call;

	cout<<   "        MENU      "   <<endl;
	cout <<  "0 for Knight's Pack"  <<endl;
	cout <<  "1 for Tanks's Pack"   <<endl;
	cout <<  "2 for Rogue's Pack"   <<endl;

	
	cout<<"Enter a Number of the  equipment to continue"<<endl;
	cin>>call;
	
		equipment[0];
		player.atk = equipment[call].atk;
		player.def = equipment[call].def;
		player.agi = equipment[call].agi;

		call = rand()% 3;
		enemy.atk = equipment[call].atk;
		enemy.def = equipment[call].def;
		enemy.agi = equipment[call].agi;


		DisplayStats( player ,enemy);
		
	
	
	
		
		
	
	


	float DelayLength = .5;

	cout<<endl; 
	cout<<"-------------------"<<endl;
	cout<<"FIGHTER STATS"<<endl;
	cout<<"-------------------"<<endl;



	cout<<endl; 
	cout<<"PLAYERS STATS:"<<endl;
	cout<<"HP: "<<player.hp <<endl;
	cout<<"Atk: "<<player.atk<<endl;
	cout<<"Def: "<<player.def<<endl;
	cout<<"Agi: "<<player.agi<<endl;
	



	cout<<endl; 
	cout<<"ENEMYS STATS:"<<endl;
	cout<<"HP: "<<enemy.hp <<endl;
	cout<<"Atk: "<<enemy.atk<<endl;
	cout<<"Def: "<<enemy.def<<endl;
	cout<<"Agi: "<<enemy.agi<<endl;
	




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
		
		DisplayStats( player,enemy);
		
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


		

		player = AdjustStats(player,playerChoice);
		enemy = AdjustStats(enemy,enemyChoice);
		
		//Begin Battles


		cout<<"PLAYER attacks ENEMY!"<<endl;
		Sleep(1000);
		int randDiff  = 1 + rand()% 3;
		Sleep(1000);
		if (randDiff >= 1)
		{
			//Calulate Damage
			int damage = player.adjustedAtk - enemy.def/2;
			cout<<"PLAYER hits ENEMY for"<<damage<<"damage"<<endl;
			enemy.hp -= damage;
		}
		else 
		{
			cout<<"PLAYER misses!"<<endl;
		}
		Sleep(1000);
		cout<<"ENEMY Attacks PLAYER"<<endl;
		Sleep(1000);
		
		randDiff = rand()%3+5;
		Sleep(1000);
		if (randDiff >= 1)
		{
			//Calulate Damage
			int damage = enemy.adjustedAtk - player.def/2;
			cout<<" ENEMY hits PLAYER for"<<damage<<"damage"<<endl;
			player.hp -= damage;
		}
		else 
		{
			cout<<"ENEMY misses!"<<endl;
		}
		Sleep(1000);
		///Check to see if either player is knocked out
		if (player.hp <= 0)
		{
			cout<<"PLAYER has FALLEN"<<endl;
			done = true;
		}
		else if (enemy.hp <= 0)
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
if (player.hp <= 0 )
{
	cout<<"TOO BAD, YOU LOST!"<<endl;
}
else if (enemy.hp <= 0)
{
	cout<<"CONGRATULATIONS, YU WON!"<<endl;
}
	system("PAUSE");
	return 0;
}
void DisplayStats(Character player,Character enemy)
{
	cout<<player.name<<endl;
	cout<<player.atk<<endl;
	cout<<player.agi<<endl;
	cout<<player.def<<endl;


	cout<<enemy.name<<endl;
	cout<<enemy.atk<<endl;
	cout<<enemy.agi<<endl;
	cout<<enemy.def<<endl;

};
Character AdjustStats(Character player,int attackChoice)
{
	
	if (attackChoice == 1)

	{

		player.adjustedAgi = player.agi + 2;
		player.adjustedAtk = player.atk - 1;
	}
	else if (attackChoice == 3)
	{
		player.adjustedAtk = player.agi + 2;
		player.adjustedAgi = player.atk - 1;
	}
	
	return player;
};

