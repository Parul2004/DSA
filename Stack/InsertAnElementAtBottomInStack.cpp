#include <bits/stdc++.h>
using namespace std;

void insertKinBottomStack(stack<int> &s1, int k)
{

    if (s1.empty())
    {
        s1.push(k);
        return;
    }

    int val = s1.top();
    s1.pop();

    insertKinBottomStack(s1, k);

    s1.push(val);
}
int main()
{

    stack<int> s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    int k = 110;

    insertKinBottomStack(s1, k);

    cout<<"Now Stack Elements are : ";

    while (!s1.empty())
    {
       cout<<s1.top()<<" ";
       s1.pop();
    }
    

    return 0;
}