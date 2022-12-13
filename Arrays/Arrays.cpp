#include <iostream>
#include <array>

using namespace std;

int main()
{
    //c style arrays of fixed size
    //complexity: accessor-> constant
    int arr[] = { 0,1,2,3,4,5,6,7,8 };
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // array stl i.e. a wrapper of above array
    array<int, 8> a1 = { 1, 2, 3, 4, 5, 6, 7, 8 };
    cout << "Count: " << a1.size() << endl;
    auto it = a1.begin();
    while (it != a1.end())
    {
        cout << *it << " ";
        it++;
    }
}