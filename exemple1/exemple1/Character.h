#pragma once
#include<string>


class character
{
public:
	
	int Damage;
	int HP;
	std::string Name;

	character(std::string name, int hp, int atack);
	character();
private:

};

