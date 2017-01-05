#pragma once
#include <iostream>
#include <string>
#include "Troll.h"
#include "Orc.h"
#include "Character.h"
class Troll : public Character 
{

private:
	float m_health;
	float m_strength;
	float m_magic;
	float m_mana;

public:
	Troll() = default;
	
	Troll(float health, float strength, float magic, float mana);


};