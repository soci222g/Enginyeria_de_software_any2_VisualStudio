#pragma once
#include <vector>
#include<fstream>



struct GameObject
{
	char type;
	int x;
	float y;
};
//camnda EXTERN 
//permet fer que els cpp haguin de definir-les per utilitzarles
extern std::vector<GameObject> gameObjects;


void SaveObjects(std::vector<GameObject> o, std::string fileName) {

	std::ofstream output;
	output.open(fileName, std::ios::binary | std::ios::out | std::ios::trunc);
	if (!output.is_open())
		return;

	size_t size = o.size();

	output.write(reinterpret_cast<char*>(&size), sizeof(size));

	output.write(reinterpret_cast<char*>(o.data()), sizeof(GameObject) * size);

	output.close();


}


void RecoverObjects(std::vector<GameObject>& o, std::string fileName) {
	std::ifstream input;
	input.open(fileName, std::ios::binary | std::ios::in);
	if (!input.is_open())
		return;



	size_t size;
	input.read(reinterpret_cast<char*>(&size), sizeof(int));
	o.resize(size);
	input.read(reinterpret_cast<char*>(o.data()), sizeof(GameObject) * size);

	input.close();

}