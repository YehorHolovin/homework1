//#include <iostream>
//int main()
//{
//	/*8. Переробіть першу задачу так, щоб вивід ось такий :
//	5, 10, 15, 20, 25.
//		Тобто між всіма числами має бути кома, а після останнього замість коми має бути крапка.
//		Для цього використовуйте if всередині for.*/
//
//	const int size = 5;
//	const int inc_by = 5;
//	int number = 5;
//	
//	int arr[size];
//
//	for (int index = 0; index < size; index++)
//	{
//		arr[index] = number;
//		number += inc_by;
//		
//		if (index != size-1)
//		{
//			std::cout << arr[index] << ", ";
//		}
//		else
//			std::cout << arr[index] << ". ";
//	}
//
//
//
//
//	/*7. Створіть 3 масиви.Всі вони мають тип int і їх розмір 5 елементів.Перші два масиви
//		ініціалізуйте списковою ініціалізацією.Можете вибирати будь які числа.Третій масив - це сума
//		двох попередніх.А якщо точніше то кожний i - тий елемент третього масиву є сумою i - тих елементів
//		двох перших масивів.Напишіть два цикли : перший рахує ці суми, другий виводить всі три масиви на екран.*/
//
//		const int size = 5;
//
//		int arr[size] = { 1,2,3,4,5 };
//		int arr_1[size] = { 2,3,4,5,6 };
//		int arr_sum[size];
//
//		for (int index = 0; index < 5; index++)
//		{
//			arr_sum[index] = arr[index] + arr_1[index];
//		}
//		std::cout << "ARR1 | ARR2 | ARR3\n";
//		for (int index = 0; index < 5; index++)
//		{
//			std::cout << arr[index] << "\t" << arr_1[index] << "\t" << arr_sum[index] << "\t" << std::endl;
//		}
//
//
//		/*6. Створіть масив із 30 елементів.Напишіть програму, яка записує в цей масив перші 30 чисел
//			Фібоначі.Суть цих чисел проста - кожне наступне число є сумою двох попередніх.
//			Перші числа нехай будуть 0 і 1. Їх можете задати вручну.Всі наступні маєте рахувати в циклі.
//			Ось перші 10 числ Фібоначчі : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144.
//			Після запису всіх елементів в іншому циклі for виведіть їх на екран.*/
//
//		const int size = 30;
//		unsigned long int Fibonacci[size] = { 0, 1 };
//		int size_max = size;
//
//		for (int index = 2; index  < size_max; index++)
//		{
//			Fibonacci[index] = Fibonacci[index - 1] + Fibonacci[index - 2];	
//			
//		}
//
//		for (int index = 0; index < size_max; index++)
//		{
//			std::cout << Fibonacci[index] << " ";
//		}
//		std::cout << std::endl;
//
//
//
//		/*6. Створіть масив із 30 елементів.Напишіть програму, яка записує в цей масив перші 30 чисел
//			Фібоначі.Суть цих чисел проста - кожне наступне число є сумою двох попередніх.
//			Перші числа нехай будуть 0 і 1. Їх можете задати вручну.Всі наступні маєте рахувати в циклі.
//			Ось перші 10 числ Фібоначчі : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144.
//			Після запису всіх елементів в іншому циклі for виведіть їх на екран.*/
//
//		int fibonacci(int number)
//		{
//			if (number == 0)
//				return 0; // базовий випадок (умова завершення)
//			if (number == 1)
//				return 1; // базовий випадок (умова завершення)
//			return fibonacci(number - 1) + fibonacci(number - 2);
//		}
//
//		int main()
//		{
//
//			const int size = 30;
//			unsigned long int Fibonacci[size];
//			int index = 0;
//			int size_max = size;
//
//			for (int count = 0; count < size_max; ++count, index++)
//			{
//				Fibonacci[index] = fibonacci(count);
//				std::cout << Fibonacci[index] << " ";
//			}
//
//			std::cout << std::endl;
//
//
//
//		/*5. Переробіть другу задачу через цикли do while.*/
//
//		const int size = 26;
//		char alphabet[size];
//
//		char letter = 'A';
//		
//		int index = 0;
//		do
//		{
//			alphabet[index] = letter;
//			index++;
//			letter++;	
//		} while (index < size);
//		std::cout << "All letters from English alphabet : ";
//		
//		index = 0;
//		do
//		{
//			std::cout << alphabet[index];
//			index++;
//		} while (index < size);
//
//
//
//			/*4. Створіть масив типу double з іменем temperatures розміром 3. Напишіть три рядки, в яких вручну
//				задайте кожному елементу
//				наступне значення : 17.3, 18.5, 17.9.
//
//				Виведіть в стовпчик спочатку температуру на кожний день.Має бути ось так :
//			Day #1: 17.3C
//			Day #2: 18.5C
//			Day #3: 17.9C
//
//				Після цього порахуйте середню температуру(завдяки циклу for) і виведіть її на екран.*/
//
//			const int size = 3;
//			
//			int index = 0;
//			int number = 1;
//			double temperatures[size] = { 17.3, 18.5, 17.9 };
//			
//			for (index = 0; index < size; index++)
//			{
//				std::cout << "Day #" << index + 1 << ": " << temperatures[index] << "C" << std::endl;
//			}
//			
//			double sum = 0.0;
//			for (index = 0; index < size; index++)
//			{
//				sum += temperatures[index];
//			}
//			std::cout << "average temperature : " << sum / size << "C" << std::endl;
//
//			/*3. Найдіть суму всіх елементів масиву з першої задачі, і виведіть її на екран.*/
//
//			const int size = 5;
//			const int inc_by = 5;
//			int number = 5;
//			int sum_index = 0;
//			int arr[size];
//
//			for (int index = 0; index < size; index++)
//			{
//				arr[index] = number;
//				number += inc_by;
//				sum_index += arr[index];
//			}
//			std::cout << sum_index;
//
//			/*2. Створіть масив типу char з іменем alphabet розміром 26. Це масив має містити в собі всі букви
//				англійського алфавіту.
//				Завдяки циклу for заповніть його буквами від A до Z.Ви можете створити змінну, яка буде спочатку
//				рівна A, а в кожній ітерації циклу збільшувати її на 1. Так буква A зміниться на B, потім на C,
//				і за 26 ітерацій дійде до останньої букви.Після заповнення виведіть завдяки іншому циклу for
//				всі елементи масиву на екран в один рядок без проміжку.Вивід має бути ось такий :
//			All letters from English alphabet : ABCDEFG...XYZ*/
//
//			const int size = 26;
//			char letter = 'A';
//
//			char alphabet[size];
//			
//			for (int index = 0; index < size; index++, letter++)
//			{
//				alphabet[index] = letter;
//			}
//			
//			std::cout << "All letters from English alphabet : ";
//			for (int index = 0; index < size; index++)
//			{
//				std::cout << alphabet[index];
//			}
//			std::cout << std::endl;
//
//
//
//				/*1. Створіть масив типу int з іменем numbers розміром 5. Завдяки списковій ініціалізації заповніть його елементи
//					наступними значеннями : 5, 10, 15, 20, 25.
//					Завдяки циклу for виведіть на екран всі елементи цього масиву у рядок з проміжком в пробіл.Тобто вивід має
//					бути ось такий : 5 10 15 20 25*/
//
//				const int size = 5;
//				const int inc_by = 5;
//				int number = 5;
//
//				int arr[size];
//
//				for (int index = 0; index < size; index++)
//				{
//					arr[index] = number;
//					number += inc_by;
//					std::cout << arr[index] << " ";
//				}
//
//
//	return 0;
//}