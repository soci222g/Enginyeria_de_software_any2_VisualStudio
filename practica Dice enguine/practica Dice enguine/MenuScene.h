#pragma once
#include"Scean.h"
#include <iostream>
#include <conio.h>

class MenuScene : public Scene {
	// Inherited via Scene
	void start() override { };
	void End() override {};

	void Update() override;
	void Draw() override;

};
void MenuScene::Update() {

	char c = _getch();


		switch (c)
		{
		case '1':
			//go to Game
			break;
		case '2':
			//go to scene

			break;	
		case '3':
			//exit game

				break;


		}


}
void MenuScene::Draw(){
	std::cout << "Welcom to the dice game!!!\n\n" << std::endl;

	std::cout << "plis enter your choice " << std::endl;
	std::cout << "   ->1: play " << std::endl;
	std::cout << "   ->2: Config" << std::endl;
	std::cout << "   ->3: exit\n" << std::endl;
	std::cout << "plis enter your chice" << std::endl;

}