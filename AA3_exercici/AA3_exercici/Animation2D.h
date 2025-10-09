#pragma once
#include <iostream>
#include"Renderer.h"
class Animation2D : public Renderer
{
public:
	Animation2D(int X, int Y) {
		this->X = X;
		this->Y = Y;
	}

private:
	void Draw() override {
		std::cout << "this animation2D is in: " << this->X << " X  and " << this->Y << "Y" << std::endl;
	}
};

