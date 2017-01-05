#pragma once
#ifndef CHARACTER_H 
#define CHARACTER_H
#include "Character.h"
#endif //CHARACTER_H
#include <iostream>
#include <string>
#include "Troll.h"
#include "Orc.h"
#include "Character.h"




class Orc : public Character
 {
public:
	Orc();
private:
	float health ;
  float strength ;
	 float magic ;
	  float mana ;



};

