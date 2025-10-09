#pragma once


#include"Renderer.h"
#include <iostream>
#include <string>
class Text : public Renderer
{
public:
	Text(std::string content) { TextContent = content; }

	std::string TextContent;
private:
	void Draw() override {
		std::cout << "this Title is: " << this->TextContent << std::endl;
	}

};

