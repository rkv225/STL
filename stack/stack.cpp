#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // stack, constant complexity for operations push, pop, top, size, empty
    stack<int> st;
    if (st.empty()) cout << "stack is empty" << endl;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    if (!st.empty()) cout << "size of stack " << st.size() << endl;
    cout << "top of stack " << st.top() << endl;
    st.pop();
    cout << "top of stack after a pop operation " << st.top() << " size " << st.size() << endl;
}
