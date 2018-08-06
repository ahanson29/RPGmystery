#pragma once
#include "header.h"

class Character
{
public:
	Character();
	Character(std::string newFname, string newLname, int newAge, string sex, string newLocation, string hair, string eye, string height, item *items);
	~Character();

	//getters
	string getFname();
	string getLname();
	int getAge();
	string getSex();
	string getLocation();
	string getHair_c();
	string getEye_c();
	string getHeight();
	string printItems();

	//setters
	void setFname();
	void setLname();
	void setSex();
	void setAge();
	void setLocation();
	void setHair_c();
	void setEye_c();
	void setHeight();

	void addItem();

private:
	string f_name;
	string l_name;
	string sex;
	int age;
	string location;
	string hair_c;
	string eye_c;
	string height;
	item *i;

};