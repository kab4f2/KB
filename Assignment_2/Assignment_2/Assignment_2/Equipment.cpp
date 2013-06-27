#include<string>
#include<iostream>
#include"Equipment.h"


using namespace std;



void Equipment:: PrintInfo()
{
	cout<<atk <<def<<agi<<endl;
};

void Equipment::Setup(string attack, int Attack, int defense,int agility)
{

	atk = Attack;
	def = defense;
	agi = agility;

};


