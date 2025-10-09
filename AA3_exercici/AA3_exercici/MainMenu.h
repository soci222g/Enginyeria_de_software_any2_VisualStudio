#pragma once
#include"Scean.h"
#include"Renderer.h"
#include"Button.h"
#include"Image.h"
#include <vector>

class MainMenu : public Scean {
public:
	
	MainMenu() {
		Renderer* Logo = new Image(1,1);
		Renderer* ButtonStart = new Button("Start Game");
		Renderer* ButtonScore = new Button("Score");
		Renderer* ButtonQuit = new Button("Quit");

		ContentMain.push_back(Logo);
		ContentMain.push_back(ButtonStart);
		ContentMain.push_back(ButtonScore);
		ContentMain.push_back(ButtonQuit);

	}
	std::vector<Renderer*> ContentMain;


	void Draw() override{
		for (Renderer* R : ContentMain) {
			R->Draw();
		}
	}
};