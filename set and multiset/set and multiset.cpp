#include <iostream>
#include <set>

using namespace std;

int main()
{
	// set
	// sorted unique keys
	// implemented as red black trees
	set<int> s;
	s.insert(1);
	s.insert(6);
	s.insert(3);
	s.insert(8);
	s.insert(5);
	s.insert(1);

	cout << "size " << s.size() << endl;
	cout << "count " << s.count(1) << endl; // will be either 0 or 1 as this container doesn't allow duplicate
	cout << "find " << *(s.find(5)) << endl;

	//unordered set -> include <unordered_set>, unique keys, unsorted, implemented by hashmap

	//multiset -> non unique keys, sorted
	
	//unordered multiset -> non unique keys, unsorted
}