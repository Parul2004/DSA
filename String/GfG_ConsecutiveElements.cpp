#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "aababbccd";
    /*
    wanted output is : ababcd
    */
    if(s.length()<2){
        cout<<s<<endl;
    }
    else{
        int j = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i]!=s[j]){
                j++;
                s[j] = s[i];
            }
        }

        cout<<s.substr(0,j+1)<<endl;
    }

    return 0;
}