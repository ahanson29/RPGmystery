#include "header.h"

Location &move_location(int &x, Location &location)
{
	Location *pLocation;
	pLocation = &location;


		system("cls");
		cout << "Location: " << pLocation->getName() << endl;
		cout << endl;
		cout << pLocation->getDescription() << endl;
		cout << endl;
		pLocation->printList();

		cin >> x;

		switch (x)
		{
		case 1: pLocation = location.getpL1();
			break;
		case 2: pLocation = location.getpL2();
			break;
		case 3: pLocation = location.getpL3();
			break;
		case 4: pLocation = location.getpL4();
			break;
		case 5: pLocation = location.getpL5();
			break;
		case 6: pLocation = location.getpL6();
			break;
		}

		return *pLocation;
}

void initialize_map(Location map[])
{
	map[0].setName("Bedroom");
	map[0].setDescription("This is your room. It is slightly messy.");
	map[0].setpL1(&map[1]);
	map[0].setList("1. Go Downstairs\n2. Go on computer\n3. Search room\n4. Sleep\n5. Change Clothes\n");

	map[1].setName("Downstairs");
	map[1].setDescription("This is the downstairs of your house. Your mom is here.");
	map[1].setpL1(&map[0]);
	map[1].setpL2(&map[2]);
	map[1].setList("1. Go up to your room\n2. Go outside to your front lawn\n3. Talk to your mother\n4. Search room\n");

	map[2].setName("Front Yard");
	map[2].setDescription("You are standing in your front yard.");
	map[2].setpL1(&map[1]);
	map[2].setpL2(&map[3]);
	map[2].setpL3(&map[4]);
	map[2].setpL4(&map[31]);
	map[2].setpL5(&map[32]);
	map[2].setList("1. Go inside your house\n2. Go to Proctor Street\n3. Go to Creviston Street\n4. Go to House 5\n5. Go to House 6\n");

	map[3].setName("Proctor Street");
	map[3].setDescription("You are on Proctor Street. What do you do?");
	map[3].setpL1(&map[2]);
	map[3].setpL2(&map[5]);
	map[3].setpL3(&map[6]);
	map[3].setpL4(&map[7]);
	map[3].setpL5(&map[8]);
	map[3].setList("1. Go to your front yard\n2. Go to House 4\n3. Go to the Library\n4. Go to Shimble Park\n5. Go to Valley Street\n");

	map[4].setName("Creviston Street");
	map[4].setDescription("You are on Creviston Street. What do you do?");
	map[4].setpL1(&map[2]);
	map[4].setpL2(&map[31]);
	map[4].setpL3(&map[30]);
	map[4].setpL4(&map[29]);
	map[4].setpL5(&map[28]);
	map[4].setpL6(&map[23]);
	map[4].setList("1. Go to your front yard\n2. Go to the cemetary\n3. Go to house 1\n4. Go to house 2\n5. Go to hosue 3\n6. Go to Merigold Street\n");

	map[5].setName("House 4");
	map[5].setDescription("You are standing in front of house 4");
	map[5].setpL1(&map[3]);
	map[5].setList("1. Go to Proctor Street\n");

	map[6].setName("The Library");
	map[6].setDescription("You are in the library filled with a lot of knowledge.");
	map[6].setpL1(&map[3]);
	map[6].setList("1. Go to Proctor Street\n");

	map[7].setName("Shimble Park");
	map[7].setDescription("You are at Shimble Park. The large field sits before you.");
	map[7].setpL1(&map[3]);
	map[7].setList("1. Go to Proctor Street\n");

	map[8].setName("Valley Street");
	map[8].setDescription("You are on Valley Street.");
	map[8].setpL1(&map[3]);
	map[8].setpL2(&map[9]);
	map[8].setpL3(&map[10]);
	map[8].setpL4(&map[11]);
	map[8].setpL5(&map[12]);
	map[8].setpL6(&map[13]);
	map[8].setList("1. Go to Proctor Street\n2. Go to the Market\n3. Go to the Police Station\n4. Go to Hospital\n5. Go to Glenwood Street\n6. Go to the beach\n");

	map[9].setName("The Market");
	map[9].setDescription("You are at the market place. Here you can buy food items.");
	map[9].setpL1(&map[8]);
	map[9].setList("1. Go to Proctor Street\n");

	map[10].setName("The Police Station");
	map[10].setDescription("You are at the Police Station. Have you found the murderer?");
	map[10].setpL1(&map[8]);
	map[10].setList("1. Go to Proctor Street\n");

	map[11].setName("The Hospital");
	map[11].setDescription("You are in the Hospital.");
	map[11].setpL1(&map[8]);
	map[11].setList("1. Go to Proctor Street\n");

	map[12].setName("Glenwood Street");
	map[12].setDescription("You are on Glenwood.");
	map[12].setpL1(&map[8]);
	map[12].setpL2(&map[14]);
	map[12].setpL3(&map[15]);
	map[12].setpL4(&map[16]);
	map[12].setpL5(&map[17]);
	map[12].setList("1. Go to Proctor Street\n2. Go to the Restaurant\n3. Go to the Bar\n4.Go to the Shop\n5.Go to the Book Shop\n");

	map[13].setName("The Beach");
	map[13].setDescription("You are at the sunny beach.");
	map[13].setpL1(&map[8]);
	map[13].setpL2(&map[18]);
	map[13].setpL3(&map[19]);
	map[13].setpL4(&map[20]);
	map[13].setpL5(&map[21]);
	map[13].setpL6(&map[22]);
	map[13].setList("1. Go to Valley Street\n2. Go to the University\n3. Go to the main gathering\n4.Go to the Clothing store\n5.Go to Indy Park\n6. Go to Merigold Street\n");


	map[14].setName("The Restaurant");
	map[14].setDescription("You are in the Restaurant.");
	map[14].setpL1(&map[12]);
	map[14].setList("1. Go to Glenwood Street\n");

	map[15].setName("The Bar");
	map[15].setDescription("You are in the Bar.");
	map[15].setpL1(&map[12]);
	map[15].setList("1. Go to Glenwood Street\n");

	map[16].setName("The Shop");
	map[16].setDescription("You are in the Shop.");
	map[16].setpL1(&map[12]);
	map[16].setList("1. Go to Glenwood Street\n");

	map[17].setName("The Bookstore");
	map[17].setDescription("You are in the Book store.");
	map[17].setpL1(&map[12]);
	map[17].setList("1. Go to Glenwood Street\n");

	map[18].setName("The University");
	map[18].setDescription("You are at the University.");
	map[18].setpL1(&map[13]);
	map[18].setList("1. Go to the Beach\n");

	map[19].setName("The Main Gathering");
	map[19].setDescription("You are in the main crowd at the Beach.");
	map[19].setpL1(&map[13]);
	map[19].setList("1. Go to the Beach\n");

	map[20].setName("The Clothing Store");
	map[20].setDescription("You are in the clothing store.");
	map[20].setpL1(&map[13]);
	map[20].setList("1. Go to the Beach\n");

	map[21].setName("Indy Park");
	map[21].setDescription("You are at the beautiful Indy Park, bustling with people.");
	map[21].setpL1(&map[13]);
	map[21].setList("1. Go to the Beach\n");

	map[22].setName("Merigold Street");
	map[22].setDescription("You are on Merigold Street.");
	map[22].setpL1(&map[13]);
	map[22].setpL2(&map[23]);
	map[22].setpL3(&map[24]);
	map[22].setpL4(&map[25]);
	map[22].setpL5(&map[26]);
	map[22].setpL6(&map[4]);
	map[22].setList("1. Go to the Beach\n2. Go to the Shop\n3. Go to the church\n4.Go to the High School\n5.Go to the Stadium\n6.Go to Creviston Street\n");

	map[23].setName("The Other Shop");
	map[23].setDescription("You are at the Other Shop in town.");
	map[23].setpL1(&map[22]);
	map[23].setList("1. Go to Merigold Street\n");

	map[24].setName("Church");
	map[24].setDescription("You are in the local church.");
	map[24].setpL1(&map[22]);
	map[24].setList("1. Go to Merigold Street\n");

	map[25].setName("The High School");
	map[25].setDescription("You are in the High School.");
	map[25].setpL1(&map[22]);
	map[25].setList("1. Go to Merigold Street\n");

	map[26].setName("The Stadium");
	map[26].setDescription("You are the Stadium.");
	map[26].setpL1(&map[22]);
	map[26].setList("1. Go to Merigold Street\n");

	map[27].setName("House 3");
	map[27].setDescription("You are in House 3.");
	map[27].setpL1(&map[4]);
	map[27].setList("1. Go to Creviston Street\n");

	map[28].setName("House 2");
	map[28].setDescription("You are in House 2.");
	map[28].setpL1(&map[4]);
	map[28].setList("1. Go to Creviston Street\n");

	map[29].setName("House 1");
	map[29].setDescription("You are in House 1.");
	map[29].setpL1(&map[4]);
	map[29].setList("1. Go to Creviston Street\n");

	map[30].setName("The Cemetary");
	map[30].setDescription("You are at the Cemetary.");
	map[30].setpL1(&map[4]);
	map[30].setList("1. Go to Creviston Street\n");

	map[31].setName("House 5");
	map[31].setDescription("You are at house 5.");
	map[31].setpL1(&map[2]);
	map[31].setList("1. Go to your front yard\n");

	map[32].setName("House 6");
	map[32].setDescription("You are at house 6.");
	map[32].setpL1(&map[2]);
	map[32].setList("1. Go to your front yard\n");
}