//#include <iostream>
//int main()
//{
//	/*8. ��������� ����� ������ ���, ��� ���� ��� ����� :
//	5, 10, 15, 20, 25.
//		����� �� ���� ������� �� ���� ����, � ���� ���������� ������ ���� �� ���� ������.
//		��� ����� �������������� if �������� for.*/
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
//	/*7. ������� 3 ������.�� ���� ����� ��� int � �� ����� 5 ��������.����� ��� ������
//		����������� ��������� ������������.������ �������� ���� �� �����.����� ����� - �� ����
//		���� ���������.� ���� ������ �� ������ i - ��� ������� �������� ������ � ����� i - ��� ��������
//		���� ������ ������.�������� ��� ����� : ������ ���� �� ����, ������ �������� �� ��� ������ �� �����.*/
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
//		/*6. ������� ����� �� 30 ��������.�������� ��������, ��� ������ � ��� ����� ����� 30 �����
//			Գ������.���� ��� ����� ������ - ����� �������� ����� � ����� ���� ���������.
//			����� ����� ����� ������ 0 � 1. �� ������ ������ ������.�� ������� ���� �������� � ����.
//			��� ����� 10 ���� Գ������� : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144.
//			ϳ��� ������ ��� �������� � ������ ���� for ������� �� �� �����.*/
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
//		/*6. ������� ����� �� 30 ��������.�������� ��������, ��� ������ � ��� ����� ����� 30 �����
//			Գ������.���� ��� ����� ������ - ����� �������� ����� � ����� ���� ���������.
//			����� ����� ����� ������ 0 � 1. �� ������ ������ ������.�� ������� ���� �������� � ����.
//			��� ����� 10 ���� Գ������� : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144.
//			ϳ��� ������ ��� �������� � ������ ���� for ������� �� �� �����.*/
//
//		int fibonacci(int number)
//		{
//			if (number == 0)
//				return 0; // ������� ������� (����� ����������)
//			if (number == 1)
//				return 1; // ������� ������� (����� ����������)
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
//		/*5. ��������� ����� ������ ����� ����� do while.*/
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
//			/*4. ������� ����� ���� double � ������ temperatures ������� 3. �������� ��� �����, � ���� ������
//				������� ������� ��������
//				�������� �������� : 17.3, 18.5, 17.9.
//
//				������� � �������� �������� ����������� �� ������ ����.�� ���� ��� ��� :
//			Day #1: 17.3C
//			Day #2: 18.5C
//			Day #3: 17.9C
//
//				ϳ��� ����� ��������� ������� �����������(������� ����� for) � ������� �� �� �����.*/
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
//			/*3. ������ ���� ��� �������� ������ � ����� ������, � ������� �� �� �����.*/
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
//			/*2. ������� ����� ���� char � ������ alphabet ������� 26. �� ����� �� ������ � ��� �� �����
//				����������� �������.
//				������� ����� for �������� ���� ������� �� A �� Z.�� ������ �������� �����, ��� ���� ��������
//				���� A, � � ����� �������� ����� ���������� �� �� 1. ��� ����� A �������� �� B, ���� �� C,
//				� �� 26 �������� ���� �� �������� �����.ϳ��� ���������� ������� ������� ������ ����� for
//				�� �������� ������ �� ����� � ���� ����� ��� �������.���� �� ���� ��� ����� :
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
//				/*1. ������� ����� ���� int � ������ numbers ������� 5. ������� �������� ����������� �������� ���� ��������
//					���������� ���������� : 5, 10, 15, 20, 25.
//					������� ����� for ������� �� ����� �� �������� ����� ������ � ����� � �������� � �����.����� ���� ��
//					���� ��� ����� : 5 10 15 20 25*/
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