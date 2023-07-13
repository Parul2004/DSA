#include<bits/stdc++.h>
using namespace std;
string removeOuterMostParenthsis(string str){
       int n = str.length();
       stack<char>s;
       string ans="";
       for(int i = 0;i<n;i++){
            if(str[i]=='('){
                if(s.size()>0){
                    ans+='(';
                }
                s.push('(');
            }

            if(str[i]==')'){
                if(s.size()>1){
                    ans+=')';
                }
                s.pop();
            }
       }

       return ans;
}
int main(){
    string s;
    cin>>s;

    cout<<"Ans is : "<<removeOuterMostParenthsis(s);

    return 0;
}