#pragma once
class Renderer
{

public:
	int X;
	int Y;
	Renderer() :
		X(0), Y(0) {}


	virtual void Draw() = 0;

};

