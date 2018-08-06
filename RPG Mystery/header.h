#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include "Locations.h"
#include"character.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct item
{
	string name;
	string description;

	item *pNext;
	item *pPrev;
};