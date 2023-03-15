// Task 3. Compress the array by removing from it all elements whose modulus is in the interval
// [а, b].Fill the free elements at the end of the array with zeros.

#include <iostream>
using namespace std;

int main()
{
	const int size = 20;
	int nums[size];
	int from, to;

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
	}

	cout << "\n\n\tArray: ";

	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << " ";// Out array
	}

	cout << "\n\tEnter the range to filtration:\n\tFtom: ";	cin >> from;

	while ((from <= 0) || (from > size)) // Error if Incorrect value
	{
		cout << "\n\tError. Incorrect value\n\tEnter the number from 1 to " << size <<"\n\tFtom: ";	cin >> from;
	}

	cout << "\tTo: ";	cin >> to;

	while ((to <= 0) || (to > size)) // Error if Incorrect value
	{
		cout << "\n\tError. Incorrect value\n\tEnter the number from 1 to " << size << "\n\tTo: ";	cin >> to;
	}

	from--;
	to--;

	if (from > to)	// Changes places from and to, if they are entered the other way around
	{
		int temp = from;
		from = to;
		to = temp;
	}

	cout << "\n\n\tArray: ";

	for (int i = 0; i < size; i++)
	{
		if ((i < from) || (i > to))	// Filtering
		{
			nums[i] = 0;	// Changes unnecessary values to 0
		}

		cout << nums[i] << " ";// Out array
	}
	cout << "\n\n\n";
}