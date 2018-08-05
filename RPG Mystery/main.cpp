#include "header.h"

int main()
{
	Location map[40];

	initialize_map(map);

	//proctorSt.setName("Proctor Street");
	//proctorSt.setDescription("This is Proctor Street");
	//proctorSt.setpL1(&valleySt);
	//proctorSt.setpL2(&crevistonSt);
	//proctorSt.setList("1. Go on Valley Street\n2. Go on Creviston Street\n");
	//valleySt.setName("Valley Street");
	//valleySt.setDescription("This is Valley Street");
	//valleySt.setpL1(&proctorSt);
	//valleySt.setpL2(&glenwoodSt);
	//valleySt.setpL3(&beach);
	//valleySt.setList("1. Go On Proctor Street\n2. Go on Glenwood Street\n3. Go to the Beach\n");
	//glenwoodSt.setName("Glenwood Street");
	//glenwoodSt.setDescription("This is Glenwood Street.");
	//glenwoodSt.setpL1(&valleySt);
	//glenwoodSt.setList("1. Go on Valley Street\n");
	//beach.setName("The Beach");
	//beach.setDescription("This is the sunny beach.");
	//beach.setpL1(&valleySt);
	//beach.setpL2(&merigoldSt);
	//beach.setList("1. Go on Valley Street\n2. Go on Merigold Street\n");
	//merigoldSt.setName("Merigold Street");
	//merigoldSt.setDescription("This is Merigold Street.");
	//merigoldSt.setpL1(&beach);
	//merigoldSt.setpL2(&crevistonSt);
	//merigoldSt.setList("1. Go to the beach\n2. Go on Creviston Street\n");
	//crevistonSt.setName("Creviston Street");
	//crevistonSt.setDescription("This is Creviston Street");
	//crevistonSt.setpL1(&proctorSt);
	//crevistonSt.setpL2(&merigoldSt);
	//crevistonSt.setList("1. Go on Proctor Street\n2. Go on Merigold Street\n");

	int x = 0;
	Location pPosition;
	pPosition = map[0];

	do
	{
		pPosition = move_location(x, pPosition);

	} while (x != 10);

	return 0;
}