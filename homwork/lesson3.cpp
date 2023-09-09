#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{

	// 1) Ввести 2 цілих числа(змінні типу int).Знайти та вивести суму та добуток чисел.
	
	std::cout << "**** EXERCISE NUMBER : 1 ****\n" << std::endl;
	
	int num1 = 0;
	int num2 = 0;
	
	std::cout << "Enter two integers : " << std::endl;
	
	std::cin >> num1;
	std::cin >> num2;
	
	std::cout << "Sum : " << num1 + num2 << std::endl;
	std::cout << "Product : " << num1 * num2 << std::endl; 

	// 2) Напишіть програму, яка переводить кілометри в метри.Кілометри вводяться з клавіатури.
	
	std::cout << "\n**** EXERCISE NUMBER : 2 **** \n" << std::endl;

	float kilometer = 0;
	const  int met = 1000;
	float meters = 0;
	
	std::cout << "Enter kilometers to convert to meters : " << std::endl;
	
	std::cin >> kilometer;
	
	meters = kilometer * met;

	std::cout << "Entered : " << kilometer << " = " << meters << std::endl; 

	//3) Дано ціна 1 хвилини та кількість хвилин.Обчислити вартість дзвінка.

	std::cout << "\n**** EXERCISE NUMBER: 3 \n" << std::endl;

	float one_minutes = 1.5;
	int call_minutes = 60;
	float call_praice = 0;

	call_praice = one_minutes * call_minutes;

	std::cout << "  Price per minute : " << one_minutes << " $ " << std::endl;
	std::cout << "  Nmber of talking minutes : " << call_minutes << " min " << std::endl;
	std::cout << "  Price per talk time : " << call_praice << " $ " << std::endl;

	// 4)Ви купили в магазині 4 різні товари.Дані ціни кожного товару(константні значення) та кількість товару,
	//який був придбаний.Обрахувати та вивести вартість покупки.Забазпечити вивід у вигляді чеку.

	std::cout << "\n**** EXERCISE NUMBER : 4 **** \n" << std::endl;

	const float water = 1.5;
	const int cream = 6;
	const float orange = 2.5;
	const int book = 15;
	float water1 = 0;
	int cream1 = 0;
	float orange1 = 0;
	int book1 = 0;

	std::cout << "\t Noname Market" << std::endl;
	std::cout << "\t city New Moon\n" << std::endl;
	std::cout << "\t    GOODS" << std::endl;
	std::cout << "00002 seller \t 02 " << std::endl;
	std::cout << "Water * 1\t" << water * 1 << "$" << std::endl;
	std::cout << "Cream	* 3\t" << cream * 3 << "$" << std::endl;
	std::cout << "Orange * 6\t" << orange * 6 << "$" << std::endl;
	std::cout << "Book \"C++\" * 1\t" << book * 1 << "$\n\n" << std::endl;
	
	water1 = water * 1;
	cream1 = cream * 3;
	orange1 = orange * 6;
	book1 = book * 1;
	
	std::cout << "SUM : \t \t" << water1 + cream1 + orange1 + book1 << std::endl;

	// 5) Розробити програму, яка організовує діалог з користувачем і дозволяє обчислити по вказаній сумі і курсу
	//євро, долара та злотого в суму в гривнях. Примітка!З використанням констант.
	
	std::cout << "\n**** EXERCISE NUMBER : 5 **** \n" << std::endl;

	
	float cours_dollar = 38.150;
	float cours_euro = 41.150;
	float cours_gold = 2259.4165;
	float dollar = 0;
	float euro = 0;
	float gold = 0;
	float sum_dollar = 0;
	float sum_euro = 0;
	float sum_gold = 0;

	std::cout << " *** Hello, welcome to the currency converter ***\n " << std::endl;
	std::cout << " Today's exchange rate of currencies and gold : \n" << std::endl;

	std::cout << " Dollar : " << cours_dollar << " UAH " << std::endl;
	std::cout << "   Euro : " << cours_euro << " UAH " << std::endl;
	std::cout << "   Gold : " << cours_gold << " 1gr / UAH \n" << std::endl;
	std::cout << " What are you interested in? " << std::endl;
	
	std::cout << " If you are interested in the DOLLAR, enter the amount. \n If so, press \"0\" and ENTER " << std::endl;
	std::cin >> dollar;
	
	std::cout << " If you are interested in the EURO, enter the amount. \n If so, press \"0\" and ENTER " << std::endl;
	std::cin >> euro;
	
	std::cout << "If you are interested in GOLD, enter the number of grams. \n If so, press \"0\" and ENTER " << std::endl;
	std::cin >> gold;

	sum_dollar = cours_dollar * dollar;
	sum_euro = cours_euro * euro;
	sum_gold = cours_gold * gold;

	std::cout << " *** Conversion result *** \n " << std::endl;
	std::cout << " Convertible dollar " << sum_dollar << " UAH\n " << std::endl;
	std::cout << " Convertible euro " << sum_euro << " UAH\n " << std::endl;
	std::cout << " Convertible gold " << sum_gold << " UAH\n " << std::endl;
	
	// 6) Написати програму, яка переводить повний оберт планети Марс навколо Сонця в земні роки.Оберти ввести з клавіатури. 
	//(Марс робить повний оберт навколо Сонця за 686 земних днів)
	
	std::cout << "**** EXERCISE NUMBER : 6 **** \n" << std::endl;

	int day_Mars = 0;
	const int day_Erath = 365;
	int year_Erath = 0;
	int days_Erath = 0;

	
	
	std::cout << " Enter a number of Martian days to convert to Earth days and years. And press ENTER : \n " << std::endl;
	
	std::cin >> day_Mars;

	year_Erath = day_Mars / day_Erath;
	days_Erath = day_Mars % day_Erath;

	std::cout << "\n" << day_Mars << " day Mars " << " = " << year_Erath << " year " << days_Erath << " day Erath\n\n" << std::endl;

	// 7)Напишіть програму, яка обраховує квадрат та куб довільного введеного числа
	
	std::cout << "**** EXERCISE NUMBER : 7 **** \n" << std::endl;
	
	float a = 0;
	float b = 0;
	
	std::cout << "Enter the number you want to raise to the second power : " << std::endl;
	std::cout << "If you are not interested in it click ENTER. " << std::endl;

	std::cin >> a;

	std::cout << "\n\n" << std::endl;

	std::cout << "Enter the number to be raised to the third power : " << std::endl;
	std::cout << "If you are not interested in it click ENTER. " << std::endl;

	std::cin >> b;

	std::cout << "Your number is in step second : " << pow(a, 2) << "\n" << std::endl;
	std::cout << "Your number is in step third : " << pow(b, 3) << "\n" << std::endl;

	// 8)Дано витрати машиною пального на 100 км, ціну 1 л пального, а також шлях, який потрібно проїхати водію.
	// Обчислити та вивести на екран скільки потрібно витратити грошей водію, щоб проїхати вказаний шлях
	
	std::cout << "**** EXERCISE NUMBER : 8 **** \n" << std::endl;

	float distance = 0;
	float fuel_consumption = 0;
	float fuel_cost = 0;
	float cost_trip = 0;
	int const coefficient = 100;

	std::cout << " The cost of the trip \n" << std::endl;
	
	std::cout << "Enter the planned distance : " << std::endl;
	std::cin >> distance;

	std::cout << "Enter your fuel consumption per 100 km : " << std::endl;
	std::cin >> fuel_consumption;

	std::cout << "Enter the cost of fuel per liter : " << std::endl;
	std::cin >> fuel_cost;

	cost_trip = (distance * fuel_consumption / coefficient) * fuel_cost;

	std::cout << "\n The cost of the trip : " << cost_trip << "UAH" << std::endl;
	std::cout << "\n ***HAPPY JOURNEY *** \n" << std::endl;

	
	return 0;
}

