#include<fstream>
#include<iostream>
#include"Character.h"
#include <stdlib.h>			
#include <time.h>       



void ReadFile(){
	
	std::ifstream myFile("Character1.txt");
	if (myFile.is_open()) {
		std::string line;
		while (std::getline(myFile,line)) {

			std::cout << line << std::endl;
		}
		
		myFile.close();
	}

}

character* createPlayerFromFile(std::string path) {
	std::ifstream playerFile(path);
	
	if (!playerFile.is_open())
		nullptr;

	std::string line;


}



void combat(character* CH1, character* CH2) {
	int num = rand() % 2;


	if (num == 0) {
		CH1->HP -= CH2->Damage;
	}
	else {
		CH2->HP -= CH1->Damage;
	}
}

int main() {
	srand(time(NULL));
	character* character1 = new character("Paco", 10, 10);
	character* character2 = new character("Manolo", 10, 10);
	
	combat(character1, character2);

	
	ReadFile();

	return 0;
}


