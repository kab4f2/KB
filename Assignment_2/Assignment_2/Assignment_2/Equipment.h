#include <string>
#include <iostream>
//#ifndef


using namespace std;


struct Equipment
{
	string name;
	int hp;
	int atk;
	int def;
	int agi;
	void PrintInfo();
	void Setup(string attack, int Attack, int defense,int agility);

};