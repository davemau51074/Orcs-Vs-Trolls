#include <iostream>
#include <string>
#include "Troll.h"
#include "Orc.h"
#include "Character.h"
#include <ctime>
void clearScreen();
void clearScreenTwo();
void clearScreenThree();

//Orcs and Trolls Game
//David O Gorman

void main()
{
	//
	Orc orcw;
	//orcw.sayStats();

	Troll Bob;
	Troll Bobby;
	//Bob.sayStats();

	system("Pause");

	struct Player
	{
		std::string name;
	};
	
	Player p;
	Troll trollChar;

	std::string orc = "Orcs";
	std::string troll = "Troll";
	std::string input;
	std::string orc1 = "Orc";
	std::string input2;
	std::string punch;
	std::string spell;
	std::string heal;
	std::string choice;

	std::string orco = "Orc" ;
	

	
	int StrengthIwo = 0;
	int MagicIwo = 0;
	int ManaIwo = 0;


	int attackone = 10;
	int attacktwo = 20;
	int attackthree = 30;

	std::cout << "This is my troll and orcs game " << std::endl; 
	
	std::cout << "Please enter your name " ;
	std::cin >> p.name;
	

	std::cout << "welcome General " << p.name << ".You are about to enter battle. Select your army." << std::endl;
	std::cout << "Orcs or Trolls " << std::endl;
	std::cin >> input;


	if (input == orc)
	{

		std::cout << "General " << p.name << ", A war is about to break out. " << std::endl;
		std::cout << "You and your army of Orcs must fight against the Trolls  " << std::endl;
	
		system("PAUSE");
		clearScreen();
	}

	if (input == troll)
	{

		std::cout << "General " << p.name << ", A war is about to break out." << std::endl;
		std::cout << " You and your army of Trolls must fight against the Orcs " << std::endl;
		
		system("PAUSE");
		clearScreen();
	}
	
	
	
	clearScreen();
	system("PAUSE");
	//Bobby bobby;
	StrengthIwo = rand() % 50 + 1;
	MagicIwo = rand() % 50 + 1;
	ManaIwo = rand() % 50 + 1;
	std::cout << "You have been confronted by an enemy, I will show you his stats" << std::endl;
	Bob.sayStats();
//	Bobby.sayStats();
	
	
	std::cout << " This is your stats" << std::endl;
	Bobby.sayStats();
	
	
	clearScreenThree();
	system("PAUSE");
	
	std::cout << "Before this battle starts I would like to run you through the controls" << std::endl;
	std::cout << "If you enter 'punch' you will use your melee that deals 10 damage and costs 20 mana" << std::endl;
	std::cout << "if you enter 'spell' you will use your Magic that deals 20 damage but costs 30 mana " << std::endl;
	std::cout << "Finally if you enter 'Heal' you will use Health snd boost your health by 10 but cost 15mana" << std::endl;

	std::cout << "Now that everything is cleared up lets get back to that screaming barbarian" << std::endl;
	std::cout << "That is hurtling towards you" << std::endl;

	

	system("PAUSE");


	std::cout << "WAIT!! One last thing " << std::endl;
	std::cout << "This is turn based " << std::endl;
	std::cout << "You will get a chance to type in your battle choice" << std::endl;
	std::cout << "And then it will be the opponents turn  " << std::endl;

	system("PAUSE");
	clearScreen();


	std::cout << "Now go!! type in your first choice.. " << std::endl;
	std::cout << "Would you kindly... " << std::endl;

	system("PAUSE");

	

	while (Bob.battle == true)
	{
		std::cout << "BATTLE COMMAND:  " << std::endl;
		std::cin >> choice;

		system("PAUSE");

		if (choice == "punch")
		{
			std::cout << "Your enemy has lost 10 health" << std::endl;
			Bob.health -= 10;
			std::cout << "Your enemys health is " << Bob.health << std::endl;

			system("PAUSE");

			Bobby.mana -= 5;
			std::cout << "Your mana has dropped to " << Bobby.mana << std::endl;
			system("PAUSE");
		}


		if (choice == "spell")
		{
			std::cout << "Your enemy has lost 20 health" << std::endl;
			Bob.health -= 20;
			Bobby.mana -= 10;
			std::cout << "Your mana has dropped to " << Bobby.mana << std::endl;
			system("PAUSE");
		}

		if (choice == "Health ")
		{
			std::cout << "Your have increased your health by 10" << std::endl;
			Bobby.health += 10;
			Bobby.mana -= 5;
			std::cout << "Your mana has dropped to " << Bobby.mana << std::endl;

		}

		//system("PAUSE");
		int attack;

		srand(time(NULL));

		/* generate attack number between 1 and 3  */
		attack = rand() % 3 + 1;

		if (attack == 1)
		{
			std::cout << "The enemy has punched you " << std::endl;
			Bobby.health -= 10;
			std::cout <<"your health is " <<  Bobby.health<< std::endl;

		}

		if (attack == 2)
		{
			std::cout << "The enemy has cast a spell at you " << std::endl;
			Bobby.health -= 20;
			std::cout << "your health is " << Bobby.health << std::endl;
		}

		if (attack == 3)
		{
			std::cout << "The enemy has plummeled you " << std::endl;
			Bobby.health -= 30;
			std::cout << "your health is " << Bobby.health << std::endl;
		}

		if (Bob.health == 0)
		{
			break;

		}

		if (Bobby.health == 0)
		{
			break;

		}

	}


	if (Bobby.health == 0)
	{

	std::cout <<	"You have lost the battle" << std::endl;
	}


	if (Bob.health == 0)
	{

		std::cout << "You have won the battle" << std::endl;
	}

	system("PAUSE");

}  











void clearScreen()
{
	for (size_t i = 0; i < 23; i++)
	{
	std::cout << "\n";
	}
	
}

void clearScreenTwo()
{
	for (size_t i = 0; i < 18; i++)
	{
		std::cout << "\n";
	}

}

void clearScreenThree()
{

	for (size_t i = 0; i < 14; i++)
	{
		std::cout << "\n";
	}



}



void Controls()
{

	std::cout << "CONTROLS" << std::endl;
	std::cout << "*****************************" << std::endl;
	std::cout << "Type in 'punch' to hit the player" << std::endl;
	std::cout << " Type in 'spell to cast a spell' " << std::endl;
	std::cout << " Type in 'heal' to heal yourself  " << std::endl;
	std::cout << " " << std::endl;
}