#include <bits/stdc++.h>
using namespace std;
bool validOrNot(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    if (s1 == s2)
        return true;
    return false;
}
int main()
{
    string s1 = "anagram";
    string s2 = "gramana";
 
    int result = validOrNot(s1, s2);
  
    if (result)
    {
        cout << "Both Are Anagram 😁😅";
    }
    else
    {
        cout<<"Both are Not Anagram 😋😁";
    }
    return 0;
}