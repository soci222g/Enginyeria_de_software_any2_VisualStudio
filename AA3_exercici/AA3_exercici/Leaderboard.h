#pragma once
#pragma once
#include"Scean.h"
#include"Renderer.h"
#include"Button.h"
#include"Lable.h"
#include <vector>

class LeaderBoard : public Scean {
public:

	LeaderBoard() {
		Renderer* Title = new Lable("-----Score-----");
		Renderer* Score = new Lable("GameScore");
		Renderer* MenuButton = new Button("Score");


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