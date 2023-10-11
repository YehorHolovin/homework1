#include <iostream>









int main()
{
	const int size = 6;

	int A[size] = { 0,-1,2,-3,-4,-7 };
	int max = 0;
	int min = 0;

	std::cout << "element array A : ";
	for (int i = 0; i < size; i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++) //знаходження максимального відємного числа.
	{
		if (A[i] < 0)
		{	
			max = i;
		}
		
	}	
	for (int i=0; i < size; i++) //знаходження мінімального відємного елемента.
	{
		if (A[i] < 0)
		{
			min = i;
			break;
		}
	}

	int sum = (max - 1) - min;
	std::cout << "the number of elements between the maximum negative and the minimum negative elements : " << sum;
	std::cout << std::endl;
	return 0;
}
