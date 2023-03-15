// Task_6.Replace all negative elements of the array with their squares and arrange the elements of the array by growth

#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int nums[size];
	int sort_nums[size];
	srand(time(NULL));

	for (int i = 0; i < size; i++)	// Generate array
	{
		int ran = rand() % 2 + 1;
		if (ran == 2)	// 1 to 2 for negative num
		{
			int r = rand() % 20 + 0;
			r = r - r * 2;
			nums[i] = r;
		}
		else // Random nums
		{
			nums[i] = rand() % 20 + 0;;
		}

		//		cin >> nums[i];
	}

	cout << "\n\n\t\t\tArray: ";

	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << " ";// Out array

		if (nums[i] < 0)
		{
			nums[i] = nums[i] * nums[i];
		}
		sort_nums[i] = INT_MAX;
	}

	int k = 0;
	
	cout << "\n\n\t Array power negative: ";
	
	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << " ";// Out array
	}

	for (int i = 0; i < size; i++)
	{
		for (int c = 0; c < size; c++)
		{
			if (sort_nums[i] > nums[c])
			{
				sort_nums[i] = nums[c];
				k = c;
			} 
		}
		nums[k] = INT_MAX;
	}

	cout << "\n\n\t\t Sorted array: ";

	for (int i = 0; i < size; i++)
	{
		cout << sort_nums[i] << " ";// Out array
	}

	cout << "\n\n\n";
}