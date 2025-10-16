#pragma once
#include"Scean.h"
#include <map>
#include <cassert>
#include "GameData.h"


class SceneManager : public Scene {
private:
	std::map<std::string, Scene*> scenes;
	Scene* curretnScene;
	GameData* data;
	bool IsPlaying;


public:
	SceneManager() {
		IsPlaying = true;
		data = new GameData;
	}
	~SceneManager();
	void init();
	void Run();
	void draw();
	void Update();

};

