#include"GameObjects.h"
#include <string>
#include <map>

//include de assert numes errors critics
#include<cassert>
#include <iostream>




void SaveMap(std::map<std::string, int> m, std::string fileName);


void RecoverMap(std::map<std::string, int>& m, std::string fileName);




std::vector<GameObject> gameObjects;

int main() {
	std::map<std::string, int> myMap;

	try {
		SaveMap(myMap, "saveFile.dat");
	}
	catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}

}


void SaveMap(std::map<std::string, int> m, std::string fileName) {

	std::ofstream output;
	output.open(fileName, std::ios::binary | std::ios::out | std::ios::trunc);

	//assert(output.is_open());

	
		if (!output.is_open())
			throw std::exception("fille not open");


		size_t mapSize = m.size();


		output.write(reinterpret_cast<char*>(&mapSize), sizeof(size_t));


		for (std::map<std::string, int>::iterator it = m.begin(); it != m.end(); it++) {

			size_t keySize = it->first.size();

			output.write(reinterpret_cast<char*>(&keySize), sizeof(size_t));

			output.write(it->first.c_str(), sizeof(keySize));


			output.write(reinterpret_cast<char*>(&it->second), sizeof(int));

		}

}

void RecoverMap(std::map<std::string, int>& m, std::string fileName) {


	std::ifstream input;
	input.open(fileName, std::ios::binary | std::ios::in);
	if (!input.is_open())
		throw std::exception("no se habre el archivo");

	size_t MapSize = 0;

	input.read(reinterpret_cast<char*>(&MapSize), sizeof(size_t));

	m.clear();
	for (size_t i = 0; i < MapSize; i++) {
		size_t stringSize = 0;
		std::string key;
		int value;
		
		input.read(reinterpret_cast<char*>(&stringSize), sizeof(size_t));
		//load string to c a c++
	
		char* temp = new char[stringSize + 1]; // el +1 es per el /0 de c++
		input.read(temp, stringSize); //metemos los chars de c en el string de c++
		temp[stringSize] = '\0'; //metemos el ultimo valo a mano
		key = temp;// lo igualamos para meterlo en variable temporal
		delete[]temp; //elimina puntero



		input.read(reinterpret_cast<char*>(&value), sizeof(int));
		
		
		m.emplace(key, value);
	
	}




}

