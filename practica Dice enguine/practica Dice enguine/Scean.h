#pragma once
#include <string>


class Scene {
protected:

	int ID;
	std::string name;
	std::string nextScean;

public:
	virtual void start() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void End() = 0;
	virtual bool IsFinisher() = 0;

	std::string nextscene() { return nextScean; }
};