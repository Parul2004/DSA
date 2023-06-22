#include<bits/stdc++.h>
using namespace std;
string licenseKeyFormatting(string s, int k) {
        int idx = -1;
        string ans="";
        for(int i = 0;i<s.length();i++){
            if(s[i]=='-'){
                idx = i;
                break;
            }
            else{
                ans+=s[i];
            }
        }
        int c = 0;
        string tmp="";
        for(int i = idx;i<s.length();i++){
            if(c==k){
                ans+='-';
                ans+=tmp;
                tmp="";
                c = 0;
            }
            else if(s[i]!='-'){
                tmp+=s[i];
                c++;
            }
        }
        return ans;
    }
int main(){
    string s = "5F3Z-2e-9-w";
    cout<<licenseKeyFormatting(s,4)<<endl;
    return 0;
}