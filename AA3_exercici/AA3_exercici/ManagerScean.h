#pragma once
#include"Scean.h"

class SceanManager : public Scean {
public:
	Scean* CurrentScean;


	void ChangeScean(Scean* NewScean) { CurrentScean = NewScean; }


	void Draw() override {
		CurrentScean->Draw();
	}



};