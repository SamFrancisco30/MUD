//g++ main.cpp Game.cpp -o 'main.exe' -Wall -O2 -m64 -static-libgcc -fexec-charset=GBK ; if ($?) { &'./main.exe' }
#include "Game.h"

using namespace std;
int main() {
	srand(time(NULL));
	Game game;
	while (game.getPlayingState()) {
		game.mainMenu();
	}
	cout << "pyx";
	return 0;
}