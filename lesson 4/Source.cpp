#include <iostream>
#include<conio.h>

int main()
{
	//1) Написати програму, яка знаходить та виводить в дійсному вигляді середнє арифметичне трьох введених ЦІЛИХ чисел Запропонувати декілька варіантів розвязку.

	std::cout << "**** EXERCISE NUMBER : 1 ****\n" << std::endl;

	int num_a, num_b, num_c, num_d = 0;
	int sum_1, sum_2 = 0;
	int const numofnum = 3;

	std::cout << "Please enter three integers : " << std::endl;

	std::cout << "Enter the first integer a : " << std::endl;
	std::cin >> num_a;
	std::cout << "Enter the second integer b : " << std::endl;
	std::cin >> num_b;
	std::cout << "Enter the third integer c : " << std::endl;
	std::cin >> num_c;

	std::cout << "\n" << std::endl;

	std::cout << "The first version of the problem solution " << std::endl;
	std::cout << "a + b + c = d; d/3 = arithmetic average; " << std::endl;

	num_d = num_a + num_b + num_c;
	sum_1 = num_d / numofnum;
	std::cout << "Arithmetic average  : " << sum_1 << "\n" << std::endl;


	std::cout << "The second version of the problem solution " << std::endl;
	std::cout << "(a + b + c) / 3 = arithmetic average; " << std::endl;

	sum_2 = (num_a + num_b + num_c) / numofnum;
	std::cout << "Arithmetic average  : " << sum_2 << "\n" << std::endl;

	//2) Дано 2 - цифрове число.Вивести кожну цифру числа окремо та знайти суму його цифр(скоритсайтеся операцією % для обчислення останньої(другої) цифри.

	std::cout << "**** EXERCISE NUMBER : 2 ****\n" << std::endl;

	int number = 0;
	int first_num = 0; 
	int second_num = 0;
	int sum = 0;
	
	std::cout << "Enter number : " << std::endl;
	
	std::cin >> number;
	
	first_num = number / 10;
	second_num = number % 10;
	sum = first_num + second_num;
	
	std::cout << "\n" << std::endl;
	std::cout << "The first number : " << first_num << std::endl;
	std::cout << "The second number :  " << second_num << "\n" << std::endl;
	std::cout << "The sum of the first and second numbers : " << sum << "\n" << std::endl;


	//3)Дано 3 цілих числа.Вивести на екран true, якщо числа впорядковані за зростанням(наприклад 1 5 7 впорядковані за зростанням, а 1 5 3 - ні), інакше вивести - false.

	std::cout << "**** EXERCISE NUMBER : 3 ****\n" << std::endl;
	
	int number_one = 0;
	int number_two = 0;
	int number_three = 0;

	std::cout << "Enter three numbers : \n" << std::endl;

	std::cout << "Enter one number : " << std::endl;
	std::cin >> number_one;

	std::cout << "Enter two number : " << std::endl;
	std::cin >> number_two;

	std::cout << "Enter three number : " << std::endl;
	std::cin >> number_three;

	std::cout << "\n" ;
	
	std::cout << "If the numbers are in ascending order, it will be : \" true\" : " << std::endl;
	std::cout << "If the number is not in ascending order, it will be: \"false\" : \n" << std::endl;
	
	std::cout << "" << std::boolalpha << (number_one < number_two) ? number_three : number_two;
	
	std::cout << "\n" << std::endl;


	//4) Дано 3 числа.Вивести true, якщо серед них є додатні та парні.

	std::cout << "**** EXERCISE NUMBER : 4 ****\n" << std::endl;
	
	int num_4_1, num_4_2, num_4_3 = 0;
	bool sum_num_1, sum_num_2, sum_num_3;
	int const num_4_const = 2;

	std::cout << "Enter three numbers : " << std::endl;
	std::cin >> num_4_1;
	std::cin >> num_4_2;
	std::cin >> num_4_3;

	sum_num_1 = num_4_1 % num_4_const;
	sum_num_2 = num_4_2 % num_4_const;
	sum_num_3 = num_4_3 % num_4_const;

	std::cout << "\nIf the condition is true it will be \"TRUE\" if not or \"FALSE\" : " << "\n" << std::endl;
	std::cout << "first number :" << std::boolalpha << (!sum_num_1) << std::endl;
	std::cout << "second number :" << std::boolalpha << (!sum_num_2) << std::endl;
	std::cout << "third number :" << std::boolalpha << (!sum_num_3) << "\n" << std::endl;


	//5) Дано 2 числа.Порівняти числа.Вивести повідомлення виляду : ’ перше число більше(менше, рівне) другому’.

	std::cout << "**** EXERCISE NUMBER : 5 ****\n" << std::endl;

	int num_5_1, num_5_2 = 0;

	std::cout << "Please enter numbers : \n" << std::endl;

	std::cout << "first number : " << std::endl;
	std::cin >> num_5_1;

	std::cout << "\nsecond number : " << std::endl;
	std::cin >> num_5_2;


		if (num_5_1 > num_5_2)
		{
			std::cout << "\nthe first number is greater than the second number : " << std::endl;
			std::cout << num_5_1 << " > " << num_5_2 << std::endl;

		}

		if (num_5_1 < num_5_2)
		{
			std::cout << "\nthe first number is less than the second number : " << std::endl;
			std::cout << num_5_1 << " < " << num_5_2 << std::endl;
		}

		else
		{
			std::cout << "\nthe first number is equal to second number : " << std::endl;
			std::cout << num_5_1 << " = " << num_5_2 << std::endl;
		}
		std::cout << "\n" << std::endl;


		//6) Дано двоцифрове число.Визначити чи число має однакові цифри(11, 22 і т.д.)

		std::cout << "**** EXERCISE NUMBER : 6 ****\n" << std::endl;

		int numb_6_1, numb_6_a, numb_6_b;
		int const numb_const_6 = 10;

		std::cout << "Program: whether the number has the same digits " << std::endl;
		
		std::cout << "enter please number : " << std::endl;
		std::cin >> numb_6_1;

		numb_6_a = numb_6_1 / numb_const_6;
		numb_6_b = numb_6_1 % numb_const_6;
		
		std::cout << "\n";
		std::cout << "if the first digit \" = \" the second digit will be : \" true \" " << std:: endl;
		std::cout << "if the first digit is not \" = \" the second digit will be : \" false \" \n" << std::endl;
		std::cout << numb_6_a << " " << std::boolalpha << (numb_6_a == numb_6_b) << " " << numb_6_b << "\n" << std::endl;


		//7) Дано трьохцифрове число.Визначити чи число має однакові першу і останню цифри(131, 272 і т.д.)

		std::cout << "**** EXERCISE NUMBER : 7 ****\n" << std::endl;

		int const numb_const_7_1 = 100;
		int const numb_const_7_2 = 10;
		int numb_7_1, numb_7_2, numb_7_3 = 0;

		std::cout << "Enter a three significant number : " << std::endl;
		std::cin >> numb_7_1;

		numb_7_2 = numb_7_1 / numb_const_7_1;
		numb_7_3 = numb_7_1 % numb_const_7_2;
		
		std::cout << "\n";
		std::cout << "if the first digit \" = \" the third digit will be : \" true \" " << std:: endl;
		std::cout << "if the first digit is not \" = \" the third digit will be : \" false \" " << "\n" << std::endl;
		std::cout << std::boolalpha << (numb_7_2 == numb_7_3) << "\n" << std::endl;


		//8) Дано сторони прямокутника.Визначити чи прямокутник є квадратом.

		std::cout << "**** EXERCISE NUMBER : 8 ****\n" << std::endl;

		int side_A = 0;
		int side_B = 0;


		std::cout << "Enter the length of the sides \" a \" : " << std::endl;
		std::cin >> side_A;

		std::cout << "Enter the length of the sides \" b \" : " << std::endl;
		std::cin >> side_B;

		std::cout << "if the rectangle is a square, then it will be : \"TRUE\" " << std::endl;
		std::cout << "if the rectangle is a no square, then it will be : \"FALSE\" \n" << std::endl;

		std::cout << std::boolalpha << (side_A == side_B) << "\n" << std::endl;



		//9) Дано символ.Визначити чи символ є цифрою.(НЕ ВИКОНАВ)

	

	//10) Дано 2 числа.Якщо перше число більше другого поміняти місцями значення змінних.Вивести значення змінних на екран.

	std::cout << "**** EXERCISE NUMBER : 10 ****\n" << std::endl;

	int num_10_1, num_10_2;

	std::cout << "first number : " << std::endl;
	std::cin >> num_10_1;

	std::cout << "\nsecond number : " << std::endl;
	std::cin >> num_10_2;

	std::cout << "\noutput the number in ascending order : \n" << std::endl;
	if (num_10_1 > num_10_2)
	{
		std::cout << num_10_2 << " " << num_10_1 << std::endl;
	}
		
	if (num_10_1 <= num_10_2)
	{
		std::cout << num_10_1 << " " << num_10_2 << std::endl;
	}



	return 0;
}