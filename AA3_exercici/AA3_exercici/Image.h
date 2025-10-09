#pragma once
#include"Renderer.h"
#include <iostream>
class Image : public Renderer
{
public:
	Image(int X, int Y) {
		this->X = X;
		this->Y = Y;
	}
private:
	void Draw() override{
		std::cout << "this Image is in: " << this->X << " X  and " << this->Y << "Y" << std::endl;
	}

};

