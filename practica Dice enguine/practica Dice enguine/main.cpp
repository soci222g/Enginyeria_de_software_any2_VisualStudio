#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include <iostream>

#include <conio.h>
#include"Scean.h"
#include"configScene.h"
#include"GamePlay.h"
#include"MenuScene.h"
#include <map>
#include "GameData.h"
#include <cassert>




int main() {

	bool isPLaying = true;
	srand(time(NULL));

	std::map<std::string, Scene*> scenes;
	Scene* curretnScene;

	GameData* data = new GameData();

	scenes["MainMenu"] = new MenuScene;
	scenes["Confi"] = new ConfigScene(data);
	scenes["Gameplay"] = new GameplayScene(data);

	curretnScene = scenes["MainMenu"];
	while (isPLaying) {

		curretnScene->Draw();
		
		curretnScene->Update();
		
		if (curretnScene->IsFinisher())
		{
			curretnScene->End();

			std::string nextscene = curretnScene->nextscene();

			if (nextscene.size() == 0) {
				isPLaying = false;
					
			}
			else
			{
				assert(scenes.find(curretnScene->nextscene()) != scenes.end());
				curretnScene = scenes[curretnScene->nextscene()];

				curretnScene->start();
			}
		}

		system("cls");



	};

	delete data;

	for (auto val : scenes) {
		delete val.second;
	}

}

