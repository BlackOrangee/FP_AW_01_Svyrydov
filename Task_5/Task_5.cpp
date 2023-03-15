// Task 5.Transform an array - rearrange its elements so that in the first half of it
// elements standing in odd positions were placed, and in the second half - elements,
// that stood in even positions.

#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int nums[size];
	int nums_1[size];
	int nums_2[size];
	int nums_1_size = -1;
	int nums_2_size = -1;

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

	cout << "\n\n\tArray: ";

	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << " ";// Out array

		if (i % 2)	// Even array
		{
			nums_2_size++; // Size 
			nums_2[nums_2_size] = nums[i];
		}
		else  // Not even array
		{
			nums_1_size++; // Size 
			nums_1[nums_1_size] = nums[i];
		}
	}
	
	int k = nums_1_size + 1;

	for (int i = 0; i < size; i++)
	{
		if (nums_1_size >= 0)	// Places non-even elements at the beginning
		{
			nums[i] = nums_1[i];
			--nums_1_size;
		}
		else  // Places even elements at the past of non-even
		{
			nums[i] = nums_2[i - k];
		}
	}

	cout << "\n\n\tSorted array: ";

	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << " ";// Out array
	}

	cout << "\n\n\n";
}