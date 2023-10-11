////Модернізуйте задачу 6 так, щоб на екран не тільки кількість цифр виводилося, але
////й обернене число.Тобто якщо користувач вводить 123, то ви маєте вивести :
////Кількість цифр : 3
////Обернене число : 321
//
//#include <iostream>
//int main()
//{
//	const int ten = 10;
//	int number = 0;
//	int lastnum = 0;
//	int revesnum = 0;
//	int count = 0;
//
//	std::cout << "enter number : ";
//	std::cin >> number;
//
//	int num = number;
//
//	// if the number is negative
//	bool is_neg_num = (number < 0);
//	if (is_neg_num)
//	{
//		num = -num;
//	}
//
//	//indicates the number of digits in the ledger number
//	if (num == 0)
//	{
//		count++;
//		std::cout << "your number consists of " << count << " digit" << std::endl;
//	}
//	else
//	{
//		for (; num > 0; count++)
//		{
//			num /= ten;
//		}
//		std::cout << "your number consists of " << count << " digit" << std::endl;
//	}
//
//	//outputs the numbers mirrored by the input
//	if (count == 1)
//	{
//		int exp = pow(10, count - 1);
//		std::cout << number * exp << std::endl;
//	}
//	else if (number != 0)
//	{
//		for (; number != 0; number /= 10)
//		{
//			lastnum = number % 10;
//			int exp = pow(10, count - 1);
//			revesnum += lastnum * exp;
//			count--;
//		}
//
//
//		std::cout << "reverce number : " << revesnum << std::endl;
//	}
//
//	return 0;
//}
//
//
//
//
//
//
