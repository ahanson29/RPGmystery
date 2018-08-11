#include "character.h"
#include "Locations.h"

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
string Character::getJob()
{
	return this->job;
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
string Character::getBodyType()
{
	return this->bodyType;
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
void Character::setJob(string job)
{
	this->job = job;
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
void Character::setBodyType(string bodyType)
{
	this->bodyType = bodyType;
}

void initialize_characters(Character list[])
{
	ifstream infile("Character_list.csv");
	string parse = "";
	char parse_c[1024] = "";
	char *pTok = NULL;
	char *context = NULL;
	int i = 0;
	
	//getting first line in file
	std::getline(infile, parse);

	while (!infile.eof())
	{
		std::getline(infile, parse);
	
		strcpy_s(parse_c, parse.c_str());

		pTok = strtok_s(parse_c, ",", &context);
		list[i].setFname(pTok);

		pTok = strtok_s(NULL, ",", &context);
		list[i].setLname(pTok);

		pTok = strtok_s(NULL, ",", &context);
		list[i].setJob(pTok);

		pTok = strtok_s(NULL, ",", &context);
		list[i].setSex((char)pTok);

		pTok = strtok_s(NULL, ",", &context);
		list[i].setHeight(pTok);

		pTok = strtok_s(NULL, ",", &context);
		list[i].setAge(atoi(pTok));

		pTok = strtok_s(NULL, ",", &context);
		list[i].setHair_c(pTok);

		pTok = strtok_s(NULL, ",", &context);
		list[i].setEye_c(pTok);

		pTok = strtok_s(NULL, ",", &context);
		list[i].setBodyType(pTok);

		pTok = strtok_s(NULL, ",", &context);
		list[i].setLocation(pTok);

		i++;
	}

	infile.close();
}