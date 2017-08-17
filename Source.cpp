// Includes, ETC.
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>

//#include "header.h"
using namespace std;




int main()
{

	// Strings

	string menucont;
	string name;
	string classOne;
	int ClassInfo;
	int classpick = 0;
	string ifloop;
	string gameClass;
	int money = 1000;
	string drinkChoice;
	string menuChoice;
	string bankYes;
	string bankAge;
	string bankName;
	string bankStory;
	string hub;

	hub = "1";

	cout << "   _____          __  __ ____  _      _____ _   _ _            _____  _____ _____            __  __ ____  _      _____ _   _ _ " << endl;
	cout << "  / ____|   /\\   |  \\/  |  _ \\| |    |_   _| \\ | ( )          / ____|/ ____|  __ \\     /\\   |  \\/  |  _ \\| |    |_   _| \\ | ( )" << endl;
	cout << " | |  __   /  \\  | \\  / | |_) | |      | | |  \\| |/   _ __   | (___ | |    | |__) |   /  \\  | \\  / | |_) | |      | | |  \\| |/ " << endl;
	cout << " | | |_ | / /\\ \\ | |\\/| |  _ <| |      | | | . ` |   | '_ \\   \\___ \\| |    |  _  /   / /\\ \\ | |\\/| |  _ <| |      | | | . ` |  " << endl;
	cout << " | |__| |/ ____ \\| |  | | |_) | |____ _| |_| |\\  |   | | | |  ____) | |____| | \\ \\  / ____ \\| |  | | |_) | |____ _| |_| |\\  |  " << endl;
	cout << "  \\_____/_/    \\_\\_|  |_|____/|______|_____|_| \\_|   |_| |_| |_____/ \\_____|_|  \\_\\/_/    \\_\\_|  |_|____/|______|_____|_| \\_|  " << endl;
	cout << "                                                                                                                               " << endl;

	cout << "  Welcome to your living fortune, or the end of the road, you choose...\n " << endl;
	cout << "  Enter any character and press enter to continue. ";
	cin >> menucont;

	system("CLS");

	cout << "  _______ _    _ ______   ____  ______ _____ _____ _   _ _   _ _____ _   _  _____ " << endl;
	cout << " |__   __| |  | |  ____| |  _ \\|  ____/ ____|_   _| \\ | | \\ | |_   _| \\ | |/ ____|" << endl;
	cout << "    | |  | |__| | |__    | |_) | |__ | |  __  | | |  \\| |  \\| | | | |  \\| | |  __ " << endl;
	cout << "    | |  |  __  |  __|   |  _ <|  __|| | |_ | | | | . ` | . ` | | | | . ` | | |_ |" << endl;
	cout << "    | |  | |  | | |____  | |_) | |___| |__| |_| |_| |\\  | |\\  |_| |_| |\\  | |__| |" << endl;
	cout << "    |_|  |_|  |_|______| |____/|______\\_____|_____|_| \\_|_| \\_|_____|_| \\_|\\_____|" << endl;
	cout << "                                                                                       " << endl;


	cout << "  What is your Alias: ";
	cin >> name;

	system("CLS");

	cout << "  _______ _    _ ______   ____  ______ _____ _____ _   _ _   _ _____ _   _  _____ " << endl;
	cout << " |__   __| |  | |  ____| |  _ \\|  ____/ ____|_   _| \\ | | \\ | |_   _| \\ | |/ ____|" << endl;
	cout << "    | |  | |__| | |__    | |_) | |__ | |  __  | | |  \\| |  \\| | | | |  \\| | |  __ " << endl;
	cout << "    | |  |  __  |  __|   |  _ <|  __|| | |_ | | | | . ` | . ` | | | | . ` | | |_ |" << endl;
	cout << "    | |  | |  | | |____  | |_) | |___| |__| |_| |_| |\\  | |\\  |_| |_| |\\  | |__| |" << endl;
	cout << "    |_|  |_|  |_|______| |____/|______\\_____|_____|_| \\_|_| \\_|_____|_| \\_|\\_____|" << endl;
	cout << "                                                                                       " << endl;

	//Speciality Pick

	while (classpick == 0)
	{
		char responce = ' ';

		system("CLS");

		cout << "  _______ _    _ ______   ____  ______ _____ _____ _   _ _   _ _____ _   _  _____ " << endl;
		cout << " |__   __| |  | |  ____| |  _ \\|  ____/ ____|_   _| \\ | | \\ | |_   _| \\ | |/ ____|" << endl;
		cout << "    | |  | |__| | |__    | |_) | |__ | |  __  | | |  \\| |  \\| | | | |  \\| | |  __ " << endl;
		cout << "    | |  |  __  |  __|   |  _ <|  __|| | |_ | | | | . ` | . ` | | | | . ` | | |_ |" << endl;
		cout << "    | |  | |  | | |____  | |_) | |___| |__| |_| |_| |\\  | |\\  |_| |_| |\\  | |__| |" << endl;
		cout << "    |_|  |_|  |_|______| |____/|______\\_____|_____|_| \\_|_| \\_|_____|_| \\_|\\_____|" << endl;
		cout << "                                                                                       " << endl;

		cout << "  What is your specialty, " << name << "?\n " << endl;

		//Classes
		cout << "  1. The Business Man\n";
		cout << "  2. Golden Fingers\n";
		cout << "  3. Persuasive Prodigy\n " << endl;
		cout << "  Pick your option's number to learn more: ";
		cin >> ClassInfo;



		if (ClassInfo == 1)
		{

			system("CLS");

			cout << "  ____  _    _  _____ _____ _   _ ______  _____ _____   __  __          _   _ " << endl;
			cout << " |  _ \\| |  | |/ ____|_   _| \\ | |  ____|/ ____/ ____| |  \\/  |   /\\   | \\ | |" << endl;
			cout << " | |_) | |  | | (___   | | |  \\| | |__  | (___| (___   | \\  / |  /  \\  |  \\| |" << endl;
			cout << " |  _ <| |  | |\\___ \\  | | | . ` |  __|  \\___ \\___ \\   | |\\/| | / /\\ \\ | . ` |" << endl;
			cout << " | |_) | |__| |____) |_| |_| |\\  | |____ ____) |___) | | |  | |/ ____ \\| |\\  |" << endl;
			cout << " |____/ \\____/|_____/|_____|_| \\_|______|_____/_____/  |_|  |_/_/    \\_\\_| \\_|\n " << endl;
			cout << " After discovering a world changing technology that allows pizza to be formed out of thin air\n he became a multi-billionaire. What he chose to do with that money is yet to be decided, continue as the Business man and we will find out." << endl;
			cout << " Start out with some extra cash.\n " << endl;
			cout << " Pick Business Man? Type \"y\" to confirm, or any other character to return to character selection. ";
			cin >> responce;
			if (responce == 'y')
			{
				classpick = 3;
				gameClass = "bm";
				money += 1000;
			}
			else
			{
			}
		}
		if (ClassInfo == 2)
		{

			system("CLS");

			cout << "   _____  ____  _      _____  ______ _   _    ______ _____ _   _  _____ ______ _____   _____ " << endl;
			cout << "  / ____|/ __ \\| |    |  __ \\|  ____| \\ | |  |  ____|_   _| \\ | |/ ____|  ____|  __ \\ / ____|" << endl;
			cout << " | |  __| |  | | |    | |  | | |__  |  \\| |  | |__    | | |  \\| | |  __| |__  | |__) | (___  " << endl;
			cout << " | | |_ | |  | | |    | |  | |  __| | . ` |  |  __|   | | | . ` | | |_ |  __| |  _  / \\___ \\ " << endl;
			cout << " | |__| | |__| | |____| |__| | |____| |\\  |  | |     _| |_| |\\  | |__| | |____| | \\ \\ ____) |" << endl;
			cout << "  \\_____|\\____/|______|_____/|______|_| \\_|  |_|    |_____|_| \\_|\\_____|______|_|  \\_\\_____/ \n " << endl;

			cout << " Rumor has it that this man has always had a golden touch to his skills.\n Whether his hands were forged from the depths of the earth, or he was just born as a plain old Joe has yet to be discovered. " << endl;
			cout << " Gain a boost in luck around the board.\n " << endl;
			cout << " Pick Golden Fingers? Type \"y\" to confirm, or any other character to return to character selection. ";
			cin >> responce;
			if (responce == 'y')
			{
				classpick = 3;
				gameClass = "gf";
			}
			else
			{
			}
		}
		if (ClassInfo == 3)
		{

			system("CLS");

			cout << "  _____  ______ _____   _____ _    _          _____ _______      ________   _____  _____   ____  _____ _____ _______     __" << endl;
			cout << " |  __ \\|  ____|  __ \\ / ____| |  | |  /\\    / ____|_   _\\ \\    / /  ____| |  __ \\|  __ \\ / __ \\|  __ \\_   _/ ____\\ \\   / /" << endl;
			cout << " | |__) | |__  | |__) | (___ | |  | | /  \\  | (___   | |  \\ \\  / /| |__    | |__) | |__) | |  | | |  | || || |  __ \\ \\_/ / " << endl;
			cout << " |  ___/|  __| |  _  / \\___ \\| |  | |/ /\\ \\  \\___ \\  | |   \\ \\/ / |  __|   |  ___/|  _  /| |  | | |  | || || | |_ | \\   /  " << endl;
			cout << " | |    | |____| | \\ \\ ____) | |__| / ____ \\ ____) |_| |_   \\  /  | |____  | |    | | \\ \\| |__| | |__| || || |__| |  | |   " << endl;
			cout << " |_|    |______|_|  \\_\\_____/ \\____/_/    \\_\\_____/|_____|   \\/   |______| |_|    |_|  \\_\\\\____/|_____/_____\\_____|  |_|   " << endl;
			cout << " " << endl;

			cout << " The Persuasive Prodigy somehow withers their way inside your head. They tend to be very successful, depending on their profession.\n However when it comes to gambling, they always find ways to use their ability to their advantage. " << endl;
			cout << " Allows for a bigger chance to convince the bank for a loan.\n " << endl;
			cout << " Pick Persuasive Prodigy? Type \"y\" to confirm, or any other character to return to character selection. ";
			cin >> responce;
			if (responce == 'y')
			{
				classpick = 3;
				gameClass = "pp";
			}
			else
			{

			}


		}
	}

	// Menu Selector
	while (hub == "1")
	{

		system("CLS");

		cout << "  _______ _    _ ______   _    _ _    _ ____  " << endl;
		cout << " |__   __| |  | |  ____| | |  | | |  | |  _ \\ " << endl;
		cout << "    | |  | |__| | |__    | |__| | |  | | |_) |" << endl;
		cout << "    | |  |  __  |  __|   |  __  | |  | |  _ < " << endl;
		cout << "    | |  | |  | | |____  | |  | | |__| | |_) |" << endl;
		cout << "    |_|  |_|  |_|______| |_|  |_|\\____/|____/ " << endl;


		cout << "  Where would you like to go? \n " << endl;
		cout << "  1. Drink Bar  2. Dank Bank\n " << endl;
		cout << "  Pick your choice and press enter to continue:";
		cin >> menuChoice;

		//Bar

		while (menuChoice == "1")
		{

			system("CLS");

			cout << "  _____  _____  _____ _   _ _  __  ____          _____  " << endl;
			cout << " |  __ \\|  __ \\|_   _| \\ | | |/ / |  _ \\   /\\   |  __ \\ " << endl;
			cout << " | |  | | |__) | | | |  \\| | ' /  | |_) | /  \\  | |__) |" << endl;
			cout << " | |  | |  _  /  | | | . ` |  <   |  _ < / /\\ \\ |  _  / " << endl;
			cout << " | |__| | | \\ \\ _| |_| |\\  | . \\  | |_) / ____ \\| | \\ \\ " << endl;
			cout << " |_____/|_|  \\_\\_____|_| \\_|_|\\_\\ |____/_/    \\_\\_|  \\_\\ \n " << endl;
			cout << "Your Balance is: $" << money << ".\n" << endl;
			cout << " 1. Beer: $25  2. Wine: $50  3. Vodka: $100  4. Rum: $150\n 5. Daiquiri: $250  6. Mai Tai: $500  7. Sangria: $750  8. Flaming Lemon Drop: $1000\n " << endl;
			cout << "Pick your drink of choice for a chance to double your money! Or pick \"9\" to go to The Hub: ";
			cin >> drinkChoice;

			if (drinkChoice == "9")
			{
				system("CLS");

				cout << "  _______ _    _ ______   _    _ _    _ ____  " << endl;
				cout << " |__   __| |  | |  ____| | |  | | |  | |  _ \\ " << endl;
				cout << "    | |  | |__| | |__    | |__| | |  | | |_) |" << endl;
				cout << "    | |  |  __  |  __|   |  __  | |  | |  _ < " << endl;
				cout << "    | |  | |  | | |____  | |  | | |__| | |_) |" << endl;
				cout << "    |_|  |_|  |_|______| |_|  |_|\\____/|____/ " << endl;


				cout << "  Where would you like to go? \n " << endl;
				cout << "  1. Drink Bar  2. Dank Bank\n " << endl;
				cout << "  Pick your choice and press enter to continue:";
				cin >> menuChoice;
			}

			if (drinkChoice == "1")
			{
				money -= 25;

				srand((unsigned)time(0));
				int random_integer;
				for (int index = 0; index<1; index++)
				{
					random_integer = (rand() % 100) + 1;
					cout << random_integer << endl;
					if (random_integer >= 50)
					{

						system("CLS");

						cout << " __     ______  _    _  __          ______  _   _ " << endl;
						cout << " \\ \\   / / __ \\| |  | | \\ \\        / / __ \\| \\ | |" << endl;
						cout << "  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / / |  | |  \\| |" << endl;
						cout << "   \\   /| |  | | |  | |   \\ \\/  \\/ /| |  | | . ` |" << endl;
						cout << "    | | | |__| | |__| |    \\  /\\  / | |__| | |\\  |" << endl;
						cout << "    |_|  \\____/ \\____/      \\/  \\/   \\____/|_| \\_|" << endl;

						cout << " You feel is sizzling in your stomache as money appears in your hand. You won! \n ";
						money += 50;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;

					}
					else
					{
						cout << " __     ______  _    _   _      ____   _____ ______ " << endl;
						cout << " \\ \\   / / __ \\| |  | | | |    / __ \\ / ____|  ____|" << endl;
						cout << "  \\ \\_/ / |  | | |  | | | |   | |  | | (___ | |__   " << endl;
						cout << "   \\   /| |  | | |  | | | |   | |  | |\\___ \\|  __|  " << endl;
						cout << "    | | | |__| | |__| | | |___| |__| |____) | |____ " << endl;
						cout << "    |_|  \\____/ \\____/  |______\\____/|_____/|______|" << endl;
						cout << " The world starts to spin as you become dizzy as the money dissapears from your wallet. \n " << endl;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;
					}
				}
			}
			if (drinkChoice == "2")
			{
				money -= 50;

				srand((unsigned)time(0));
				int random_integer;
				for (int index = 0; index<1; index++)
				{
					random_integer = (rand() % 100) + 1;
					cout << random_integer << endl;
					if (random_integer >= 50)
					{

						system("CLS");

						cout << " __     ______  _    _  __          ______  _   _ " << endl;
						cout << " \\ \\   / / __ \\| |  | | \\ \\        / / __ \\| \\ | |" << endl;
						cout << "  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / / |  | |  \\| |" << endl;
						cout << "   \\   /| |  | | |  | |   \\ \\/  \\/ /| |  | | . ` |" << endl;
						cout << "    | | | |__| | |__| |    \\  /\\  / | |__| | |\\  |" << endl;
						cout << "    |_|  \\____/ \\____/      \\/  \\/   \\____/|_| \\_|" << endl;

						cout << " You feel is sizzling in your stomache as money appears in your hand. You won! \n ";
						money += 100;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;

					}
					else
					{

						system("CLS");

						cout << " __     ______  _    _   _      ____   _____ ______ " << endl;
						cout << " \\ \\   / / __ \\| |  | | | |    / __ \\ / ____|  ____|" << endl;
						cout << "  \\ \\_/ / |  | | |  | | | |   | |  | | (___ | |__   " << endl;
						cout << "   \\   /| |  | | |  | | | |   | |  | |\\___ \\|  __|  " << endl;
						cout << "    | | | |__| | |__| | | |___| |__| |____) | |____ " << endl;
						cout << "    |_|  \\____/ \\____/  |______\\____/|_____/|______|" << endl;
						cout << " The world starts to spin as you become dizzy as the money dissapears from your wallet. \n " << endl;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;
					}
				}
			}
			if (drinkChoice == "3")
			{
				money -= 100;

				srand((unsigned)time(0));
				int random_integer;
				for (int index = 0; index<1; index++)
				{
					random_integer = (rand() % 100) + 1;
					cout << random_integer << endl;
					if (random_integer >= 50)
					{

						system("CLS");

						cout << " __     ______  _    _  __          ______  _   _ " << endl;
						cout << " \\ \\   / / __ \\| |  | | \\ \\        / / __ \\| \\ | |" << endl;
						cout << "  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / / |  | |  \\| |" << endl;
						cout << "   \\   /| |  | | |  | |   \\ \\/  \\/ /| |  | | . ` |" << endl;
						cout << "    | | | |__| | |__| |    \\  /\\  / | |__| | |\\  |" << endl;
						cout << "    |_|  \\____/ \\____/      \\/  \\/   \\____/|_| \\_|" << endl;

						cout << " You feel is sizzling in your stomache as money appears in your hand. You won! \n ";
						money += 200;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;

					}
					else
					{

						system("CLS");

						cout << " __     ______  _    _   _      ____   _____ ______ " << endl;
						cout << " \\ \\   / / __ \\| |  | | | |    / __ \\ / ____|  ____|" << endl;
						cout << "  \\ \\_/ / |  | | |  | | | |   | |  | | (___ | |__   " << endl;
						cout << "   \\   /| |  | | |  | | | |   | |  | |\\___ \\|  __|  " << endl;
						cout << "    | | | |__| | |__| | | |___| |__| |____) | |____ " << endl;
						cout << "    |_|  \\____/ \\____/  |______\\____/|_____/|______|" << endl;
						cout << " The world starts to spin as you become dizzy as the money dissapears from your wallet. \n " << endl;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;
					}
				}
			}
			if (drinkChoice == "4")
			{
				money -= 150;

				srand((unsigned)time(0));
				int random_integer;
				for (int index = 0; index<1; index++)
				{
					random_integer = (rand() % 100) + 1;
					cout << random_integer << endl;
					if (random_integer >= 50)
					{

						system("CLS");

						cout << " __     ______  _    _  __          ______  _   _ " << endl;
						cout << " \\ \\   / / __ \\| |  | | \\ \\        / / __ \\| \\ | |" << endl;
						cout << "  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / / |  | |  \\| |" << endl;
						cout << "   \\   /| |  | | |  | |   \\ \\/  \\/ /| |  | | . ` |" << endl;
						cout << "    | | | |__| | |__| |    \\  /\\  / | |__| | |\\  |" << endl;
						cout << "    |_|  \\____/ \\____/      \\/  \\/   \\____/|_| \\_|" << endl;

						cout << " You feel is sizzling in your stomache as money appears in your hand. You won! \n ";
						money += 300;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;

					}
					else
					{

						system("CLS");

						cout << " __     ______  _    _   _      ____   _____ ______ " << endl;
						cout << " \\ \\   / / __ \\| |  | | | |    / __ \\ / ____|  ____|" << endl;
						cout << "  \\ \\_/ / |  | | |  | | | |   | |  | | (___ | |__   " << endl;
						cout << "   \\   /| |  | | |  | | | |   | |  | |\\___ \\|  __|  " << endl;
						cout << "    | | | |__| | |__| | | |___| |__| |____) | |____ " << endl;
						cout << "    |_|  \\____/ \\____/  |______\\____/|_____/|______|" << endl;
						cout << " The world starts to spin as you become dizzy as the money dissapears from your wallet. \n " << endl;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;
					}
				}
			}
			if (drinkChoice == "5")
			{
				money -= 250;

				srand((unsigned)time(0));
				int random_integer;
				for (int index = 0; index<1; index++)
				{
					random_integer = (rand() % 100) + 1;
					cout << random_integer << endl;
					if (random_integer >= 50)
					{

						system("CLS");

						cout << " __     ______  _    _  __          ______  _   _ " << endl;
						cout << " \\ \\   / / __ \\| |  | | \\ \\        / / __ \\| \\ | |" << endl;
						cout << "  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / / |  | |  \\| |" << endl;
						cout << "   \\   /| |  | | |  | |   \\ \\/  \\/ /| |  | | . ` |" << endl;
						cout << "    | | | |__| | |__| |    \\  /\\  / | |__| | |\\  |" << endl;
						cout << "    |_|  \\____/ \\____/      \\/  \\/   \\____/|_| \\_|" << endl;

						cout << " You feel is sizzling in your stomache as money appears in your hand. You won! \n ";
						money += 500;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;

					}
					else
					{

						system("CLS");

						cout << " __     ______  _    _   _      ____   _____ ______ " << endl;
						cout << " \\ \\   / / __ \\| |  | | | |    / __ \\ / ____|  ____|" << endl;
						cout << "  \\ \\_/ / |  | | |  | | | |   | |  | | (___ | |__   " << endl;
						cout << "   \\   /| |  | | |  | | | |   | |  | |\\___ \\|  __|  " << endl;
						cout << "    | | | |__| | |__| | | |___| |__| |____) | |____ " << endl;
						cout << "    |_|  \\____/ \\____/  |______\\____/|_____/|______|" << endl;
						cout << " The world starts to spin as you become dizzy as the money dissapears from your wallet. \n " << endl;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;
					}
				}
			}
			if (drinkChoice == "6")
			{
				money -= 500;

				srand((unsigned)time(0));
				int random_integer;
				for (int index = 0; index<1; index++)
				{
					random_integer = (rand() % 100) + 1;
					cout << random_integer << endl;
					if (random_integer >= 50)
					{

						system("CLS");

						cout << " __     ______  _    _  __          ______  _   _ " << endl;
						cout << " \\ \\   / / __ \\| |  | | \\ \\        / / __ \\| \\ | |" << endl;
						cout << "  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / / |  | |  \\| |" << endl;
						cout << "   \\   /| |  | | |  | |   \\ \\/  \\/ /| |  | | . ` |" << endl;
						cout << "    | | | |__| | |__| |    \\  /\\  / | |__| | |\\  |" << endl;
						cout << "    |_|  \\____/ \\____/      \\/  \\/   \\____/|_| \\_|" << endl;

						cout << " You feel is sizzling in your stomache as money appears in your hand. You won! \n ";
						money += 1000;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;

					}
					else
					{

						system("CLS");

						cout << " __     ______  _    _   _      ____   _____ ______ " << endl;
						cout << " \\ \\   / / __ \\| |  | | | |    / __ \\ / ____|  ____|" << endl;
						cout << "  \\ \\_/ / |  | | |  | | | |   | |  | | (___ | |__   " << endl;
						cout << "   \\   /| |  | | |  | | | |   | |  | |\\___ \\|  __|  " << endl;
						cout << "    | | | |__| | |__| | | |___| |__| |____) | |____ " << endl;
						cout << "    |_|  \\____/ \\____/  |______\\____/|_____/|______|" << endl;
						cout << " The world starts to spin as you become dizzy as the money dissapears from your wallet. \n " << endl;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;
					}
				}
			}
			if (drinkChoice == "7")
			{
				money -= 750;

				srand((unsigned)time(0));
				int random_integer;
				for (int index = 0; index<1; index++)
				{
					random_integer = (rand() % 100) + 1;
					cout << random_integer << endl;
					if (random_integer >= 50)
					{

						system("CLS");

						cout << " __     ______  _    _  __          ______  _   _ " << endl;
						cout << " \\ \\   / / __ \\| |  | | \\ \\        / / __ \\| \\ | |" << endl;
						cout << "  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / / |  | |  \\| |" << endl;
						cout << "   \\   /| |  | | |  | |   \\ \\/  \\/ /| |  | | . ` |" << endl;
						cout << "    | | | |__| | |__| |    \\  /\\  / | |__| | |\\  |" << endl;
						cout << "    |_|  \\____/ \\____/      \\/  \\/   \\____/|_| \\_|" << endl;

						cout << " You feel is sizzling in your stomache as money appears in your hand. You won! \n ";
						money += 1500;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;

					}
					else
					{

						system("CLS");

						cout << " __     ______  _    _   _      ____   _____ ______ " << endl;
						cout << " \\ \\   / / __ \\| |  | | | |    / __ \\ / ____|  ____|" << endl;
						cout << "  \\ \\_/ / |  | | |  | | | |   | |  | | (___ | |__   " << endl;
						cout << "   \\   /| |  | | |  | | | |   | |  | |\\___ \\|  __|  " << endl;
						cout << "    | | | |__| | |__| | | |___| |__| |____) | |____ " << endl;
						cout << "    |_|  \\____/ \\____/  |______\\____/|_____/|______|" << endl;
						cout << " The world starts to spin as you become dizzy as the money dissapears from your wallet. \n " << endl;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;
					}
				}
			}
			if (drinkChoice == "8")
			{
				money -= 1000;

				srand((unsigned)time(0));
				int random_integer;
				for (int index = 0; index<1; index++)
				{
					random_integer = (rand() % 100) + 1;
					cout << random_integer << endl;
					if (random_integer >= 50)
					{

						system("CLS");

						cout << " __     ______  _    _  __          ______  _   _ " << endl;
						cout << " \\ \\   / / __ \\| |  | | \\ \\        / / __ \\| \\ | |" << endl;
						cout << "  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / / |  | |  \\| |" << endl;
						cout << "   \\   /| |  | | |  | |   \\ \\/  \\/ /| |  | | . ` |" << endl;
						cout << "    | | | |__| | |__| |    \\  /\\  / | |__| | |\\  |" << endl;
						cout << "    |_|  \\____/ \\____/      \\/  \\/   \\____/|_| \\_|" << endl;

						cout << " You feel is sizzling in your stomache as money appears in your hand. \n " << endl;
						money += 2000;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;

					}
					else
					{

						system("CLS");

						cout << " __     ______  _    _   _      ____   _____ ______ " << endl;
						cout << " \\ \\   / / __ \\| |  | | | |    / __ \\ / ____|  ____|" << endl;
						cout << "  \\ \\_/ / |  | | |  | | | |   | |  | | (___ | |__   " << endl;
						cout << "   \\   /| |  | | |  | | | |   | |  | |\\___ \\|  __|  " << endl;
						cout << "    | | | |__| | |__| | | |___| |__| |____) | |____ " << endl;
						cout << "    |_|  \\____/ \\____/  |______\\____/|_____/|______|" << endl;
						cout << " The world starts to spin as you become dizzy as the money dissapears from your wallet. \n " << endl;
						cout << " Enter any character and press enter to continue. ";
						cin >> menucont;
					}
				}
			}

		}

		while (menuChoice == "2")
		{

			system("CLS");

			cout << "  _____          _   _ _  __  ____          _   _ _  __" << endl;
			cout << " |  __ \\   /\\   | \\ | | |/ / |  _ \\   /\\   | \\ | | |/ /" << endl;
			cout << " | |  | | /  \\  |  \\| | ' /  | |_) | /  \\  |  \\| | ' / " << endl;
			cout << " | |  | |/ /\\ \\ | . ` |  <   |  _ < / /\\ \\ | . ` |  <  " << endl;
			cout << " | |__| / ____ \\| |\\  | . \\  | |_) / ____ \\| |\\  | . \\ " << endl;
			cout << " |_____/_/    \\_\\_| \\_|_|\\_\\ |____/_/    \\_\\_| \\_|_|\\_\\ \n " << endl;

			cout << " Would you like to fill out a form for a personal loan?\n " << endl;
			cout << " Type \"y\" to continue, type anything else to go back to The Hub: ";
			cin >> bankYes;

			if (bankYes != "y")
			{
				system("CLS");

				cout << "  _______ _    _ ______   _    _ _    _ ____  " << endl;
				cout << " |__   __| |  | |  ____| | |  | | |  | |  _ \\ " << endl;
				cout << "    | |  | |__| | |__    | |__| | |  | | |_) |" << endl;
				cout << "    | |  |  __  |  __|   |  __  | |  | |  _ < " << endl;
				cout << "    | |  | |  | | |____  | |  | | |__| | |_) |" << endl;
				cout << "    |_|  |_|  |_|______| |_|  |_|\\____/|____/ " << endl;


				cout << "  Where would you like to go? \n " << endl;
				cout << "  1. Drink Bar  2. Dank Bank\n " << endl;
				cout << "  Pick your choice and press enter to continue:";
				cin >> menuChoice;
			}

			if (bankYes == "y")
			{

				system("CLS");

		//		cout << "  _____          _   _ _  __  ____          _   _ _  __" << endl;
		//		cout << " |  __ \\   /\\   | \\ | | |/ / |  _ \\   /\\   | \\ | | |/ /" << endl;
		//		cout << " | |  | | /  \\  |  \\| | ' /  | |_) | /  \\  |  \\| | ' / " << endl;
		//		cout << " | |  | |/ /\\ \\ | . ` |  <   |  _ < / /\\ \\ | . ` |  <  " << endl;
		//		cout << " | |__| / ____ \\| |\\  | . \\  | |_) / ____ \\| |\\  | . \\ " << endl;
		//		cout << " |_____/_/    \\_\\_| \\_|_|\\_\\ |____/_/    \\_\\_| \\_|_|\\_\\ \n " << endl;

				cout << " Please fill out this form to apply for a loan, why should we trust you?\n " << endl;
				cout << " Enter your name: ";
				cin >> bankName;

				system("CLS");

		//		cout << "  _____          _   _ _  __  ____          _   _ _  __" << endl;
		//		cout << " |  __ \\   /\\   | \\ | | |/ / |  _ \\   /\\   | \\ | | |/ /" << endl;
		//		cout << " | |  | | /  \\  |  \\| | ' /  | |_) | /  \\  |  \\| | ' / " << endl;
		//		cout << " | |  | |/ /\\ \\ | . ` |  <   |  _ < / /\\ \\ | . ` |  <  " << endl;
		//		cout << " | |__| / ____ \\| |\\  | . \\  | |_) / ____ \\| |\\  | . \\ " << endl;
		//		cout << " |_____/_/    \\_\\_| \\_|_|\\_\\ |____/_/    \\_\\_| \\_|_|\\_\\ \n " << endl;

				cout << " Please fill out this form to apply for a loan, why should we trust you?\n " << endl;
				cout << " What is your age: ";
				cin >> bankAge;

				system("CLS");

		//		cout << "  _____          _   _ _  __  ____          _   _ _  __" << endl;
		//		cout << " |  __ \\   /\\   | \\ | | |/ / |  _ \\   /\\   | \\ | | |/ /" << endl;
		//		cout << " | |  | | /  \\  |  \\| | ' /  | |_) | /  \\  |  \\| | ' / " << endl;
		//		cout << " | |  | |/ /\\ \\ | . ` |  <   |  _ < / /\\ \\ | . ` |  <  " << endl;
		//		cout << " | |__| / ____ \\| |\\  | . \\  | |_) / ____ \\| |\\  | . \\ " << endl;
		//		cout << " |_____/_/    \\_\\_| \\_|_|\\_\\ |____/_/    \\_\\_| \\_|_|\\_\\ \n " << endl;

				cout << " Please fill out this form to apply for a loan, why should we trust you?\n " << endl;
				cout << " Why do you need this loan, what is your story? It better be good: ";
				cin >> bankStory;

				if (bankName != name)
				{

					system("CLS");

		//			cout << "  _____          _   _ _  __  ____          _   _ _  __" << endl;
		//			cout << " |  __ \\   /\\   | \\ | | |/ / |  _ \\   /\\   | \\ | | |/ /" << endl;
		//			cout << " | |  | | /  \\  |  \\| | ' /  | |_) | /  \\  |  \\| | ' / " << endl;
		//			cout << " | |  | |/ /\\ \\ | . ` |  <   |  _ < / /\\ \\ | . ` |  <  " << endl;
		//			cout << " | |__| / ____ \\| |\\  | . \\  | |_) / ____ \\| |\\  | . \\ " << endl;
					cout << " |_____/_/    \\_\\_| \\_|_|\\_\\ |____/_/    \\_\\_| \\_|_|\\_\\ \n \n We are proccessing your form..." << endl;

					cout << " ";

					Sleep(3000000);


					system("CLS");

		//			cout << "  _____          _   _ _  __  ____          _   _ _  __" << endl;
		//			cout << " |  __ \\   /\\   | \\ | | |/ / |  _ \\   /\\   | \\ | | |/ /" << endl;
		//			cout << " | |  | | /  \\  |  \\| | ' /  | |_) | /  \\  |  \\| | ' / " << endl;
		//			cout << " | |  | |/ /\\ \\ | . ` |  <   |  _ < / /\\ \\ | . ` |  <  " << endl;
		//			cout << " | |__| / ____ \\| |\\  | . \\  | |_) / ____ \\| |\\  | . \\ " << endl;
		//			cout << " |_____/_/    \\_\\_| \\_|_|\\_\\ |____/_/    \\_\\_| \\_|_|\\_\\ \n " << endl;

					system("CLS");

					cout << "You gave us false information! Never come back here again!\n " << endl;




					cout << "   _____          __  __ ______    ______      ________ _____  " << endl;
					cout << "  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ " << endl;
					cout << " | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |" << endl;
					cout << " | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  / " << endl;
					cout << " | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\ " << endl;
					cout << "  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\ \n \n " << endl;

					cout << " You are now broke, on the streets, a different man then ever before. You've learned your lesson, maybe one day you will return. Until then, our curiosity wins again.\n " << endl;
					cout << " Enter any character and press enter to continue. ";
					cin >> menucont;
					exit(0);

				}

				else
				{

					srand((unsigned)time(0));
					int random_integer;
					for (int index = 0; index<1; index++)
					{
						random_integer = (rand() % 100) + 1;
						if (random_integer >= 50)
						{

							money += 500;

							system("CLS");

					//		cout << "  _____          _   _ _  __  ____          _   _ _  __" << endl;
					//		cout << " |  __ \\   /\\   | \\ | | |/ / |  _ \\   /\\   | \\ | | |/ /" << endl;
					//		cout << " | |  | | /  \\  |  \\| | ' /  | |_) | /  \\  |  \\| | ' / " << endl;
					//		cout << " | |  | |/ /\\ \\ | . ` |  <   |  _ < / /\\ \\ | . ` |  <  " << endl;
					//		cout << " | |__| / ____ \\| |\\  | . \\  | |_) / ____ \\| |\\  | . \\ " << endl;
							cout << " |_____/_/    \\_\\_| \\_|_|\\_\\ |____/_/    \\_\\_| \\_|_|\\_\\ \n \n We are proccessing your form..." << endl;

							cout << " ";

							Sleep(3000);

							system("CLS");

					//		cout << "  _____          _   _ _  __  ____          _   _ _  __" << endl;
					//		cout << " |  __ \\   /\\   | \\ | | |/ / |  _ \\   /\\   | \\ | | |/ /" << endl;
					//		cout << " | |  | | /  \\  |  \\| | ' /  | |_) | /  \\  |  \\| | ' / " << endl;
					//		cout << " | |  | |/ /\\ \\ | . ` |  <   |  _ < / /\\ \\ | . ` |  <  " << endl;
					//		cout << " | |__| / ____ \\| |\\  | . \\  | |_) / ____ \\| |\\  | . \\ " << endl;
					//		cout << " |_____/_/    \\_\\_| \\_|_|\\_\\ |____/_/    \\_\\_| \\_|_|\\_\\ \n " << endl;

							cout << " Your loan has been approved, you have recieved $500. Don't come back here however, or you will be denied!\n " << endl;
							cout << " Enter any character and press enter to go back to The Hub. ";
							cin >> menucont;
						}
						else
						{
							system("CLS");

					//		cout << "  _____          _   _ _  __  ____          _   _ _  __" << endl;
					//		cout << " |  __ \\   /\\   | \\ | | |/ / |  _ \\   /\\   | \\ | | |/ /" << endl;
					//		cout << " | |  | | /  \\  |  \\| | ' /  | |_) | /  \\  |  \\| | ' / " << endl;
					//		cout << " | |  | |/ /\\ \\ | . ` |  <   |  _ < / /\\ \\ | . ` |  <  " << endl;
					//		cout << " | |__| / ____ \\| |\\  | . \\  | |_) / ____ \\| |\\  | . \\ " << endl;
					    	cout << " |_____/_/    \\_\\_| \\_|_|\\_\\ |____/_/    \\_\\_| \\_|_|\\_\\ \n \n We are proccessing your form..." << endl;

							cout << " ";

							Sleep(3000);

							system("CLS");

					//		cout << "  _____          _   _ _  __  ____          _   _ _  __" << endl;
					//		cout << " |  __ \\   /\\   | \\ | | |/ / |  _ \\   /\\   | \\ | | |/ /" << endl;
					//		cout << " | |  | | /  \\  |  \\| | ' /  | |_) | /  \\  |  \\| | ' / " << endl;
					//		cout << " | |  | |/ /\\ \\ | . ` |  <   |  _ < / /\\ \\ | . ` |  <  " << endl;
					//		cout << " | |__| / ____ \\| |\\  | . \\  | |_) / ____ \\| |\\  | . \\ " << endl;
					//		cout << " |_____/_/    \\_\\_| \\_|_|\\_\\ |____/_/    \\_\\_| \\_|_|\\_\\ \n " << endl;
							cout << "Your loan has been denied, we do not believe you have the capacity to fullfill your promises. " << endl;

							cout << "You gave us false information! Never come back here again!\n " << endl;

							Sleep(3000);

							system("CLS");

							cout << "   _____          __  __ ______    ______      ________ _____  " << endl;
							cout << "  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ " << endl;
							cout << " | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |" << endl;
							cout << " | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  / " << endl;
							cout << " | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\ " << endl;
							cout << "  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\ \n \n " << endl;

							cout << " You are now broke, on the streets, a different man then ever before. You've learned your lesson, maybe one day you will return. Until then, our curiosity wins again.\n " << endl;
							cout << " Enter any character and press enter to continue. ";
							cin >> menucont;
							exit(0);

						}
					}
				}
			}
		}

		while (menuChoice != "2" && menuChoice != "1")

			system("CLS");

		cout << "  _______ _    _ ______   _    _ _    _ ____  " << endl;
		cout << " |__   __| |  | |  ____| | |  | | |  | |  _ \\ " << endl;
		cout << "    | |  | |__| | |__    | |__| | |  | | |_) |" << endl;
		cout << "    | |  |  __  |  __|   |  __  | |  | |  _ < " << endl;
		cout << "    | |  | |  | | |____  | |  | | |__| | |_) |" << endl;
		cout << "    |_|  |_|  |_|______| |_|  |_|\\____/|____/ " << endl;


		cout << "  Pick a Available Option: \n " << endl;
		cout << "  1. Drink Bar  2. Dank Bank\n " << endl;
		cout << "  Pick your choice and press enter to continue:";
		cin >> menuChoice;

	}
}