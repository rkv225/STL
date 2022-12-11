#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main()
{
	//pair
	cout << "Pairs: " << endl;
	pair<int, int> p;
	p.first = 0;
	p.second = 1;
	cout << p.first << " " << p.second << endl;
	pair<int, string> p2(1, "rkv");
	cout << p2.first << " " << p2.second << endl;
	pair<int, string> p3 = make_pair(2, "abc");
	cout << p3.first << " " << p3.second << endl;

	// tuple
	cout << "Tuples: " << endl;
	tuple<int, char, string> st1 = make_tuple(1, 'm', "rishabh");
	cout << get<0>(st1) << " " << get<1>(st1) << " " << get<2>(st1) << endl;
	tuple<int, char, string> st2;
	st2 = make_tuple(2, 'f', 'sita');
	cout << get<0>(st2) << " " << get<1>(st2) << " " << get<2>(st2) << endl;
}