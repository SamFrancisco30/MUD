#pragma once
#include <string>

class Character
{
public:
	Character();
	virtual ~Character();

	//Functions
	void initialize(const std::string name);
	//Accessors
	inline const double& getX() const {
		return this->xPos;
	}

	inline const double& getY() const {
		return this->yPos;
	}

	inline const std::string& getCharacterName() const {
		return this->characterName;
	}

	inline const int& getLevel() const {
		return this->level;
	}

	inline const int& getExp() const {
		return this->exp;
	}

	inline const int& getExpNext() const {
		return this->expNext;
	}
	inline const int& getHp() const {
		return this->hp;
	}

	inline const int& getHungerLevel() const {
		return this->hungerLevel;
	}

	inline const int& getDamage() const {
		return this->Damage;
	}
	
	inline const int& getDefence() const {
		return this->Defence;
	}

	//Modifier

private:
	double xPos;
	double yPos;

	std::string characterName;

	//Level
	int level;

	//Exp
	int exp;

	//Exp to next level
	int expNext;

	//Health
	int hp;

	//Hunger level
	int hungerLevel;

	//Damage
	int Damage;

	//Defence
	int Defence;


};

