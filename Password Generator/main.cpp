//  _____      _____ ___ _____     _   _  _ ___    ___   _   _  _______   __  ___ _____ _   _ ___ ___ ___  ___
// / __\ \    / / __| __|_   _|   /_\ | \| |   \  / __| /_\ | ||_   _\ \ / / / __|_   _| | | |   \_ _/ _ \/ __|
// \__ \\ \/\/ /| _|| _|  | |    / _ \| .` | |) | \__ \/ _ \| |__| |  \ V /  \__ \ | | | |_| | |) | | (_) \__ \
// |___/ \_/\_/ |___|___| |_|   /_/ \_\_|\_|___/  |___/_/ \_\____|_|   |_|   |___/ |_|  \___/|___/___\___/|___/

#include <iostream>
#include <string>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

char* GenerateRandomPassword(char*);

int main()
{
	const int PASSWORD_CHARACTER_LENGHT = 8;

	cout << "PASSWORD GENERATOR" << endl;

	auto password = new char[PASSWORD_CHARACTER_LENGHT];

	GenerateRandomPassword(password);

	cout << password << endl;

	auto input = cin.get();

	cout << input << endl;

	return 0;
}

char* GenerateRandomPassword(char* password)
{
	char characters[] = "abcdefghijklmnopqrstuvwxyz0123456789";
	auto charactersAmount = strlen(characters);
	auto passwordLength = strlen(password);

	srand(time(0));

	for (auto i = 0; i < passwordLength; i++)
	{
		auto randomIndex = rand() % charactersAmount;

		auto randomLetter = characters[randomIndex];

		password[i] = randomLetter;
	}

	return password;
}