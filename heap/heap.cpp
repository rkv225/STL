#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> h;
    int n;
    cin >> n;
    h.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        h.push_back(x);
    }
    bool is_a_heap;
    is_a_heap = is_heap(h.begin(), h.end());
    make_heap(h.begin(), h.end());
    is_a_heap = is_heap(h.begin(), h.end());
    int ele;
    cin >> ele;
    h.push_back(ele); // adding element at the back of heap 
    push_heap(h.begin(), h.end()); // rearranging element

    pop_heap(h.begin(), h.end()); //moves the element at the end of heap
    ele = h.back();
    h.pop_back(); // removes the last element from heap
}
