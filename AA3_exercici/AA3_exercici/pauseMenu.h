#pragma once
#include"Scean.h"
#include"Renderer.h"
#include"Button.h"
#include"Lable.h"
#include <vector>

class LeaderBoard : public Scean {
public:

	LeaderBoard() {
		Renderer* Title = new Lable("-----PauseMenu-----");
		Renderer* Score = new Button("Back Game");
		Renderer* MenuButton = new Button("MainMenu");


		ContentScore.push_back(Title);
		ContentScore.push_back(Score);
		ContentScore.push_back(MenuButton);


	}
	std::vector<Renderer*> ContentScore;


	void Draw() override {
		for (Renderer* R : ContentScore) {
			R->Draw();
		}
	}
};