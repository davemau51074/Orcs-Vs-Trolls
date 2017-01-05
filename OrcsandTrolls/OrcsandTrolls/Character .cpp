#include <iostream>
#include "Troll.h"
#include "Orc.h"
#include "Character.h"
using namespace std;


Character::Character()
{
	float health = 100;
	float strength = 100;
	float magic = 100;
	float mana = 100;
}


void Character::sayStats()
{
	cout << "Stats for your Enemy  are :" << std::endl;
	cout << "Strength:"<< strength << std::endl;
	cout << "Magic:" << magic << std::endl;;
	cout << "Mana:"<<  mana << std::endl;;
}



void Character::soldierNumber()
{

	cout << "Your first soldier will have ";

}


void Character::battleBB()
{




}