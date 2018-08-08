#include "character.h"

Character::Character()
{
	this->f_name = "*first name*";
	this->l_name = "*last name*";
	this->age = 0;
	this->sex = '*';
	this->location = "*no where*";
	this->hair_c = "*hair color*";
	this->eye_c = "*eye color*";
	this->height = "*height*";
}

Character::Character(string newFname, string newLname, int newAge, char sex, string newLocation, string hair, string eye, string height)
{
	this->f_name = newFname;
	this->l_name = newLname;
	this->age = newAge;
	this->sex = sex;
	this->location = newLocation;
	this->hair_c = hair;
	this->eye_c = eye;
	this->height = height;
}

Character::Character::~Character()
{

}

//getters
string Character::getFname()
{
	return this->f_name;
}
string Character::getLname()
{
	return this->l_name;
}
int Character::getAge()
{
	return this->age;
}
char Character::getSex()
{
	return this->sex;
}
string Character::getLocation()
{
	return this->location;
}
string Character::getHair_c()
{
	return this->hair_c;
}
string Character::getEye_c()
{
	return this->eye_c;
}
string Character::getHeight()
{
	return this->height;
}
void Character::printItems()
{

}

//setters
void Character::setFname(string name)
{
	this->f_name = name;
}
void Character::setLname(string name)
{
	this->l_name = name;
}
void Character::setSex(char sex)
{
	this->sex = sex;
}
void Character::setAge(int age)
{
	this->age = age;
}
void Character::setLocation(string location)
{
	this->location = location;
}
void Character::setHair_c(string hair) 
{
	this->hair_c = hair;
}
void Character::setEye_c(string eye) 
{
	this->eye_c = eye;
}
void Character::setHeight(string height)
{
	this->height = height;
}