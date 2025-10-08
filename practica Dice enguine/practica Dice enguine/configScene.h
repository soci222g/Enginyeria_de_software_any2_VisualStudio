#pragma once
#pragma once
#include"Scean.h"
#include <iostream>
#include <conio.h>

class ConfigScene : public Scene
{
public:

	void start() override {};
	void End() override {};
	void Update() override;
	void Draw() override;

};

void ConfigScene::Update() {
	int value;
	std::cin >> value;
}
void ConfigScene::Draw() {

	std::cout << "enter number of facces." << std::endl;
}

