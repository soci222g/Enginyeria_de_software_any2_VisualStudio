
#include"Renderer.h"
#include <iostream>
#include <string>
class Lable : public Renderer
{
public:
	Lable(std::string Text) { Title = Text; }

	std::string Title;
	void Draw() override {
		std::cout << "this ALble is: " << this->Title << std::endl;
	}

};