#include "sceanManager.h"
#include"configScene.h"
#include"GamePlay.h"
#include"MenuScene.h"
#include <cassert>
SceneManager::~SceneManager()
{
	delete data;

	for (auto val : scenes) {
		delete val.second;
	}
	delete curretnScene;
}

void SceneManager::init()
{	
	

	scenes["MainMenu"] = new MenuScene;
	scenes["Confi"] = new ConfigScene(data);
	scenes["Gameplay"] = new GameplayScene(data);

	curretnScene = scenes["MainMenu"];
}

void SceneManager::Run()
{

	curretnScene->Draw();

	curretnScene->Update();

}

void SceneManager::Update()
{
	if (curretnScene->IsFinisher())
	{
		curretnScene->End();

		std::string nextscene = curretnScene->nextscene();

		if (nextscene.size() == 0) {
			IsPlaying = false;

		}
		else
		{
			assert(scenes.find(curretnScene->nextscene()) != scenes.end());
			curretnScene = scenes[curretnScene->nextscene()];

			curretnScene->start();
		}
	}

	system("cls");


}





