#include "Game.h"

Game::Game() {
	choice = 0;
	isPlaying = true;
}

Game::~Game() {

}

//Functions
void Game::mainMenu() {
	std::cout << "Main Menu" << std::endl;
	std::cout << "0: Quit" << std::endl;

	std::cout << std::endl << "Choice: ";
	std::cin >> choice;
	switch (choice)
	{
	case(0):
		isPlaying = false;
		break;
	default:
		break;
	}
}

void Game::endGame() {

}