#pragma once
#include"Scean.h"
#include <iostream>
#include <conio.h>

class GameplayScene : public Scene
{
public:

	void start() override {};
	void End() override {};
	void Update() override;
	void Draw() override;

};

void GameplayScene::Update() {

	_getch();
}
void GameplayScene::Draw() {

	int numOfFaces = 0;

	int result = rand() % numOfFaces + 1;

	std::cout << "you roll a: " << result << "/" << numOfFaces << std::endl;

	std::cout << "press eny key to continue " << std::endl;


}
