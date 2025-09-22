#include"Character.h"

character::character(std::string name, int hp,int atack) {

	Name = name;
	HP = hp;
	Damage = atack;


}
character::character() {
	Name = "";
	HP = 0;
	Damage = 0;
}