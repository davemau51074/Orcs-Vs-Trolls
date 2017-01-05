#pragma once
#include <iostream>
#include <string>
#include "Troll.h"
#include "Orc.h"
#include "Character.h"
class Character 
{
public: 
	Character();
	virtual void sayStats();
	virtual void soldierNumber();
	virtual void battleBB();
	float health = 100;
	float strength = 100;
	float magic = 100;
	float mana = 100;
	bool battle = true;
};