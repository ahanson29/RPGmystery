#include "header.h"

int main()
{
	Location map[40];
	Character characters[25];

	initialize_map(map);
	initialize_characters(characters);

	//for (int i = 0; i < 25; i++)
	//{
	//	cout << characters[i].getFname() << " " << characters[i].getLname() << endl;
	//	cout << characters[i].getJob() << endl;
	//	cout << characters[i].getAge() << endl;
	//	cout << characters[i].getLocation() << endl;
	//	cout << characters[i].getBodyType() << endl;
	//	cout << characters[i].getEye_c() << endl;
	//	cout << characters[i].getHair_c() << endl;
	//	cout << characters[i].getSex() << endl;
	//	cout << characters[i].getHeight() << endl;
	//	cout << endl;
	//}

	//map[18].char_loc(characters);

	int x = 0;
	Location pPosition;
	pPosition = map[0];

	do
	{
		pPosition = move_location(x, pPosition, characters);

	} while (x != 10);

	return 0;
}