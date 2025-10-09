#pragma once
#include <iostream>
#include"Renderer.h"
class Animation3D : public Renderer
{
public:
	Animation3D(int X, int Y) {
		this->X = X;
		this->Y = Y;
	}

private:
	void Draw() override {
		std::cout << "this animation3D is in: " << this->X << " X  and " << this->Y << " Y" << std::endl;
	}
};