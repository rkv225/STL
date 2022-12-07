#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;
	arr.reserve(11); // reserve the capacity of a vector
	arr.push_back(8);
	arr.push_back(1);
	arr.push_back(5);
	arr.push_back(7);
	arr.push_back(2);
	arr.push_back(10);
	arr.push_back(6);
	arr.push_back(9);
	arr.push_back(3);
	arr.push_back(4);

	cout << "Size: " << arr.size() << endl; // return the values of the elements stored in vector
	cout << "Capacity: " << arr.capacity() << endl; // vector may reserve more capacity than required
	cout << "Element at index 4: " << arr.at(4) << endl;
	cout << "First element: " << arr.front() << endl;
	cout << "Last element: " << arr.back() << endl;

	arr.clear(); // clears content
	cout << "After clear:" << "Size->" << arr.size() << " Capacity->" << arr.capacity() << endl;
}