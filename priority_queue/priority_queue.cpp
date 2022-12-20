#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int main()
{
	// int priority queues 
	const int data[] = { 1,8,5,6,3,4,0,9,7,2 };
	int n = sizeof(data) / sizeof(data[0]);

	priority_queue<int, vector<int>, greater<int>> mq; //minimum priority queue
	priority_queue<int> pq; //max priority queue

	for (int i = 0; i < n; i++)
	{
		mq.push(data[i]);
		pq.push(data[i]);
	}

	while (!pq.empty())
	{
		cout << " min pq " << mq.top() << endl;
		cout << "max pq " << pq.top() << endl;
		pq.pop();
		mq.pop();
	}

	// custom data priority queue
	struct student
	{
		int roll;
		string name;
	};

	class min_student
	{
	public:
		bool operator()(const student& a, const student& b)
		{
			return a.roll < b.roll;
		}
	};

	class max_student
	{
	public:
		bool operator()(const student& a, const student& b)
		{
			return a.roll > b.roll;
		}
	};

	priority_queue<student, vector<student>, max_student> pq1; // min priority queue
	priority_queue<student, vector<student>, min_student> pq2; // max priority queue

	for (int i = 0; i < n; i++)
	{
		student st;
		st.roll = i;
		st.name = "student " + to_string(i);
		pq1.push(st);
		pq2.push(st);
	}

	cout << "priority queue:" << endl;
	while (!pq2.empty())
	{
		student s1 = pq1.top();
		student s2 = pq2.top();
		cout << "min pq " << s1.name << endl;
		cout << "max pq " << s2.name << endl;
		cout << endl;
		pq1.pop();
		pq2.pop();
	}
}