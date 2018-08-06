#pragma once
#include "header.h"

using std::string;

class Character
{
public:
	Character();
	Character(std::string newFname, string newLname, int newAage, string sex, string newLocation, string hair, string eye, string pants, string shirt, string height, item items[]);
	~Character();

	//getters
	string getName();
	int getAage();
	string getLocation();

	//setters
	void setName();
	void setAge();
	void setLocation();

private:
	string f_name;
	string l_name;
	string sex;
	int age;
	string location;
	string hair_c;
	string eye_c;
	string pants;
	string shirt;
	string height;
	item i[];

};