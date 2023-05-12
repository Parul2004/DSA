#include <bits/stdc++.h>
using namespace std;
int LastWordCount(string str)
{
    int a = 0, l = str.length() - 1;
    while (l >= 0 && str[l] == ' ')
    {
        l--;
    }
    while (l >= 0 && str[l] != ' ')
    {
        a++;
        l--;
    }

    return a;
}
int main()
{
    string str = "I am a Hunter  ";
    cout << LastWordCount(str);
    return 0;
}