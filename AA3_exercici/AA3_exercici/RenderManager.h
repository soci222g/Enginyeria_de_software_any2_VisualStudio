#pragma once
#include"Renderer.h"
#include <vector>
class RenderManager : public Renderer
{
public:
	std::vector<Renderer*> AllRenders;


	void InsertVector(std::vector<Renderer*> newVector) { AllRenders = newVector; }

	
	void Draw() override {

		for (Renderer* R : AllRenders) 
			R->Draw();

	

	}

};

