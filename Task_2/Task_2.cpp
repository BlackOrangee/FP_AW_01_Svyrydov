// Task 2. Compress the array by removing all elements whose modulus does not exceed one.
//

#include <iostream>
using namespace std;

int main()
{
	const int size = 20;
	double nums[size];
	double f_nums[size];
	int f_nums_size = 0;

	srand(time(NULL));

	for (int i = 0; i < size; i++)	// Generate array
	{	
		int ran = rand() % 2 + 1;
		if (ran == 2)	// 1 to 2 for negative num
		{
			double r = rand() % 200 + 0;
			r = r - r * 2;
			r /= 100;
			nums[i] = r;
		}
		else // Random nums
		{
			double r = rand() % 200 + 0;
			r /= 100;
			nums[i] = r;
		}
	}

	cout << "\n\nArray: ";

	for (int i = 0; i < size; i++)	
	{
		cout << nums[i] << " ";// Out array

		if ((nums[i] > 1) || (nums[i] < -1))	// Filtering
		{
			f_nums[f_nums_size] = nums[i];	// Write filtered array

			f_nums_size++;	// Size of new array
		}
	}
	
	cout << "\n\nFiltered array: ";

	for (int i = 0; i < f_nums_size; i++)
	{
		cout << f_nums[i] << " ";	// Out filtered array
	}
	cout << "\n\n\n";
}