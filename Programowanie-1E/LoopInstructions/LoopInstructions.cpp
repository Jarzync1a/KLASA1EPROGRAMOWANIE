#include <iostream>

/*
Napisz funkcje kt�ra pobierze liczbe dodatnia do skutku.
*/

void task1()
{
	int number;

	do
	{
		std::cout << "podaj liczb� dodatni�:\n ";
		std::cin >> number;
	} while (number <= 0);

	std::cout << "poda�e� liczbe dodatni�: " << number << "\n";
}


void task2()
{
	int lowRange, highRange;
	std::cout << "Podaj zakres dolny: ";
	std::cin >> lowRange;
	std::cout << "Podaj zakres g�rny: ";
	std::cin >> highRange;

	int currentNumber = lowRange;

	do
	{
		std::cout << currentNumber << ", " ;
		currentNumber++;
	} while (currentNumber != highRange + 1);
}

void task3()
{
	int randomNumber;

	srand(time(NULL));

	randomNumber = rand() % 100 + 1;

	//std::cout << "wylosowana liczba to: " << randomNumber << "\n";

	int numberFromUser;
	
	do
	{
		std::cout << "Podaj liczbe: ";
		std::cin >> numberFromUser;

		if (numberFromUser > randomNumber)
			std::cout << "liczba jest za du�a \n";

		if (numberFromUser < randomNumber)
			std::cout << "liczba jest za ma�a \n";

	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje";
}


int main()
{
	setlocale(LC_CTYPE, "polish");

	//task1();
	//task2();
	task3();
}
