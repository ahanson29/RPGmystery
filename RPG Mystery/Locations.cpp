#include "Locations.h"

Location::Location()
{
	this->name = "name here\n";
	this->description = "Put description here\n";
	this->list = "1. First Choice\n2. Second Choice\n3. Third Choice\n";

	this->pL1 = nullptr;
	this->pL2 = nullptr;
	this->pL3 = nullptr;
	this->pL4 = nullptr;
	this->pL5 = nullptr;
	this->pL6 = nullptr;
}

Location::Location(string newName, string newDesc, Location *newpL1, Location *newpL2, Location *newpL3, Location *newpL4, Location *newpL5, Location *newpL6)
{
	this->name = newName;
	this->description = newDesc;

	this->pL1 = newpL1;
	this->pL2 = newpL2;
	this->pL3 = newpL3;
	this->pL4 = newpL4;
	this->pL5 = newpL5;
	this->pL6 = newpL6;
}

Location::~Location()
{

}

//getters
string Location::getName()
{
	return this->name;
}

string Location::getDescription()
{
	return this->description;
}

Location * Location::getpL1()
{
	return this->pL1;
}
Location * Location::getpL2()
{
	return this->pL2;
}
Location * Location::getpL3()
{
	return this->pL3;
}
Location * Location::getpL4()
{
	return this->pL4;
}
Location * Location::getpL5()
{
	return this->pL5;
}
Location * Location::getpL6()
{
	return this->pL6;
}

//setters
void Location::setName(string newName)
{
	this->name = newName;
}

void Location::setDescription(string newDescription)
{
	this->description = newDescription;
}

void Location::setpL1(Location *newpL1)
{
	this->pL1 = newpL1;
}
void Location::setpL2(Location *newpL2)
{
	this->pL2 = newpL2;
}
void Location::setpL3(Location *newpL3)
{
	this->pL3 = newpL3;
}
void Location::setpL4(Location *newpL4)
{
	this->pL4 = newpL4;
}
void Location::setpL5(Location *newpL5)
{
	this->pL5 = newpL5;
}
void Location::setpL6(Location *newpL6)
{
	this->pL6 = newpL6;
}

void Location::setList(string newList)
{
	this->list = newList;
}

void Location::printList()
{
	int x = -1;
	cout << this->list;
}