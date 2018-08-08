#include "header.h"

int main()
{
	Location map[40];

	initialize_map(map);

	int x = 0;
	Location pPosition;
	pPosition = map[0];

	do
	{
		pPosition = move_location(x, pPosition);

	} while (x != 10);

	return 0;
}