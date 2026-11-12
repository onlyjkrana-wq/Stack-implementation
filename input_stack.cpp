#include <bits/stdc++.h>
using namespace std;

// class myStack //
class myStack
{
public:
    vector<int> v;
    void push(int value)
    {
        v.push_back(value);
    }
    void pop()
    {
        if (!v.empty())
        {
            v.pop_back();
        }
    }
    int top()
    {
        if (!v.empty())
        {
            return v.back();
        }
        return 0;
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
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