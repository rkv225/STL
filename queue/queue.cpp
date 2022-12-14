#include <iostream>
#include <queue>

using namespace std;

int main()
{
	// queue
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout << "size of queue: " << q.size() << endl;
	cout << "front of queue: " << q.front() << endl;
	q.pop();
	cout << "front of queue after pop operation " << q.front() << endl;
	cout << "size of queue " << q.size() << endl;
}
