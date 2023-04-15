#include <bits/stdc++.h>
using namespace std;

bool validParenthesis(string str)
{
    stack<char> sh;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            sh.push(ch);
        }

        else
        {
            // false because it is starting from closed bracket which is not valid

            if (sh.empty())
            {

                return false;
            }

            char top = sh.top();

            if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']'))
            {
                sh.pop();
            }
            else
            {
                return false;
            }
        }
    }

    if(sh.empty()){
        return true;
    }
    else return false;
}
int main()
{
    string str;
    cin >> str;

    if (validParenthesis(str))
    {
        cout << "Yup it is Valid 😁😁\n";
    }
    else
    {
        cout << "No its not valid 😅😋\n";
    }

    return 0;
}