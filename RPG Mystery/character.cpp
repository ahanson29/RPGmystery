#include "character.h"

Character::Character()
{
	this->f_name = "*first name*";
	this->l_name = "*last name*";
	this->age = 0;
	this->sex = "*sex here*";
	this->location = "*no where*";
	this->hair_c = "*hair color*";
	this->eye_c = "*eye color*";
	this->height = "*height*";
	this->i[0].name = "*item name*";
	this->i[0].description = "*item description*";
	this->i[0].pNext = nullptr;
	this->i[0].pPrev = nullptr;
}

Character::Character(string newFname, string newLname, int newAge, string sex, string newLocation, string hair, string eye, string height, item items[])
{
	this->f_name = newFname;
	this->l_name = newLname;
	this->age = newAge;
	this->sex = sex;
	this->location = newLocation;
	this->hair_c = hair;
	this->eye_c = eye;
	this->height = height;
	this->i = items;
}

Character::Character::~Character()
{

}

//getters
string Character::getFname()
{

}
string Character::getLname()
{

}
int Character::getAge()
{

}
string Character::getSex()
{

}
string Character::getLocation()
{

}
string Character::getHair_c()
{

}
string Character::getEye_c()
{

}
string Character::getHeight()
{

}
string Character::printItems()
{

}

//setters
void Character::setFname()
{

}
void Character::setLname()
{

}
void Character::setSex()
{

}
void Character::setAge()
{

}
void Character::setLocation()
{

}
void Character::setHair_c() 
{

}
void Character::setEye_c() 
{

}
void Character::setHeight()
{

}

void Character::addItem()
{

}