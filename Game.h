#pragma once
#include <iostream>

#include <iomanip>
#include <ctime>
#include "Functions.h"
#include "Character.h"


class Game
{
public:
	Game();
	virtual ~Game();

	//Functions
	void mainMenu();

	void endGame();
	//Accessors
	inline bool getPlayingState() const {
		return this->isPlaying;
	}

	//Modifiers
private:
	int choice;
	bool isPlaying;
};

