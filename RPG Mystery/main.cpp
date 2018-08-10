#include "header.h"

int main()
{
	Location map[40];
	Character characters[25];

	initialize_map(map);
	initialize_characters(characters);

	for (int i = 0; i < 25; i++)
	{
		cout << characters[i].getFname() << " " << characters[i].getLname() << endl;
		cout << characters[i].getJob() << endl;
		cout << characters[i].getAge() << endl;
		cout << characters[i].getLocation() << endl;
		cout << endl;
	}

	int x = 0;
	Location pPosition;
	pPosition = map[0];

	do
	{
		pPosition = move_location(x, pPosition);

	} while (x != 10);

	return 0;
}