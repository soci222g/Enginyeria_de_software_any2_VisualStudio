#include <iostream>
#include <vector>

class Character {
public:
	int HP;
	
	Character(int hp):
		HP(hp){ }

	virtual void Attack(Character* target) = 0; //funcio abstracte.
	virtual void Die() = 0;
};

class Hero : public Character {
public:
	
	Hero(int hp, int fame):
		fame(fame), Character(hp) { } //obligatori perque el pare ho nesecite.
	int fame;

	void Attack(Character* target) override {
		Character::Attack(target);

		std::cout << "I am a Hero attacking" << std::endl;
	}

	void Die() override {}

};

int main() {
	Hero b(10,30);
	b.Die();

	Character* c = new Hero(10, 10);
	c->Die();
}