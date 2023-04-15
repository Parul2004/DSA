#include <bits/stdc++.h>
using namespace std;

void insertTemp(stack<int> &s, int temp)
{
    if (s.empty())
    {
        s.push(temp);
        return;
    }

    int prev = s.top();
    s.pop();

    insertTemp(s, temp);

    s.push(prev);
}
void reverseStack(stack<int> &s)
{

    if (s.empty())
        return;

    int temp = s.top();
    s.pop();

    reverseStack(s);

    insertTemp(s, temp);
}
int main()
{

    stack<int> s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    reverseStack(s1);

    cout << "Reverse Stack is : ";
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }

    return 0;
}