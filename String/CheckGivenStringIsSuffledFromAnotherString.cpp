#include<bits/stdc++.h>
using namespace std;
bool checkSuffed(string s1,string s2){
    int n = s1.length(),m = s2.length();
    if(n!=m) return false;
    else{
        int idx = -1;
        for(int i = 0;i<m;i++){
            if(s1[i] == s2[0]){
              
            }
        }
    }
}
int main(){
    string s1 = "onetwofour",s2 = "hellofourtwooneworld";
    string res = "";
    if(checkSuffed(s1,s2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}