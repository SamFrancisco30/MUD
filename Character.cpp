#include "Character.h"
#include <math.h>
Character::Character() {
	characterName = "";
	hp = 100;
	hungerLevel = 100;
	Damage = 5;
	Defence = 1;
}

Character::~Character() {


}

void Character::initialize(const std::string name) {
	characterName = name;
	level = 1;
	exp = 0;
	expNext = (50/3)*(pow(level,3)-6*pow(level,3)+(17*level)-11);
	hp = 100;
	hungerLevel = 100;
	Damage = 5;
	Defence = 1;
}