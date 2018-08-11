#pragma once
#ifndef LOCATIONS_H
#define LOCATIONS_H

#include "header.h"

class Location
{
public:
	Location();
	Location(std::string newName, std::string newDesc, Location *newpL1, Location *newpL2, Location *newpL3, Location *newpL4, Location *newpL5, Location *newpL6);
	~Location();

	//getters
	std::string getName();
	std::string getDescription();
	Location *getpL1();
	Location *getpL2();
	Location *getpL3();
	Location *getpL4();
	Location *getpL5();
	Location *getpL6();
	//std::list<std::string> getIn_room();
	std::string getInRoom(int index);
	int getOccupants();

	//setters
	void setName(std::string newName);
	void setDescription(std::string newDescription);
	void setList(std::string newList);
	void setpL1(Location *newpL1);
	void setpL2(Location *newpL2);
	void setpL3(Location *newpL3);
	void setpL4(Location *newpL4);
	void setpL5(Location *newpL5);
	void setpL6(Location *newpL6);
	void setOccupants(int num);

	friend class Character;

	bool char_loc(Character c[]);

	//other members
	void printList();

private:
	std::string name;
	std::string description;
	std::string list;
	std::string in_room[25];
	int occupants;

	//connecting locations
	Location *pL1;
	Location *pL2;
	Location *pL3;
	Location *pL4;
	Location *pL5;
	Location *pL6;
};

Location & move_location(int &x, Location &location, Character char_list[]);
void initialize_map(Location map[]);

#endif