#include <bits/stdc++.h>
using namespace std;

// class myStack //
class myStack
{
public:
    list<int> l;
    void push(int value)
    {
        l.push_back(value);
    }
    void pop()
    {
        if (!l.empty())
        {
            l.pop_back();
        }
    }
    int top()
    {
        if (!l.empty())
        {
            return l.back();
        }
        return 0;
    }
    int size()
    {
        return l.size();
    }
    bool isEmpty()
    {
        return l.empty();
    }
};

// main function //
int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    }
    while(!st.isEmpty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}