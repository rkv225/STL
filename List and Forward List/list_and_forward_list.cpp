#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main()
{
	// List -- implemented as doubly linked list -- random access not supported -- bidirectional iteration supported
	list<int> numbers = { 1, 2, 3, 4, 5, 6 };
	numbers.push_front(0);
	numbers.push_back(7);
	cout << "Size of list " << numbers.size() << endl;
	cout << "List: ";
	list<int>::iterator iterator = numbers.begin();
	while (iterator != numbers.end())
	{
		cout << *iterator << " ";
		iterator++;
	}

	//forward list -- implemented as singly linked list -- only forward iterator supported

	forward_list<int> n = { 1, 2, 3, 4, 5, 6 };
	n.push_front(0);
	// n.push_back(7); // this is not allowed
	cout << "\nForward List:" << endl;
	forward_list<int>::iterator it = n.begin();
	while (it != n.end())
	{
		cout << *it << " ";
		it++;
	}
}