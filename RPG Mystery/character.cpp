#include "character.h"

Character::Character()
{
	this->f_name = "*first name*";
	this->l_name = "*last name*";
}

Character(string newFname, string newLname, int newAage, string sex, string newLocation, string hair, string eye, string pants, string shirt, string height, item items[])
{

}
Character::~Character()
{

}

//getters
string getName();
int getAage();
string getLocation();

//setters
void setName();
void setAge();
void setLocation();