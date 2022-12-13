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

	/*do
	{
		std::cout << currentNumber << ", " ;
		currentNumber++;
	} while (currentNumber != highRange + 1);
	*/

	while (currentNumber <= highRange)
	{
		std::cout << currentNumber << ", ";
		currentNumber++;
	}
	std::cout << "\nTa linijka jest poza p�tl�\n";
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

void task4()
{
	int firstNumber, secondNumber;
	std::cout << "podaj pierwsz� liczb� do wskazania NWD:";
	std::cin >> firstNumber;
	std::cout << "podaj drug� liczb� do wskazania NWD:";
	std::cin >> secondNumber;

	int a = firstNumber;
	int b = secondNumber;

	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
	}
}

void task5()
{
	int numberFromUser;
	std::cout << "Podaj liczbe:";
	std::cin >> numberFromUser;

	
	int result = 1;
	/*
	int i = 2;
	while (i <= numberFromUser)
	{
		result = result * i;
		i++;
	}
	*/

	for (int i = 2;(i <= numberFromUser); i++)
	{
		result = result * i;
		i++;
	}
	std::cout << numberFromUser << "! =" << result << "\n";
	
}

/*
wczytac napis od urzytkowniaka i wy�wietlui� ile jest liter w wyrazie.
*/
void task6()
{
	std::string textFromUser;
	std::cout << "Podaj wyraz: ";
	std::cin >> textFromUser;

	std::cout << "Urzytkownik poda�: " << textFromUser << "\n";
	std::cout << "Napis sk�ada sie z: " << textFromUser.length() << " znak�w \n";
	std::cout << "Pierwszy znak z napisu: : " << textFromUser[0] << "\n";
	std::cout << "Ostatni znak napisu to: " << textFromUser[textFromUser.length() - 1] << "\n";

	int coutChar = 0;
	
	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			coutChar++;
	}
	
	std::cout << "Znakow 'a' jest: " << coutChar << "\n";
}

/*
Zadanie
Napisz funkcje, kt�ra wczyta i zamieni du�e litery na ma�e a ma�e litery na du�e a wszytkie pozosta�e znaki pozostawi nie zmienione.
*/

void task7()
{
	std::string textFromUser;
	std::cout << "Podaj wyraz: ";
	std::cin >> textFromUser;

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z')
			textFromUser[i] = textFromUser[i] + 32;
		else if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z')
			textFromUser[i] = textFromUser[i] - 32;
	}

	std::cout << "Napis po zminie: " << textFromUser << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	task7();
}
