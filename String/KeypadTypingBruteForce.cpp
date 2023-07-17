#include<bits/stdc++.h>
using namespace std;
string printNumber(string s, int n) 
{
    //code here
    map<vector<char>,char>mpp{
    {{'a','b','c'},'2'},
    {{'d','e','f'},'3'},
    {{'g','h','i'},'4'},
    {{'j','k','l'},'5'},
    {{'m','n','o'},'6'},
    {{'p','q','r','s'},'7'},
    {{'t','u','v'},'8'},
    {{'w','x','y','z'},'9'},
    };
    
    string p = "";
    for(int i = 0;i<s.length();i++){
         char ch = s[i];
         for(auto it:mpp){
             vector<char>ans = it.first;
             if(count(ans.begin(),ans.end(),ch) == 1) {
                 p+=it.second;
                 break;
             }
         }
    }
    
    return p;
}
int main(){
    string s;
    cin>>s;
    int n = s.length();
    cout<<printNumber(s,n)<<endl;
    return 0;
}