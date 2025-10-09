#pragma once

#include"Text.h"
#include"Renderer.h"
#include <iostream>
#include <string>
class Button : public Renderer
{
public:
	Text innerText;
	Button(std::string Text) : innerText(Text) {}

	std::string Title;
	void Draw() override {
		std::cout << "this Button is: " << this->Title << std::endl;
	}

};

