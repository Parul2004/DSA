#include <bits/stdc++.h>
using namespace std;
/*
bool areRotation(string s1,string s2){
    if(s1.length()!=s2.length()) return false;
    string tmp = s1+s1;
    return tmp.find(s2)!=-1?true:false;


    Time Complexity - O(n)
    Space Complexity - O(n)

}
*/
bool areRotation(string s1, string s2)
{
    int n = s1.length(),m = s2.length();
    if (n != m)
        return false;
    for(int i = 0;i<n;i++){
        if(s1[i]==s2[0]){
            if(s1.substr(i)==s2.substr(0,n-i)){
                if(s1.substr(0,i)==s2.substr(n-i)){
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    string s1 = "AACD", s2 = "ACDA";
    if (areRotation(s1, s2))
    {
        cout << "Strings are equal\n";
    }
    else
    {
        cout << "Strings are not equal\n";
    }
    return 0;
}