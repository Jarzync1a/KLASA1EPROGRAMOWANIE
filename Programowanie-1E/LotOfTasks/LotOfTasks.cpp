#define _USE_MATH_DEFINES
#include <iostream>

//LotOfTasks

/*
Podstawy programowania:
1. Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb. */
void task1()
{
    int firstNumber, secondNumber;

    std::cout << "Podaj pierwsz� liczbe:";
    std::cin >> firstNumber;

    std::cout << "Podaj pierwsz� liczbe:";
    std::cin >> secondNumber;

    std::cout << "srednia arytmetyczna dw�ch podanych liczb r�wna sie : " << (firstNumber + secondNumber) / 2;
}

/*
2. Program obliczaj�cy pole prostok�ta. */
void task2()
{
    int firstSide, secondSide;

    std::cout << "Podaj pierwszy bok prostok�ta:";
    std::cin >> firstSide;

    std::cout << "Podaj drugi bok prostok�ta:";
    std::cin >> secondSide;

    std::cout << "Pole prostok�ta r�wna si�:" << firstSide * secondSide;
}

/*
3. Program obliczaj�cy obj�to�� sto�ka.*/
void task3()
{
    int figureRadius, figureHeight;

    std::cout << "Podaj promie� podstawy sto�ka:";
    std::cin >> figureRadius;

    std::cout << "Podaj promie� podstawy sto�ka:";
    std::cin >> figureHeight;

    std::cout << "Pole sto�ka wynosi:" << 2 * M_PI * figureRadius * figureHeight / 3;
}

/*
4. Program obliczaj�cy pole ko�a.*/
void task4()
{
    int circleRadius;

    std::cout << "Podaj promie� ko�a:";
    std::cin >> circleRadius;

    std::cout << "Pole ko�a wynosi:" << 2 * M_PI * circleRadius;


}

/*
5. Program obliczaj�cy warto�� wyra�enia a^2 + b^2 */
void task5()
{
    int a, b;

    std::cout << "Podaj warto�� a:";
    std::cin >> a;

    std::cout << "Podaj warto�� b:";
    std::cin >> b;

    std::cout << "warto�� wyra�enia a^2 + b^2 jest r�wna:" << a * a + b * b;
}

/*
6. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h */
void task6()
{
    int baseOfTheFigure, heightOfthefigure;

    std::cout << "Podaj podstawe tr�jk�ta:";
    std::cin >> baseOfTheFigure;

    std::cout << "Podaj wysoko�� tr�jk�ta:";
    std::cin >> heightOfthefigure;

    std::cout << "Pole tr�jk�ta wynosi:" << baseOfTheFigure * heightOfthefigure / 2;
}

/*
7. Program obliczaj�cy obj�to�� kuli o promieniu r */
void task7()
{
    int radiusOfTheBall;

    std::cout << "Podaj promie� kuli:";
    std::cin >> radiusOfTheBall;

    std::cout << "objeto�� kuli wynosi:" << 4 * M_PI * radiusOfTheBall * radiusOfTheBall * radiusOfTheBall / 3;
}

/*
8. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h */
void task8()
{
    int firstBase, secondBase, heightOfFigure;

    std::cout << "Podaj pierwsz� podstawe trapezu:";
    std::cin >> firstBase;

    std::cout << "Podaj drug� podstawe trapezu:";
    std::cin >> secondBase;

    std::cout << "Podaj wysoko�� trapezu:";
    std::cin >> heightOfFigure;

    std::cout << "Pole trapezzu wynosi:" << (firstBase + secondBase) * heightOfFigure / 2;
}

/*
9. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
Instrukcja If: */
void task9()
{
    int 
}

/*
10. Program sprawdzaj�cy czy podana liczba jest parzysta czy nieparzysta */
void task10()
{

}

/*
11. Program sprawdzaj�cy czy podana liczba jest dodatnia, ujemna czy r�wna zero */
void task11()
{

}

/*
12. Program sprawdzaj�cy czy podany rok jest rokiem przest�pnym
13. Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
14. Program sprawdzaj�cy czy podane has�o jest poprawne (np. je�li has�o jest "abc123", program powinien wy�wietli� "has�o poprawne", je�li jest inne, powinien wy�wietli� "has�o niepoprawne").
15.Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
16. Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej temperatury (np. "ciep�o" dla temperatury powy�ej 20 stopni Celsjusza, "ch�odno" dla temperatury poni�ej 10 stopni Celsjusza itd.)
P�tle:
17. Program sprawdzaj�cy czy podana liczba jest liczb� pierwsz� (czyli tak�, kt�ra dzieli si� tylko przez 1 i przez siebie sam�)
18. Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
19. Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
20. Program sprawdzaj�cy czy podana liczba jest liczb� doskona�� (czyli tak�, kt�rej suma dzielnik�w (z wy��czeniem samej siebie) jest r�wna danej liczbie, np. 6 jest liczb� doskona��, poniewa� 1 + 2 + 3 = 6).
P�tla for:
21. Program wy�wietlaj�cy na ekranie kolejne liczby naturalne od 1 do 10
22. Program obliczaj�cy sum� liczb od 1 do 100
23. Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
24. Program wy�wietlaj�cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
25. Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
26. Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
27. Program obliczaj�cy sum� kwadrat�w liczb od 1 do 10
28. Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu (ci�g Fibonacciego to ci�g gdzie ka�dy element jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
29. Program wy�wietlaj�cy na ekranie kolejne pot�gi 2 od 2^0 do 2^10 (np. 2^0, 2^1, 2^2 itd.)
30. Program wy�wietlaj�cy na ekranie kolejne elementy ci�gu a_n = a_{n-1} + a_{n-2}, gdzie a_0=1, a_1=1 (ci�g ten zaczyna si� od 1, 1, 2, 3, 5, 8, 13 itd.).
P�tla do-while:
31. Program pytaj�cy u�ytkownika o has�o i wy�wietlaj�cy komunikat "has�o poprawne" lub "has�o niepoprawne" dop�ki u�ytkownik nie poda poprawnego has�a (np. "abc123").
32. Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dop�ki suma tych kwadrat�w nie przekroczy 1000.
Trudniejsze zadania:
33. Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).
34. Program obliczaj�cy najwi�kszy wsp�lny dzielnik (NWD) dw�ch liczb
35. Program obliczaj�cy najmniejsz� wsp�ln� wielokrotno�� (NWW) dw�ch liczb.
36. Program wyci�gaj�cy informacje z numeru PESEL
37. Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
Dla zaawansowanych:
38. Program implementuj�cy algorytm generowania liczb pseudolosowych (np. algorytm Mersenne Twister).
39. Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
40. Algorytm szyfrowania Morse'a - algorytm szyfruj�cy, w kt�rym ka�da litera w tek�cie jest zamieniana na ci�g znak�w "+" i "-", zgodny z kodem Morse'a.
41. Napisz program, kt�ry pobiera od u�ytkownika dwie macierze kwadratowe o takim samym rozmiarze i wy�wietla ich iloczyn.
42. Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
43. Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
44. Napisz gr� k�ko i krzy�yk.
*/

int main()
{
    setlocale(LC_CTYPE, "polish");
    //float pi = 2 * M_PI * promie�;
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    task8();
    //task9();
    //task10();
    //task11();
    //task12();
    //task13();
    //task14();
    //task15();
    //task16();
    //task17();
    //task18();
    //task19();
    //task20();
    //task21();
    //task22();
    //task23();
    //task24();
    //task25();
    //task26();
    //task27();
    //task28();
    //task29();
    //task30();
}