#include <iostream>
#include <stack>
using namespace std;

void deleteMiddleElementFromStack(stack<int> &s1, int c,int N)
{
    if (c == N/2)
    {
        s1.pop();
        return;
    }

    int temp = s1.top();
    s1.pop();

    deleteMiddleElementFromStack(s1, c + 1,N);
    s1.push(temp);
}
int main()
{
    stack<int> s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);


    int c = 0;
    int s = s1.size();
    deleteMiddleElementFromStack(s1, c,s);

    cout << "Stack Elements After Deleting Middle Element are : ";
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    return 0;
}