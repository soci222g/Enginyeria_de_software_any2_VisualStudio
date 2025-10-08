#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include <iostream>

#include <conio.h>


void RallGame(int numOfFaces) {

	int result = rand() % numOfFaces;

	std::cout << "you roll a: " << result << "/" << numOfFaces << std::endl;

	std::cout << "press eny key to continue " << std::endl;

	_getch();

}


int main() {

	srand(time(NULL));
	while (true)
	RallGame(10);

}

