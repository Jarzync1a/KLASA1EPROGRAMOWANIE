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

int main()
{
	setlocale(LC_CTYPE, "polish");

	task1();
}
