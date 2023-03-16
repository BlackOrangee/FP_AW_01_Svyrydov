// Task 1. Change the order of placement of elements in the array to reverse.
//

#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int nums[size];

	for (int i = 0; i < size; i++)	// Generate array
	{
		nums[i] = i + 1;
	}

	cout << "\n\n\t\tArray: ";

	for (int i = 0; i < size; i++)	// Out array
	{
		cout << nums[i] << " ";
	}

	cout << "\n\n\tReverse array: ";
	
	for (int i = size - 1; i >= 0; --i)	// Out reverse array
	{
		cout << nums[i] << " ";
	}
	cout << "\n\n\n";

}
