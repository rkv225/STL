#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool is_even(const int& i)
{
	return i % 2 == 0;
}

bool sort_comp(const int& a, const int& b)
{
	return a > b;
}

int main()
{
	///*
	vector<int> v;
	int n;
	cout << "enter size of n" << endl;
	cin >> n;
	v.reserve(n);
	cout << "enter numbers" << endl;
	for (int i = 0; i < n; i++)
	{
		int ti;
		cin >> ti;
		v.push_back(ti);
	}
	//*/

	/*
	// non modifying operations
	bool a;
	cout << "all_of" << endl;
	a = all_of(v.begin(), v.end(), is_even);
	cout << a ? "all numbers are even" : "all numbers are not even";
	cout << endl;

	cout << "any_of" << endl;
	a = any_of(v.begin(), v.end(), is_even);
	cout << a ? "any of the numbers is even" : "none of the numbers is even";
	cout << endl;

	cout << "none_of" << endl;
	a = none_of(v.begin(), v.end(), is_even);
	cout << a ? "none of the numbers is even" : "any number is even";
	cout << endl;

	int c;
	cout << "count" << endl;
	c = count(v.begin(), v.end(), 5);
	cout << "number of 5: " << c << endl;

	cout << "count_if" << endl;
	c = count_if(v.begin(), v.end(), is_even);
	cout << "even numbers: " << c << endl;

	vector<int>::iterator d;

	cout << "find" << endl;
	d = find(v.begin(), v.end(), 5); // return iterator to the first occurance
	cout << (d != v.end()) ? "found 5" : "not found 5";
	cout << endl;
	*/

	//use for strings
	const string str = "why waste time learning, when ignorance is instantaneous";
	const string search_str = "time";
	string::const_iterator e;
	cout << "search" << endl;
	e = search(str.begin(), str.end(), search_str.begin(), search_str.end()); // returns Iterator to the beginning of first occurrence of the sequence
	if (e != str.end()) cout << "found";
	else cout << "not_found";

	// modifying operations
	vector<int> nv;
	copy(v.begin(), v.end(), back_inserter(nv));
	cout << "\nnew vector" << endl;
	for (vector<int>::iterator it = nv.begin(); it != nv.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	cout << "fill operation" << endl;
	fill(nv.begin(), nv.end(), 0);
	for (vector<int>::iterator it = nv.begin(); it != nv.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// sorting operations
	bool ss;
	ss = is_sorted(v.begin(), v.end());
	if (ss) cout << "sorted" << endl;
	else cout << "not sorted" << endl;
	cout << endl;

	stable_sort(v.begin(), v.end(), sort_comp); // sort() works in similiar manner
	cout << "stable sort" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// operations on sorted ranges


	//lower_bound, upper_bound, binary_search
	//max, max_element, min, min_element, equal
}