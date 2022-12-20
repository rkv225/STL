#include <iostream>
#include <deque>

using namespace std;

int main()
{
	/*
	* insertion and deletion at both ends
	* elements not stored contiguously
	The storage of a deque is automatically expanded and contracted as needed. 
	Expansion of a deque is cheaper than the expansion of a std::vector 
	because it does not involve copying of the existing elements to a new memory location.
	The complexity (efficiency) of common operations on deques is as follows:
	Random access - constant O(1)
	Insertion or removal of elements at the end or beginning - constant O(1)
	Insertion or removal of elements - linear O(n)
	*/
	deque<int> d = { 7, 5, 16, 8 };
	d.push_back(10);
	d.push_front(4);
	d.push_front(1);
	cout << "front " << d.front() << endl;
	cout << "back " << d.back() << endl;
	d.pop_front();
	d.pop_back();
	cout << "new front " << d.front() << endl;
	cout << "new back " << d.back() << endl;
}