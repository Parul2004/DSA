#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

     cout << "Size of stack is " << s.size() << endl;


    cout << s.top() << "\n";

    s.pop();

    cout << s.top() << "\n";

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    

    if (s.empty())
    {
        cout << "\nStack is empty !!!\n";
    }
    else
    {
        cout << "\nStack is not empty !!!\n";
    }

    cout << "Size of stack is " << s.size() << endl;

    return 0;
}