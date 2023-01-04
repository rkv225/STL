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

	///*
	// non modifying operations
	bool a;
	cout << "all_of:" << endl;
	a = all_of(v.begin(), v.end(), is_even);
	if (a) cout << "all numbers are even" << endl;
	else cout << "all numbers are not even" << endl;

	cout << "any_of:" << endl;
	a = any_of(v.begin(), v.end(), is_even);
	if (a) cout << "any of the numbers is even" << endl;
	else cout << "none of the numbers is even" << endl;

	cout << "none_of:" << endl;
	a = none_of(v.begin(), v.end(), is_even);
	if (a) cout << "none of the numbers is even" << endl;
	else cout << "any number is even" << endl;

	int c;
	cout << "count:" << endl;
	c = count(v.begin(), v.end(), 5);
	cout << "number of 5: " << c << endl;

	cout << "count_if:" << endl;
	c = count_if(v.begin(), v.end(), is_even);
	cout << "even numbers: " << c << endl;

	vector<int>::iterator d;

	cout << "find:" << endl;
	d = find(v.begin(), v.end(), 5); // return iterator to the first occurance
	if (d != v.end()) cout << "found 5" << endl;
	else cout << "not found 5" << endl;
	//*/

	///*
	//use for strings
	const string str = "why waste time learning, when ignorance is instantaneous";
	const string search_str = "time";
	string::const_iterator e;
	cout << "search:" << endl;
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

	cout << "fill operation:" << endl;
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
	cout << "stable sort:" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//*/

	///*
	// operations on sorted ranges
	vector<int> sv = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int>::iterator sc;
	sc = lower_bound(sv.begin(), sv.end(), 4);
	cout << "lower bound:" << *sc << endl;
	sc = upper_bound(sv.begin(), sv.end(), 4);
	cout << "upper bound:" << *sc << endl;
	bool bs = binary_search(sv.begin(), sv.end(), 4);
	if (bs) cout << "found in binary search" << endl;
	else cout << "not found in binary search" << endl;
	//*/

	///*
	// min max operations
	sc = max_element(v.begin(), v.end());
	cout << "max element:" << *sc << endl;
	sc = min_element(v.begin(), v.end());
	cout << "min element:" << *sc << endl;
	cout << "min: " << min(1, 2) << endl;
	cout << "max: " << max(5, 2) << endl;
	//*/
}