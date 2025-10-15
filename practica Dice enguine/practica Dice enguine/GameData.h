#pragma once
#include <corecrt_math.h>

class GameData
{
public:
	int numDiceFaces;
	GameData() : numDiceFaces(3) {};

	void SetNumberofFaces(int num) {
		int temp = (int)fmax(3, num);
		numDiceFaces = temp;
		if (num < 3)
			throw "dice face invalit";

	}
	int const GetNumBerOfFaces() { return numDiceFaces; }

	
	

};

