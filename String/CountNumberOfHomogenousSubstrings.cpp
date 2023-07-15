#include<iostream>
using namespace std;
int CountNumberOfHomogemous(string s){
    int i = 0,j = 0, n = s.length(),x,mod = 1e9+7;
    long long int ans = 0;
    while(i<n){
        j = i;
        while(j<n && s[i]==s[j]){
            j++;
            x = (j-i);
            ans +=(x)%mod;
        }
        i = j;
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<CountNumberOfHomogemous(s)<<endl;
    return 0;
}