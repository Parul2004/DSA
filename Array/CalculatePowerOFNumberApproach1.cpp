#include<bits/stdc++.h>
using namespace std;
void findPower(int n,int k){

    double ans = 1.0;
    for(int i = 0;i<k;i++){
        ans*=n;
    }
    cout<<ans<<endl;
}
int main(){
    int n,k;
    cin>>n>>k;
    findPower(n,k);
    return 0;
}