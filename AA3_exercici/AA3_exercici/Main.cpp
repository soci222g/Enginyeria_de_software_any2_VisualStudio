#include "RenderManager.h"
#include "Animation2D.h"
#include"Animacio3D.h"
#include "Image.h"

int main() {

	RenderManager* Manager = new RenderManager();


	std::vector<Renderer*> AllRender;

	Renderer* Imagen = new Image(3,3);


	Renderer* Animacio2D = new Animation2D(1, 1);
	Renderer* Animacio3D = new Animation3D(1, 1);

	AllRender.push_back(Imagen);
	AllRender.push_back(Animacio2D);
	AllRender.push_back(Animacio3D);

	Manager->InsertVector(AllRender);

	Manager->Draw();


}