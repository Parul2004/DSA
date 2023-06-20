#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            cout << "Hello Bacho\n";
            st.push(ch);
        }
        else
        {
            if (st.empty())
                return false;
            else
            {
                if (ch == ')' && st.top() == '(')
                {
                    cout << "Hello Mummy )";
                    st.pop();
                }
                else if (ch == '}' && st.top() == '{')
                {
                    cout << "Hello Mummy }";
                    st.pop();
                }
                else if (ch == ']' && st.top() == '[')
                {
                    cout << "Hello Mummy ]";
                    st.pop();
                }
                else  
                    return false;
            }
        }
    }

    cout << "\n\n";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return st.empty();
}
int main()
{
    string str;
    cin >> str;
    cout << isValid(str) << endl;
    return 0;
}