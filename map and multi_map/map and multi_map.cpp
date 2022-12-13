#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#include <iterator>

using namespace std;

int main()
{
	//map -> sorted, unique keys -> are implemented as red black trees
	//complexity->long(n) for all operations
	cout << "Map:" << endl;
	map<int, string> students = { {1, "a"}, {2, "b"} };
	students.insert({ 3, "c" });
	students[4] = "d";
	students.insert(make_pair(5, "e"));
	cout << "element at 0: " << students[0] << endl;
	cout << "element at 1: " << students.at(1) << endl;
	cout << "size: " << students.size() << endl;
	cout << "find: " << students.find(4)->first << endl;
	map<int, string>::iterator unknown_student = students.find(10);
	if (unknown_student == students.end()) cout << "not found" << endl;
	else cout << unknown_student->first << endl;
	cout << "iterating through map: " << endl;
	map<int, string>::iterator it = students.begin();
	while (it != students.end())
	{
		cout << it->first << " " << it->second << endl;
		it++;
	}
	cout << "another map:" << endl;
	// another map with integer pairs
	map<int, int> nums;
	nums[0]++;
	nums[1]++;
	nums[0]++;
	cout << nums.count(0) << endl;//count will only return 0 or 1 because it doesn't allow duplicate entries
	cout << nums.count(1) << endl;
	cout << nums.count(2) << endl;

	//unordered map -> unsorted, unique -> implemented as hash map
	//find-> Average case: constant, worst case: linear in size
	//insert-> Average case: constant, worst case: linear in size
	cout << "unordered map: " << endl;
	unordered_map<string, string> u = {
		{"RED","#FF0000"},
		{"GREEN","#00FF00"},
		{"BLUE","#0000FF"}
	};

	unordered_map<string, string>::iterator it2 = u.begin();
	while (it2 != u.end())
	{
		cout << it2->first << " " << it2->second << endl;
		it2++;
	}

	//multimap -> allows duplicate, sorted
	//complexity: insertion->log(n)+linear(n), find->log(n)
	cout << "multimap: " << endl;
	multimap<int, int> m = {
		{0, 1}, {0, 2}, {1, 2}, {2, 0}
	};
	multimap<int, int>::iterator it3 = m.begin();
	while (it3 != m.end())
	{
		cout << it3->first << " " << it3->second << endl;
		it3++;
	}
	//similarly unordered multimap exists
}