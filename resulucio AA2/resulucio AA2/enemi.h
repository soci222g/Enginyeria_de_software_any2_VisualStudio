#pragma once

#include <vector>
#include<fstream>
#include <list>
struct Weapon
{
	//elements de les armes aqui
};


struct Enemy
{

	char id;
	int x;
	float y;

	std::vector<Weapon> weapons;
	//elements dels enemis
};

void SaveEnemies(std::list<Enemy> e, std::string fileName) {

	std::ofstream output;
	output.open(fileName, std::ios::binary | std::ios::out | std::ios::trunc);
	if (!output.is_open())
		return;


	//guardem el size de la llista

	size_t sizeEnemy = e.size();
	output.write(reinterpret_cast<char*>(&sizeEnemy), sizeof(sizeEnemy));

	for (std::list<Enemy>::iterator it = e.begin(); it != e.end(); it++) {
		output.write(&it->id, sizeof(char));
		output.write(reinterpret_cast<char*>( & it->x), sizeof(int));
		output.write(reinterpret_cast<char*>(&it->y), sizeof(float));


		size_t size = it->weapons.size();

		output.write(reinterpret_cast<char*>(&size), sizeof(size_t));

		output.write(reinterpret_cast<char*>(it->weapons.data()), sizeof(Weapon) * size);


	}
}

void RecoverEnemies(std::list<Enemy>& e, std::string fileName) {


	std::ifstream input;
	input.open(fileName, std::ios::binary | std::ios::in);
	if (!input.is_open())
		return;



}