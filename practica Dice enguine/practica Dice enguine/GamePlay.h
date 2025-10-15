#pragma once
#include"Scean.h"
#include <iostream>
#include <conio.h>
#include"GameData.h"

class GameplayScene : public Scene
{
public:
	GameplayScene(GameData* Data) : data(Data) { nextScean = "MainMenu"; }
	void start() override {};
	void End() override {};
	void Update() override;
	void Draw() override;
	bool IsFinisher() override { return true; };

private:
	GameData* data;
};

void GameplayScene::Update() {

	_getch();
}
void GameplayScene::Draw() {

	int numOfFaces = data->GetNumBerOfFaces();

	int result = rand() % numOfFaces + 1;

	std::cout << "you roll a: " << result << "/" << numOfFaces << std::endl;

	std::cout << "press eny key to continue " << std::endl;


}
