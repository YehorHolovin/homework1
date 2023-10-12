
#include <iostream>

int main()
{
	std::cout << "***ARRAY***" << std::endl;
	std::cout << "exercise 1" << std::endl;
	std::cout << "exercise 2" << std::endl;
	std::cout << "exercise 3" << std::endl;
	std::cout << "exercise 4" << std::endl;
	std::cout << "exercise 5" << std::endl;
	std::cout << "exercise 6" << std::endl;
	std::cout << "exercise 7" << std::endl;
	std::cout << "exercise 8" << std::endl;
	std::cout << "exercise 9" << std::endl;
	std::cout << "exercise 10" << std::endl;
	std::cout << "exercise 11" << std::endl;
	std::cout << "exercise 12" << std::endl;
	std::cout << "exercise 13" << std::endl;
	std::cout << "exercise 14" << " exercise not done ( " << std::endl;

	std::cout << "choose an exercise number : " << std::endl;
	std::cout << " if you want to exit, press ' another key ' :" << std::endl;

	int exercise;
	bool choice = true;

	while (choice)
	{
		std::cin >> exercise;
		switch (exercise)
		{
		case 1:
		{	//1) ��������� ����������� ����� � 10 �������� ���� int.��������� ���� ���������� � ���������, ������� �� ����� �� ���������� ������� �������� ������
			std::cout << "exercise 1" << std::endl;
			const int size = 10;
			int sum = 0;
			int num = 0;
			int A[size] = {};

			for (int i = 0, count = 1; i < size; i++, count++)
			{
				std::cout << "enter a number : " << count << std::endl;
				std::cin >> num;
				A[i] = num;
			}
			std::cout << std::endl;
			std::cout << "array A : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << A[i] << " ";
				sum += A[i];
			}
			std::cout << std::endl;
			std::cout << "sum of array elements : " << sum << std::endl;
			return 0;
		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 2:
		{	// 2) ��������� ����������� ����� � 7 �������� ���� int.��������� ���� ����������� ���������� � �������[-12.. + 50] �� ������� �� �����.
	//ϳ��������� ������� ������ �� ������� �������� ������.
			std::cout << "exercise 2" << std::endl;
			const int size = 7;

			int count_m = 0;

			int A[size] = { -12,4,-3,45,-4,6,-6 };

			std::cout << "array A : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << A[i] << " ";
				if (A[i] < 0)
				{
					count_m++;
				}
			}
			std::cout << std::endl;
			std::cout << "negative elements : " << count_m << std::endl;
			std::cout << "positive elements : " << size - count_m << std::endl;

		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 3:
		{	//3) ���������, �������������� ����������� ���������� �� ������� ����������� ����� � 7 �������� ���� long.��������� ���� ������ �������� ������

			std::cout << "exercise 3" << std::endl;

			const int size = 7;
			long sumA = 0;

			long A[size] = { 1,2,3,4,5,6,7 };

			std::cout << "array A : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << A[i] << " ";

				if (A[i] % 2 == 0)
				{
					sumA += A[i];
				}
			}
			std::cout << std::endl;
			std::cout << "sum of array elements : " << sumA << std::endl;
		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 4:
		{	//4) �������� ����������� ����� ������� 30. ��������� ���� �������, �� � ��������� 2: (1, 2, 4, 8, 16, ...).������� �������� ������ �� ����� � ������� � ���������� �������.

			std::cout << "exercise 4" << std::endl;

			const int size = 30;
			int A[size] = { 1, };
			for (int i = 1; i < size; i++)
			{
				A[i] = i * 2;

			}

			std::cout << "array A : ";
			for (int i = 29; i >= 0; i--)
			{
				std::cout << A[i] << " ";
			}
		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 5:
		{	//5) ���� ����������� �����.������� �� �䒺�� �������� �� ��������.

			std::cout << "exercise 5" << std::endl;
			const int size = 5;

			int A[size] = { -2,54,-25,-87,-789 };

			std::cout << "array A : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << A[i] << " ";
			}

			std::cout << std::endl;

			std::cout << "Replaced all negative elements with their modules : ";
			for (int i = 0; i < size; i++)
			{
				if (A[i] < 0)
				{
					A[i] = -A[i];
				}
				std::cout << A[i] << " ";
			}
			std::cout << std::endl;

		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 6:
		{	////6) ���� ����������� �����.������ ��������� �� ��������� �������� ������ �� ������� �� � ����� ������. �� ���������*************************************************

			std::cout << "exercise 6" << std::endl;
			const int size = 5;

			int A[size] = { 1,-4,3,2,6 };

			int i_max = 0;
			int max = A[0];

			int i_min = 0;
			int min = A[0];

			int temp = 0;
			std::cout << "array A : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << A[i] << " ";
			}

			for (int i = 0; i < size; i++)
			{
				if (A[i] > max)
				{
					i_max = i;
				}
				if (min > A[i])
				{
					i_min = i;
				}
			}
			std::cout << std::endl;

			temp = A[i_min];
			A[i_min] = A[i_max];
			A[i_max] = temp;

			std::cout << "changed array A : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << A[i] << " ";
			}

		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 7:
		{	//7) ���� ����������� �����.������ ���� �������� � ��������� ���������.

			std::cout << "exercise 7" << std::endl;
			const int size = 8;

			int A[size] = { 1,-4,-67,6,76,-453,-34,43 };
			int sum = 0;
			for (int i = 0; i < size; i++)
			{
				if (i % 2 == 1)
				{
					sum += A[i];
				}
			}
			std::cout << "sum of elements with odd indices : " << sum;

		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 8:
		{	//8) ���� ����������� �����.������ ������ �������� ����������� �� ������ � ������� ������ ���������.

			std::cout << "exercise 8" << std::endl;
			const int size = 7;

			int A[size] = { 2,-1,35,234,34,-54,123 };
			int min_el = 0;
			int max_el = 0;
			for (int i = 0; i < size; i++)
			{
				if (A[i] < 0)
				{
					max_el = i;
				}
			}
			for (int i = 0; i < size; i++)
			{
				if (A[i] < 0)
				{
					min_el = i;
					break;
				}
			}
			if ((max_el - 1) - min_el <= 0)
			{
				std::cout << "has nothing to count.";
			}
			else
			{
				std::cout << "the number of digits between the first and last negative elements : " << (max_el - 1) - min_el;
			}

		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 9:
		{	//9) ���� ����������� �����.������� ������ ������ ������� � ������, ����� � ���������, � �.�.������� ������� ����� �� �����.

			std::cout << "exercise 9" << std::endl;
			const int size = 6;

			int A[size] = { 1,2,3,4,5,6 };

			std::cout << "not a mixed array : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << A[i] << " ";
			}
			std::cout << std::endl;
			for (int i = 0; i < size; i += 2)
			{
				int temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
			}
			std::cout << "mixed array : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << A[i] << " ";
			}
			std::cout << std::endl;

		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 10:
		{	//10) ���� ����� �.��������� �������� ������ � � ����� �.

			std::cout << "exercise 10" << std::endl;
			const int size = 5;
			int A[size] = { 5,4,3,2,1 };
			int B[size] = {};

			std::cout << " array A : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << A[i] << " ";
			}
			for (int i = 0; i < size; i++)
			{
				B[i] = A[i];
			}
			std::cout << std::endl;

			std::cout << " array B : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << B[i] << " ";
			}

		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 11:
		{	//11) ���� ����� �.�������� ������ ������ � � ����� �(����� ������ ������� ������ � �������� �� ���� ���������� �������� ������ �, 
	// ������ ������� ������ � �������� �� ���� ��������������� �������� ������ � � �.�.).������� ������ ������ �� ������� �������� �� ����� � ������ 3 - � ��������.

			std::cout << "exercise 11" << std::endl;
			const int size = 5;
			int A[size] = { 5,4,3,2,1 };
			int B[size] = {};
			int index = size;

			std::cout << " array A : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << A[i] << " ";
			}
			for (int i = 0; i < size; i++, index--)
			{
				B[index - 1] = A[i];
			}
			std::cout << std::endl;

			std::cout << " array B : ";
			for (int i = 0; i < size; i++)
			{
				std::cout << B[i] << " ";
			}

		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 12:
		{	//12) ���� 2 ����������� ������(� � �) �� � �������� �����.�������� ����� �����(�) �� � * 2 ��������, ����������� � ����� �������� �� �������� ������ � �� �������, � ���� �������� ������ �.

			std::cout << "exercise 12" << std::endl;
			const int a_size = 5;
			const int b_size = 5;
			const int c_size = a_size + b_size;
			int A[a_size] = { 5,4,3,2,1 };
			int B[b_size] = { 1,2,3,4,5 };
			int C[c_size] = {};

			std::cout << " array A : ";
			for (int i = 0; i < a_size; i++)
			{
				std::cout << A[i] << " ";
			}
			std::cout << std::endl;

			std::cout << " array B : ";
			for (int i = 0; i < b_size; i++)
			{
				std::cout << B[i] << " ";
			}
			std::cout << std::endl;

			for (int i = 0; i < a_size; i++)
			{
				C[i] = A[i];
			}
			int index = c_size - a_size;
			for (int i = 0; i < b_size; i++, index++)
			{
				C[index] = B[i];
			}
			std::cout << " array C : ";
			for (int i = 0; i < c_size; i++)
			{
				std::cout << C[i] << " ";
			}

		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 13:
		{	//13)���� �����(�) �� � ��������(� - ����� �����).�������� 2 ������(� � �), ����������� � ����� � ����� �������� ������ �, � ����� � � ����� �������� ������ �.

			std::cout << "exercise 13" << std::endl;
			const int c_size = 10;
			const int a_size = c_size / 2;
			const int b_size = c_size / 2;

			int C[c_size] = { 1,2,3,4,5,6,7,8,9,10 };
			int A[a_size] = {};
			int B[b_size] = {};

			std::cout << " array C : ";
			for (int i = 0; i < c_size; i++)
			{
				std::cout << C[i] << " ";
			}

			std::cout << std::endl;

			for (int i = 0; i < a_size; i++)
			{
				A[i] = C[i];
			}
			std::cout << " array A : ";
			for (int i = 0; i < a_size; i++)
			{
				std::cout << A[i] << " ";
			}
			std::cout << std::endl;

			int index = c_size - a_size;
			for (int i = 0; i < b_size; i++, index++)
			{
				B[i] = C[index];
			}
			std::cout << " array B : ";
			for (int i = 0; i < b_size; i++)
			{
				std::cout << B[i] << " ";
			}
		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		case 14:
		{
			std::cout << "exercise 14" << std::endl;
			std::cout << "exercise not done ;(" << std::endl;
		}
		std::cout << std::endl;
		std::cout << "choose an exercise number : " << std::endl;

		break;

		default:
		{
			std::cout << "EXIT";
			choice = false;
		}

		}
	}
	return 0;
}
