#include <iostream>
#include <vector>
#include <array>
#include <map>
#include <list>
#include <forward_list>
#include <iterator>

using namespace std;

int main()
{	
	//array
	array<int, 10> arr;
	auto arr_it = arr.begin();
	*arr_it = 1; // input via iterator
	arr_it++;
	*arr_it = 2;
	cout << "arr[0]=" << arr[0] << endl;
	cout << "arr[1]=" << *arr_it << endl; // output via iterator

	//vector
	vector<int> vec;
	vec.reserve(10);
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	cout << "forward iterator: " << endl;
	vector<int>::iterator vec_fit = vec.begin(); // forward iterator
	while (vec_fit != vec.end())
	{
		cout << *vec_fit << " ";
		vec_fit++;
	}

	cout << endl << "reverse iterator: " << endl;
	vector<int>::reverse_iterator vec_rit = vec.rbegin(); // reverse iterator
	while (vec_rit != vec.rend())
	{
		cout << *vec_rit << " ";
		vec_rit++;
	}

	//string 
	const string str = "why waste time learning, when ignorance is instantaneous";
	string::const_iterator cs_fit;
	string::const_reverse_iterator cs_rit;

	cout << "using forward iterator" << endl;
	for (cs_fit = str.begin(); cs_fit != str.end(); cs_fit++)
	{
		cout << *cs_fit;
	}

	cout << "using reverse iterator" << endl;
	for (cs_rit = str.rbegin(); cs_rit != str.rend(); cs_rit++)
	{
		cout << *cs_rit;
	}
}