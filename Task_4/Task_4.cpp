// Task 4. Transform an array - rearrange its elements in such a way that initially
// all elements equal to zero were located, and then all the others.

#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int nums[size];
	int zero_index[size];
	int zero_num = -1;

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

		if (nums[i] == 0)
		{
			++zero_num;	// zero much
			zero_index[zero_num] = i; // Indexes of zero
		}
	}

	for (int i = 0, k = 0; i <= zero_num; --zero_num)	// how much zeros need moove
	{
		int x = zero_index[zero_num] + k;

		for (int i = 0; i < x; --x) // Move zero on begin
		{
			int temp = nums[x];
			nums[x] = nums[x - 1];
			nums[x - 1] = temp;
		}
		++k;
	}

	cout << "\n\n\tArray: ";

	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << " ";// Out array
	}

	cout << "\n\n\n";
}