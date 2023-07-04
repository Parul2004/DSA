#include <bits/stdc++.h>
using namespace std;
int RomanToInt(string s){
    int n = s.length();
    unordered_map<char,int>ch{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };

    int ans = ch[s[n-1]];
    for(int i = 0;i<n-1;i++){
        if(ch[s[i]]<ch[s[i+1]]){
            ans-=ch[s[i]];
        }
        else{
            ans+=ch[s[i]];
        }
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout<<RomanToInt(s);
    return 0;
}