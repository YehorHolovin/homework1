#include <iostream>
#include <math.h>

int main()
{
	std::cout << "EXERCISE MENU : " << std::endl;
	std::cout << "1). Exercise -- 1 \n";
	std::cout << "2). Exercise -- 2 \n";
	std::cout << "3). Exercise -- 3 \n";
	std::cout << "4). Exercise -- 4 \n";
	std::cout << "5). Exercise -- 5 \n";
	std::cout << "6). Exercise -- 6 \n";
	std::cout << "7). Exercise -- 7 \n";
	std::cout << "8). Exercise -- 8 \n";
	std::cout << "9). Exercise -- 9 \n";
	std::cout << "10).Exercise -- 10 \n" << std::endl;

	std::cout << "Select the task that you want to check from 1 to 10. " << std::endl;
	std::cout << "If you want to exit, press another key : " << std::endl;

	int num_menu = 0;

	std::cin >> num_menu;

	switch (num_menu)
	{
	case 1:
		/*1.Користувач вводить температуру.Програма виводить повідомлення про стан організму(наприклад, 35 - 36.0 – понижена температура,
		стан ослабленого організму, 36.1 – 36.8 – нормальна температура, людина здорова і т.і.).*/
	{
		std::cout << "\tEXERCISE -- 1 : " << std::endl;
		std::cout << "Check your status and get advice." << std::endl;
		std::cout << "Please enter your body temperature in degrees Celsius  : " << std::endl;
		float temperature_сelsius;

		const double temperatur_tired_1 = 35.0;
		const double temperatur_tired_2 = 36.0;
		const double temperatur_normal_3 = 36.1;
		const double temperatur_normal_4 = 36.8;
		const double temperatur_patient_5 = 36.9;
		const double temperatur_patient_6 = 39.9;

		std::cout << " enter your body temperature in Celsius : \n";
		std::cin >> temperature_сelsius;

		if ((temperatur_tired_1 <= temperature_сelsius) == (temperature_сelsius <= temperatur_tired_2))
		{
			std::cout << " you are tired \n";
		}
		else if ((temperatur_normal_3 <= temperature_сelsius) == (temperature_сelsius <= temperatur_normal_4))
		{
			std::cout << " you are not sick \n";
		}
		else if ((temperatur_patient_5 <= temperature_сelsius) && (temperature_сelsius <= temperatur_patient_6))
		{
			std::cout << " you are sick \n";
		}
		else
		{
			std::cout << " maybe your thermometer is not working, or you should immediately consult a doctor \n";
		}

	}

	break;
	case 2:
		std::cout << "\tEXERCISE -- 2 : " << std::endl;
		/*2.Дано час(години, хвилини, секунди).Визначити чи час допустимий(н - д 25.61.60 – недопустимий).*/
		{
			int hour = 0, minets = 0, second = 0;
			const int houres_max = 24;
			const int minets_max = 59;
			const int second_max = 59;
			const int zero = 0;

			std::cout << " Enter hour :";
			std::cin >> hour;
			std::cout << "Enter minets :";
			std::cin >> minets;
			std::cout << "Enter second :";
			std::cin >> second;

			if (hour < zero || hour > houres_max)
			{
				std::cout << "the hours are not correct, please check";
			}
			else if (minets < zero || minets > minets_max)
			{
				std::cout << "you entered the minutes incorrectly, please check";
			}
			else if (second < zero || second > second_max)
			{
				std::cout << "the seconds are not entered correctly, please check";
			}
			else
			{
				std::cout << hour << " : " << minets << " : " << second << std::endl;
				std::cout << "the time entered is correct";
			}
		}
		
		break;
	case 3:
		std::cout << "\tEXERCISE -- 3 : " << std::endl;
		/*3. Дано рік(номер року).Визначити чи рік високосний.Рік високосний, якщо число року року ділиться націло на 4 і не ділиться на 100
		(наприклад високосними є 1996, 1992 роки).Серед років, число яких має дві останн і цифри нулі(тобто рік ділиться на 100),
		високосними є ті що діляться на 400(н - д, 1600, 1200 – високосні, а 1700, 1900 - ні).*/
		{
			int year = 0;
			std::cout << " find out which year is a leap year .\n";
			std::cout << "Enter year : ";
			std::cin >> year;

			while (year % 4 && year != 0)
			{
				std::cout << " this year is not a leap year : " << "\n";
				std::cout << "Enter year : ";
				std::cin >> year;
				year % 4;
			}
			std::cout << " this year is a leap year : " << year << " year " << std::endl;
		}
		break;
	case 4:
		std::cout << "\tEXERCISE -- 4 : " << std::endl;
		/*4. Вводиться вік і стать людини.Визначити чи людина пенсійного віку(жінки – після 55, чоловіки – після 60).*/
		{
			char gender = 'q';
			int old = 0;
			const int retirement_w = 55;
			const int retirement_m = 60;

			std::cout << "Enter gender if you are female w , if male m :";
			std::cin >> gender;


			while (gender != 'w' && gender != 'm')
			{
				std::cout << " be careful and enter correctly ";
				std::cout << "Enter gender if you are female w , if male m :";
				std::cin >> gender;
			}

			std::cout << " How old are you ?";
			std::cin >> old;

			if (gender == 'w' && old >= retirement_w)
			{
				std::cout << "you are a woman of retirement age";
			}
			else if (gender == 'm' && old >= retirement_m)
			{
				std::cout << "you are a man or retirement age";
			}
			else
			{
				std::cout << "you are still a young creature, go to work";
			}
		}
		break;
	case 5:
		/*5. Вивести на екран цілі числа від 1 до 100. - while*/
		std::cout << "\tEXERCISE -- 5 : " << std::endl;
		{
			int num_5_5 = 1;
			while (num_5_5 <= 100)
			{
				std::cout << num_5_5++;
			}
		}
		break;
	case 6:
		std::cout << "\tEXERCISE -- 6 : " << std::endl;
		/*6.Вводяться 10 чисел.Знайти суму та середнє арифметичне цих чисел. - while*/

		{
			float num_5_6 = 0;
			float sum_num = 0;
			int count = 1;
			
			std::cout << "enter number : ";
			std::cin >> num_5_6;
			
			std::cout << " attempt : " << count << std::endl;
			sum_num = num_5_6;
			
			while (count <= 9)
			{
				count++;
				std::cout << "enter number : ";
				std::cin >> num_5_6;
				sum_num += num_5_6;
				std::cout << " attempt : " << count << std::endl;
			}
			std::cout << sum_num / count << std::endl;
		}

		break;
	case 7:
		std::cout << "\tEXERCISE -- 7 : " << std::endl;
		/*7. Скласти програму обчислення суми квадратів перших n - непарних чисел.
		Вивести на екран, крім суми квадратів і самі непарні числа і їх квадрати. - do..while*/
		{
			int number1 = 0;
			int number2 = 0;

			do
			{
				std::cout << "enter an odd number : ";
				std::cin >> number1;
			} while ((number1 % 2) == 0);
			do
			{
				std::cout << "enter an odd number : ";
				std::cin >> number2;
			} while ((number2 % 2) == 0);

			std::cout << "first odd number : " << number1 << "\nsecond odd number : " << number2 << std::endl;
			std::cout << "the square of the first odd number : " << pow(number1, 2) << "\nthe square of the second odd number : " << pow(number2, 2) << std::endl;
			std::cout << "the sum of the squares of two odd numbers : " << pow(number1, 2) + pow(number2, 2) << std::endl;
		}
		break;
	case 8:
		std::cout << "\tEXERCISE -- 8 : " << std::endl;
		/*8.Написати програму яка обчислює суму семи чисел, які вводяться з клавіатури. - do..while*/
		{
			int num_5_8 = 0;
			int sum_5_8 = 0;
			int count = 1;

			std::cin >> num_5_8;
			do
			{

				std::cin >> num_5_8;

				std::cout << (sum_5_8 += num_5_8) << std::endl;
				std::cout << sum_5_8 << std::endl;
				count++;
			} while (count != 3);
		}
		break;
	case 9:
		std::cout << "\tEXERCISE -- 9 : " << std::endl;
		/*9.Написати програму, яка переводить введену користувачем довжину в сантиметри у інші одиниці довжини за вибором користувача(метри, дециметри, міліметри).
		Примітка!Роботу задачі організувати через систему меню*/
		{
			int kilometers = 0;
			char length = 'o';

			const int meters_const = 1000;
			const int decimeters_const = 10000;
			const int centimeters_const = 100000;
			const int millimeters_const = 1000000;

			std::cout << "length converter from kilometers to meters,\ndecimeters, centimeters, millimeters .";

			std::cout << " conversion to meters , if you want to convert to meters, enter : M ; " << std::endl;
			std::cout << " conversion to decimeters , if you want to convert to decimeters, enter : d ; " << std::endl;
			std::cout << " conversion to centimeters , if you want to convert to centimeters, enter : c ; " << std::endl;
			std::cout << " conversion to millimeters , if you want to convert to millimeters, enter : m ; " << std::endl;

			std::cin >> length;

			switch (length)
			{
			case 'M':
			{
				std::cout << " enter the kilometers you want to convert : ";
				std::cin >> kilometers;

				std::cout << " kilometers : " << " = " << kilometers * meters_const << " meters \n";
			}
			break;
			case 'd':
			{
				std::cout << " enter the kilometers you want to convert : ";
				std::cin >> kilometers;

				std::cout << "meters : " << " = " << kilometers * decimeters_const << " decimeters \n";
			}
			break;
			case 'c':
			{
				std::cout << " enter the kilometers you want to convert : ";
				std::cin >> kilometers;

				std::cout << "centimeters : " << " = " << kilometers * centimeters_const << " centimeters \n";
			}
			break;
			case 'm':
			{
				std::cout << " enter the kilometers you want to convert : ";
				std::cin >> kilometers;

				std::cout << "millimeters : " << " = " << kilometers * millimeters_const << " millimeter \n";
			}
			break;
			default:
			{
				std::cout << " review what you entered :( " << std::endl;
			}


			}
		}
		break;
	case 10:
		std::cout << "\tEXERCISE -- 10 : " << std::endl;
		/*10.Написати повноцінний калькулятор.Введення цифр та вибір математичної операції виконати в діалоговому стилі(запитати у користувача, вивести меню).
		У програмі передбачити уникнення помилок(ділення на нуль і т.д.).Фантазія та «дизайн» меню – ціниться та вітається!!!*/

		{
			double a = 0;
			double b = 0;
			double c = 0;
			int p = 0;
			char d = ' ';

			while (p != 2)
			{
				std::cout << "\n1 - calculator \n2 - exit \n";
				std::cin >> p;
				switch (p)
				{
				case 1:
				{
					std::cout << "First number ";
					std::cin >> a;
					std::cout << " specify an action : \+ , \- , \* , \/ ";
					std::cin >> d;
					std::cout << "Second number ";
					std::cin >> b;

					if (d == '+')
					{
						c = a + b;
						std::cout << "\nResult = " << c << std::endl;
					}
					if (d == '-')
					{
						c = a - b;
						std::cout << "\nResult = " << c << std::endl;
					}
					if (d == '*')
					{
						c = a * b;
						std::cout << "\nResult = " << c << std::endl;
					}
					if (d == '/')
					{
						if (a == 0 || b == 0)
						{
							std::cout << "\ndivision by zero is impossible" << std::endl;
						}
						else
						{
							c = a / b;
							std::cout << "\nResult = " << c << std::endl;
						}
					}
				}
				case 2:
				{
					break;
				}
				default:
				{
					std::cout << "make this choice from the indicated";
				}
				}
			}
		}
		break;
	default:
		std::cout << "exit the menu " << std::endl;
		break;

	}
	return 0;
}