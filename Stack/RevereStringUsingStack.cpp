#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "ParulSura1007";

    stack<char> s1;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        s1.push(ch);
    }

    string ans = "";
    
    while (!s1.empty())
    {
        ans.push_back(s1.top());
        s1.pop();
    }

    cout << ans << "\n";

    return 0;
}