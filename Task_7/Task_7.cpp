// Task_7.Transform an array - rearrange its elements so that initially
// all elements differing from the maximum by no more than 20 % were located,
// and then everyone else.

#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int nums[size];
	int sort_nums[size];
	int max = INT_MIN;
	int max_index = 0;

	srand(time(NULL));

	for (int i = 0; i < size; i++)	// Generate array
	{
			nums[i] = rand() % 20 + 0;;
		//		cin >> nums[i];
	}

	cout << "\n\n\t\t\tArray: ";

	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << " ";// Out array

		if (max < nums[i])	// Find max value
		{
			max = nums[i];
			max_index = i;
		}
	}

	nums[max_index] = nums[0];	// Move max to the beginning
	nums[0] = max;

	for (int i = 0, k = 0; i < size; i++)
	{

		int per = nums[i] * 100 / max;	// Find percent of max
		if ((per >= 80) && (i != 0))	// Move number to max
		{
			++k;
			int temp = nums[k];
			nums[k] = nums[i];
			nums[i] = temp;
		}
		
	}

	cout << "\n\n\t\t Sorted array: ";

	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << " ";// Out array

	}

	cout << "\n\n\n";
}