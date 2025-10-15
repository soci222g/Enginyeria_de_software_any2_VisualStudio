#pragma once
#pragma once
#include"Scean.h"
#include <iostream>
#include <conio.h>
#include "GameData.h"


class ConfigScene : public Scene
{
private: 
	GameData* data;
public:

	ConfigScene(GameData* Data) : data(Data) { nextScean = "MainMenu"; }
	void start() override {};
	void End() override {};
	void Update() override;
	void Draw() override;
	bool IsFinisher() override { return true; };

};

void ConfigScene::Update() {
	int value;
	std::cin >> value;

	try {
		data->SetNumberofFaces(value);
	}
	catch (std::string msg) {
		std::cout << msg << std::endl;
	}
}
void ConfigScene::Draw() {

	std::cout << "enter number of facces." << std::endl;
}

