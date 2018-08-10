#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H

#include "header.h"

struct item
{
	std::string name;
	std::string description;
	int store_val;
	int resell_val;
};

class Character
{
public:
	Character();
	Character(std::string newFname, std::string newLname, int newAge, char sex, std::string newLocation, std::string hair, std::string eye, std::string height);
	~Character();

	//getters
	std::string getFname();
	std::string getLname();
	int getAge();
	char getSex();
	std::string getLocation();
	std::string getJob();
	std::string getHair_c();
	std::string getEye_c();
	std::string getHeight();
	std::string getBodyType();
	void printItems();

	//setters
	void setFname(std::string name);
	void setLname(std::string name);
	void setSex(char sex);
	void setAge(int age);
	void setLocation(std::string location);
	void setJob(std::string job);
	void setHair_c(std::string hair);
	void setEye_c(std::string eye);
	void setHeight(std::string height);
	void setBodyType(std::string bodyType);

	//void addItem();

private:
	std::string f_name;
	std::string l_name;
	char sex;
	int age;
	std::string location;
	std::string job;
	std::string hair_c;
	std::string eye_c;
	std::string height;
	std::string bodyType;
	std::list<item> i;

};

void initialize_characters(Character list[]);

#endif